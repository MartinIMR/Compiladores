%{
#include "def.h"
#include "cadenas.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
extern int yylex(void);
int yyerror(char *); 
struct simbolo * tabla = NULL;
struct simbolo * operar_variables(struct simbolo *,struct simbolo *,int,int);
%}

%union {
 int entero;
 double real;
 char * cadena;
 struct simbolo * sptr;
}

%token <cadena> CADENA
%type <cadena> expresion_cadena
%token <entero> ENTERO
%type <entero> expresion_entero
%token <real> REAL
%type <real> expresion_real
%type <sptr> expresion_variable
%type <sptr> operacion_variable
%token <cadena> VAR
%token <entero> ID
%token POW
%token SI

%left '<' '>'
%left '+' '-'
%left '*' '/'
%left '^'
%left '(' ')'

%start entrada

%%

entrada: /* Vacio */
	| entrada linea 
;

linea: '\n'
	| expresion_cadena '\n' { printf("La cadena es:%s\n",$1); free($1); }
	| expresion_variable '\n' { printf("OK\n"); }
	| expresion_real '\n' { printf("El resultado(real) es:%f\n",$1); }
	| expresion_entero '\n' { printf("El resultado(entero) es:%d\n",$1); }
	| expresion_cadena '+' expresion_real
	{ 
	printf("La cadena es:%s\nEl resultado(real) es:%f\n",$1,$3); 
	}
	| expresion_real '+' expresion_cadena
	{
	printf("La cadena es:%s\nEl resultado(real) es:%f\n",$3,$1); 
	}
	| expresion_cadena '-' expresion_real
	{ 
	printf("La cadena es:%s\nEl resultado(real) es:%f\n",$1,(-$3)); 
	}
	| expresion_real '-' expresion_cadena 
	{
	printf("La cadena es:%s\nEl resultado(real) es:%f\n",$3,(-$1)); 
	}
	| expresion_cadena '+' expresion_entero '\n'
	{
	printf("La cadena es:%s\nEl resultado(entero) es:%d\n",$1,$3); 
	}
	| expresion_entero '+' expresion_cadena '\n'
	{
	printf("La cadena es:%s\nEl resultado(entero) es:%d\n",$3,$1); 
	}
	| expresion_cadena '-' expresion_entero '\n'
	{
	printf("La cadena es:%s\nEl resultado(entero) es:%d\n",$1,(-$3)); 
	}
	| expresion_entero '-' expresion_cadena '\n'
	{
	printf("La cadena es:%s\nEl resultado(entero) es:%d\n",$3,(-$1)); 
	}

;

operacion_variable: '(' operacion_variable ')'{
		$$ = $2; 
	 }
	 | VAR '+' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op1 = buscar_simbolo($1);
	  struct simbolo * op2 = buscar_simbolo($3);
	  if( op1 == NULL || op2 == NULL)
	  {
	     printf("Una de las variables no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	      switch(op1->tipo)
		{
		  case entero:
		  resultado = operar_variables(op1,op2,suma,entero); 
		  break;
		  case real:
		  resultado = operar_variables(op1,op2,suma,real); 
		  break;
		  case cadena:
		  resultado = operar_variables(op1,op2,suma,cadena); 
		  break;
		}
	  }
	 $$ = resultado;
	}
	| VAR '-' VAR {
	 struct simbolo * resultado;
	  struct simbolo * op1 = buscar_simbolo($1);
	  struct simbolo * op2 = buscar_simbolo($3);
	  if( op1 == NULL || op2 == NULL)
	  {
	     printf("Una de las variables no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	      switch(op1->tipo)
		{
		  case entero:
		  resultado = operar_variables(op1,op2,resta,entero); 
		  break;
		  case real:
		  resultado = operar_variables(op1,op2,resta,real); 
		  break;
		  case cadena:
		  resultado = operar_variables(op1,op2,resta,cadena); 
		  break;
		}
	  }
	 $$ = resultado;
	}
	| VAR '*' VAR {
	 struct simbolo * resultado;
	  struct simbolo * op1 = buscar_simbolo($1);
	  struct simbolo * op2 = buscar_simbolo($3);
	  if( op1 == NULL || op2 == NULL)
	  {
	     printf("Una de las variables no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	      switch(op1->tipo)
		{
		  case entero:
		  resultado = operar_variables(op1,op2,multiplicacion,entero); 
		  break;
		  case real:
		  resultado = operar_variables(op1,op2,multiplicacion,real); 
		  break;
		  case cadena:
		  resultado = operar_variables(op1,op2,multiplicacion,cadena); 
		  break;
		}
	  }
	 $$ = resultado;
	}


/* Reglas para operacion entre variables y constantes */

/* SUMA */
/* Operacion variable y cadenas */ 
	| VAR '+' expresion_cadena {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = concatenar(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
	    }
	  }
	 $$ = resultado;
	}
	| expresion_cadena '+' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = concatenar(op->valor.v_cadena,$1);
		resultado->siguiente == NULL;
	    }
	  }
	 $$ = resultado;
	}
/* Operacion variable y reales */ 
	| VAR '+' expresion_real {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)(op->valor.v_entero + $3);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = op->valor.v_real + $3;
		resultado->siguiente == NULL;

	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 $$ = resultado;
	}
	| expresion_real '+' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)(op->valor.v_entero + $1);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = op->valor.v_real + $1;
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 $$ = resultado;
	}

/* Operacion variable y enteros */
	| VAR '+' expresion_entero {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (op->valor.v_entero + $3);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)(op->valor.v_real + $3);
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
	| expresion_entero '+' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (op->valor.v_entero + $1);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)(op->valor.v_real + $1);
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
/* RESTA */
/* Operacion variable y cadenas */ 
	| VAR '-' expresion_cadena {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = restar_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion resta de cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
	| expresion_cadena '-' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = restar_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion resta de cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
/* Operacion variable y reales */ 
	| VAR '-' expresion_real {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)(op->valor.v_entero - $3);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = op->valor.v_real - $3;
		resultado->siguiente == NULL;

	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 $$ = resultado;
	}
	| expresion_real '-' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)(op->valor.v_entero - $1);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = op->valor.v_real - $1;
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 $$ = resultado;
	}

/* Operacion variable y enteros */
	| VAR '-' expresion_entero {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (op->valor.v_entero - $3);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)(op->valor.v_real - $3);
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
	| expresion_entero '-' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (op->valor.v_entero - $1);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)(op->valor.v_real - $1);
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
/* MULTIPLICACION */
/* Operacion variable y cadenas */ 
	| VAR '*' expresion_cadena {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = multiplicar_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion multiplicacion de cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
	| expresion_cadena '*' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = multiplicar_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion multiplicacion de cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
/* Operacion variable y reales */ 
	| VAR '*' expresion_real {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)((op->valor.v_entero) * $3);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (op->valor.v_real) * $3;
		resultado->siguiente == NULL;

	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 $$ = resultado;
	}
	| expresion_real '*' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)((op->valor.v_entero) * $1);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (op->valor.v_real) * $1;
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 $$ = resultado;
	}

/* Operacion variable y enteros */
	| VAR '*' expresion_entero {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = ((op->valor.v_entero) * $3);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)((op->valor.v_real) * $3);
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
	| expresion_entero '*' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = ((op->valor.v_entero) * $1);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)((op->valor.v_real) * $1);
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
/* DIVISION */
/* Operacion variable y cadenas */ 
	| VAR '/' expresion_cadena {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = dividir_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion division de cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
	| expresion_cadena '/' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = dividir_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion division de cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
/* Operacion variable y reales */ 
	| VAR '/' expresion_real {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)((double)(op->valor.v_entero) / $3);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (op->valor.v_real) / $3;
		resultado->siguiente == NULL;

	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 $$ = resultado;
	}
	| expresion_real '/' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (double)((double)(op->valor.v_entero) / $1);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",real);
		resultado->valor.v_real = (op->valor.v_real) / $1;
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }

	  }
	 $$ = resultado;
	}

/* Operacion variable y enteros */
	| VAR '/' expresion_entero {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero =(int)((double)(op->valor.v_entero) / $3);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)((op->valor.v_real) / $3);
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
	| expresion_entero '/' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if(op->tipo == entero)
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero =(int)((double)(op->valor.v_entero) / $1);
		resultado->siguiente == NULL;
	    }else if( op->tipo == real )
	    {
		resultado = agregar_simbolo("Resultado",entero);
		resultado->valor.v_entero = (int)((op->valor.v_real) / $1);
		resultado->siguiente == NULL;
	    }else
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
/* POTENCIA */
/* Operacion variable y cadenas */ 
	| VAR '^' expresion_cadena {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != 2 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		/*
		resultado = agregar_simbolo("Resultado",cadena);
		resultado->valor.v_cadena = dividir_cadenas(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
		*/
		printf("La operacion potencia entre cadenas no esta definida...\n");
		resultado = NULL;
	    }
	  }
	 $$ = resultado;
	}
	| expresion_cadena '^' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	    if( op->tipo != entero )
	    {
		printf("La potencia no puede ser llevada a cabo\n");
		resultado = NULL;
	    }else
	    {
		resultado = agregar_simbolo("Resultado",cadena);
		int potencia = op->valor.v_entero;
		if(potencia == 0)
		{
		 resultado->valor.v_cadena = copiar_cadena("Epsilon");
		}else if(potencia < 0)
		{
		 resultado->valor.v_cadena = potencia_cadena(invertir_cadena($1),(-potencia));
		 
		}else{
		 resultado->valor.v_cadena = potencia_cadena($1,potencia);
		}
		resultado->siguiente == NULL;
	    }
	  }
	 free($1);
	 $$ = resultado;
	}
	| POW'('VAR','expresion_entero')' {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($3);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
		if(op->tipo == cadena)
		{
		resultado = agregar_simbolo("Resultado",cadena);
		int potencia = $5;
		if(potencia == 0)
		{
		 resultado->valor.v_cadena = copiar_cadena("Epsilon");
		}else if(potencia < 0)
		{
		 resultado->valor.v_cadena = potencia_cadena(invertir_cadena(op->valor.v_cadena),(-potencia));
		}else{
		 resultado->valor.v_cadena = potencia_cadena(op->valor.v_cadena,potencia);
		}
		resultado->siguiente == NULL;
		}else{
		printf("En desarrollo..\n");
		resultado = NULL;
		}
	  }
	 $$ = resultado;
	}
	| POW'('VAR','VAR')' {
	  struct simbolo * resultado;
	  struct simbolo * op1 = buscar_simbolo($3);
	  struct simbolo * op2 = buscar_simbolo($5);
	  if( op1 == NULL || op2 == NULL )
	  {
	     printf("Alguna variable no ha sido declarada...\n");
	     resultado = NULL;
          }else 
	  {	
		if(op1->tipo == cadena)
		{
		
		resultado = agregar_simbolo("Resultado",cadena);
		int potencia = 0;
		  if(op2->tipo == cadena)
		  {
			printf("No se puede realizar ese operacion...\n");
			resultado = NULL;
		  }else
		  {
		   	if(op2->tipo == entero)
		   	{
		    	potencia = op2->valor.v_entero;
		   	}else if(op2->tipo == real){
		    	potencia = (int) op2->valor.v_real;
		   	}
		if(potencia == 0)
		{
		 resultado->valor.v_cadena = copiar_cadena("Epsilon");
		}else if(potencia < 0)
		{
		 resultado->valor.v_cadena = potencia_cadena(invertir_cadena(op1->valor.v_cadena),(-potencia));
		}else{
		 resultado->valor.v_cadena = potencia_cadena(op1->valor.v_cadena,potencia);
		}
		resultado->siguiente == NULL;

		  }
		}else
		{
		  printf("En desarrollo..\n");
		  resultado = NULL;
		}
	  }
	 $$ = resultado;
	}

;

expresion_variable: VAR {
	  struct simbolo * encontrado = buscar_simbolo($1);
	  if(encontrado == NULL)
	  {
	    printf("La variable no se encuentra declarada...\n");
	  }
	  $$ = encontrado;
        }
	| '(' VAR ')'
	{
	  struct simbolo * encontrado = buscar_simbolo($2);
	  if(encontrado == NULL)
	  {
	    printf("La variable no se encuentra declarada...\n");
	  }
	  $$ = encontrado;

	}
	| '(' operacion_variable ')'{
	  struct simbolo * recibida = $2;
	  if(recibida == NULL)
	  {
	    printf("La operacion no es valida...\n");
	  }
	  $$ = recibida;
	}
	| VAR ';' 
	{
	  struct simbolo * encontrado = buscar_simbolo($1);
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\n");
	  }else{
	    imprimir_simbolo(encontrado);    
	  }
	}
	| VAR '=' expresion_cadena ';'{
	  struct simbolo * encontrado = buscar_simbolo($1);
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\n");
	  }else
	  {
	    if(encontrado->tipo != 2)
	    {
	      printf("La asignacion no se puede realizar...\n");
	    }else
	    {
		free(encontrado->valor.v_cadena);
		encontrado->valor.v_cadena = $3;
            }
	  }
	}
 	| VAR '=' expresion_entero ';'{
	  struct simbolo * encontrado = buscar_simbolo($1);
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\n");
	  }else
	  {
	    if(encontrado->tipo == entero)
	    {
	      encontrado->valor.v_entero = (int) $3;
	    }else if(encontrado->tipo == real)
	    {
	      encontrado->valor.v_real = (double) $3;
	    }else
	    {
	     printf("La asignacion no se puede realizar...\n");
            }
	  }
	}
 	| VAR '=' expresion_real ';'{
	  struct simbolo * encontrado = buscar_simbolo($1);
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\n");
	  }else
	  {
	    if(encontrado->tipo == entero)
	    {
	      encontrado->valor.v_entero = (int) $3;
	    }else if(encontrado->tipo == real)
	    {
	      encontrado->valor.v_real = (double) $3;
	    }else
	    {
	     printf("La asignacion no se puede realizar...\n");
	    }
	  }
	}
	| ID VAR ';' {
	 struct simbolo * nuevo = buscar_simbolo($2);
	 if(nuevo == NULL)
	 {
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo($2,$1);
	 tabla->siguiente = anterior; 
         }else{
	  printf("No se pudo hacer la declaracion, la variable ya existe...\n");
	 }
	}
	| ID VAR '=' expresion_cadena ';' { 

	 struct simbolo * nuevo = buscar_simbolo($2);
	 if(nuevo == NULL)
	 {
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo($2,$1);
	 tabla -> siguiente = anterior;
	  if(tabla->tipo != 2)
	  {
	   printf("Asignacion no compatible, variable no declarada...\n");
	   free(tabla);
	   tabla = anterior;
	  }else
	  {
	   tabla->valor.v_cadena = $4;
	  }
	 }else
	 {
	   printf("No se pudo hacer la declaracion, la variable ya existe...\n");
 	 }

	}
	| ID VAR '=' expresion_entero ';' { 
	 struct simbolo * nuevo = buscar_simbolo($2);
	 if(nuevo == NULL)
	 {
	  struct simbolo * anterior = tabla;
	  tabla = agregar_simbolo($2,$1);
	  tabla -> siguiente = anterior;
	  if(tabla->tipo == entero)
	  {
	   tabla->valor.v_entero = $4;
	  }else if(tabla->tipo == real)
	  {
	   tabla->valor.v_real = (double) $4;
	  }else{
	   printf("Asignacion no compatible, variable no declarada...\n");
	   free(tabla);
	   tabla = anterior;
	  }
	
	 }else
	 {
		printf("No se pudo hacer la declaracion, la variable ya existe...\n");
	 }
	 
	}
	| ID VAR '=' expresion_real ';' { 
	 struct simbolo * nuevo = buscar_simbolo($2);
	 if(nuevo == NULL)
	 {
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo($2,$1);
	 tabla -> siguiente = anterior;
	 if(tabla->tipo == real)
	 {
	   tabla->valor.v_real = $4;
	 }else if(tabla->tipo == entero)
	 {
	   tabla->valor.v_entero = (int) $4;
	 }else{
	   printf("Asignacion no compatible, variable no declarada...\n");
	   free(tabla);
	   tabla = anterior;
	 }

	 }else{
		printf("No se pudo hacer la declaracion, la variable ya existe...\n");
	 }

	}
/* Declaracion y asignacion variable-variable */
	| ID VAR '=' operacion_variable ';' {
	if($4 == NULL)
	{
	  printf("No se puede asignar un valor nulo, la declaracion no se realizo...\n");
	}else{
	  struct simbolo * encontrado = buscar_simbolo($2);
	  if(encontrado == NULL)
	  {
	    struct simbolo * anterior = tabla;
	    tabla = agregar_simbolo($2,$1);
	    tabla -> siguiente = anterior;
	    struct simbolo * resultado = $4;
	    int t1 = tabla->tipo, t2 = resultado->tipo;
		if(t1 == t2)
		{
		   switch(t1)
		   {
			case entero:
			tabla->valor.v_entero = resultado->valor.v_entero;
			break;
			case real:
			tabla->valor.v_real = resultado->valor.v_real;
			break;
			case cadena:
			tabla->valor.v_cadena = copiar_cadena(resultado->valor.v_cadena);
			free(resultado->valor.v_cadena);
			break;
		   }
		}else if( t1 == entero && t2 == real){
		  tabla->valor.v_entero = (int) resultado->valor.v_real;
		}else if( t1 == real && t2 == entero){
		  tabla->valor.v_real = (double) resultado->valor.v_entero;
		}else{
		  printf("Asignacion incompatible, no realizada...\n");
		}
		free(resultado);
	  }else
	  {
		printf("No se pudo hacer la declaracion, la variable ya existe...\n");
	  }
	}
	}
	| VAR '=' operacion_variable ';' {
	if($3 == NULL)
	{
	  printf("No se puede asignar valor nulo, no se realizo la asignacion...\n");
	}else{

	  struct simbolo * encontrado = buscar_simbolo($1);
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\nAsignacion no realizada\n");
	  }else
	  {
		struct simbolo * resultado = $3;
		int t1 = encontrado->tipo, t2 = resultado->tipo;
		if(t1 == t2)
		{
		   switch(t1)
		   {
			case entero:
			encontrado->valor.v_entero = resultado->valor.v_entero;
			break;
			case real:
			encontrado->valor.v_real = resultado->valor.v_real;
			break;
			case cadena:
			free(encontrado->valor.v_cadena);
			encontrado->valor.v_cadena = copiar_cadena(resultado->valor.v_cadena);
			free(resultado->valor.v_cadena);
			break;
		   }
		}else if( t1 == entero && t2 == real){
		  encontrado->valor.v_entero = (int) resultado->valor.v_real;
		}else if( t1 == real && t2 == entero){
		  encontrado->valor.v_real = (double) resultado->valor.v_entero;
		}else{
		  printf("Asignacion incompatible, no realizada...\n");
		}
		free(resultado);
	  }
	}
	}
	| operacion_variable ';'{
	  imprimir_simbolo($1);
	  free($1);
	}
;


expresion_cadena: CADENA { $$ = $1;}
	| expresion_cadena '+' expresion_cadena
	 { 
	   char * s1 = $1;
	   char * s2 = $3;
	   $$ = concatenar(s1,s2);
	   free(s1);
           free(s2);
	 }
	| expresion_cadena '^' expresion_entero 
	{ 
	  int potencia = $3;
	  if(potencia ==  0)
	  {
		$$ = "";
	  }else if(potencia < 0)
	  {
		$$ = potencia_cadena(invertir_cadena($1),(-potencia));	
	  }else{
		$$ = potencia_cadena($1,potencia);
	  }

	}
	| '+'expresion_cadena {$$ = $2;}
	| '-''-' expresion_cadena{ $$ = $3;}
	| '(' expresion_cadena ')' { $$ = $2; }
	| POW '('expresion_cadena','expresion_entero')' {
	  int potencia = $5;
	  if(potencia ==  0)
	  {
		$$ = "";	
	  }else if(potencia < 0)
	  {
		$$ = potencia_cadena(invertir_cadena($3),(-potencia));	
	  }else{
		$$ = potencia_cadena($3,potencia);
	  }
	}
	| SI '('expresion_variable'<'expresion_variable')'';'{
		struct simbolo * op1 = $3;
		struct simbolo * op2 = $5;
		char * resultado;
	if(op1 == NULL || op2 == NULL)
	{
		printf("Alguna de las variables es nula\nNo se puede realizar la comparacion...\n");
		resultado = copiar_cadena("Error");
	}else
	{
		int t1 = op1->tipo,t2 = op2->tipo;
		int l1,l2;
		if(t1 == t2)
		{
		   switch(t1)
		   {
			case entero:
			l1 = op1->valor.v_entero;
			l2 = op2->valor.v_entero;
			break;
			case real:
			l1 = (int)op1->valor.v_real;
			l2 = (int)op2->valor.v_real;
			break;
			case cadena:
			l1 = longitud_cadena(op1->valor.v_cadena); 
			l2 = longitud_cadena(op2->valor.v_cadena);
			break;
		   }
		}else if( t1 == entero && t2 == real){
		  l1 = op1->valor.v_entero;  
		  l2 = (int) op2->valor.v_real;
		}else if( t1 == real && t2 == entero){
		  l1 = (int)op1->valor.v_real; 
		  l2 = op2->valor.v_entero;
		}else if( t1 == cadena && t2 == real){
		  l1 = longitud_cadena(op1->valor.v_cadena);  
		  l2 = (int) op2->valor.v_real;
		}else if( t1 == real && t2 == cadena){
		  l1 = (int) op1->valor.v_real;
		  l2 = longitud_cadena(op2->valor.v_cadena);  
		}else if( t1 == cadena && t2 == entero){
		  l1 = longitud_cadena(op1->valor.v_cadena);  
		  l2 =  op2->valor.v_entero;
		}else if( t1 == entero && t2 == cadena){
		  l1 = (int) op1->valor.v_entero;
		  l2 = longitud_cadena(op2->valor.v_cadena);  
		}
		if(l1 < l2)
		{
		resultado = copiar_cadena("true");
		}else{
		resultado = copiar_cadena("false");
		}
	}
	     $$ = resultado;
	}
	| SI '('expresion_variable'>'expresion_variable')'';'{
		struct simbolo * op1 = $3;
		struct simbolo * op2 = $5;
		char * resultado;
	if(op1 == NULL || op2 == NULL)
	{
		printf("Alguna de las variables es nula\nNo se puede realizar la comparacion...\n");
		resultado = copiar_cadena("Error");
	}else
	{
		int t1 = op1->tipo,t2 = op2->tipo;
		int l1,l2;
		if(t1 == t2)
		{
		   switch(t1)
		   {
			case entero:
			l1 = op1->valor.v_entero;
			l2 = op2->valor.v_entero;
			break;
			case real:
			l1 = (int)op1->valor.v_real;
			l2 = (int)op2->valor.v_real;
			break;
			case cadena:
			l1 = longitud_cadena(op1->valor.v_cadena); 
			l2 = longitud_cadena(op2->valor.v_cadena);
			break;
		   }
		}else if( t1 == entero && t2 == real){
		  l1 = op1->valor.v_entero;  
		  l2 = (int) op2->valor.v_real;
		}else if( t1 == real && t2 == entero){
		  l1 = (int)op1->valor.v_real; 
		  l2 = op2->valor.v_entero;
		}else if( t1 == cadena && t2 == real){
		  l1 = longitud_cadena(op1->valor.v_cadena);  
		  l2 = (int) op2->valor.v_real;
		}else if( t1 == real && t2 == cadena){
		  l1 = (int) op1->valor.v_real;
		  l2 = longitud_cadena(op2->valor.v_cadena);  
		}else if( t1 == cadena && t2 == entero){
		  l1 = longitud_cadena(op1->valor.v_cadena);  
		  l2 =  op2->valor.v_entero;
		}else if( t1 == entero && t2 == cadena){
		  l1 = (int) op1->valor.v_entero;
		  l2 = longitud_cadena(op2->valor.v_cadena);  
		}
		if(l1 > l2)
		{
		resultado = copiar_cadena("true");
		}else{
		resultado = copiar_cadena("false");
		}
	}
	     $$ = resultado;
	}



	| SI'('expresion_entero'<'expresion_real')'';' {
	 char * resultado;
	 if($3 < $5){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 $$ = resultado;
	}
	| SI'('expresion_real'<'expresion_entero')'';' { 
	 char * resultado;
	 if($3 < $5){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 $$ = resultado;

	} 
	| SI'('expresion_real'<'expresion_real')'';' {
	char * resultado;
	 if($3 < $5){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 $$ = resultado;
	}
	| SI'('expresion_entero'<'expresion_entero')'';' {
	 char * resultado;
	 if($3 < $5){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 $$ = resultado;
	}
	| SI'('expresion_entero'>'expresion_real')'';' {
	 char * resultado;
	 if($3 > $5){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 $$ = resultado;
	}
	| SI'('expresion_real'>'expresion_entero')'';' {
	 char * resultado;
	 if($3 > $5){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 $$ = resultado;
	}
	| SI'('expresion_real'>'expresion_real')'';' {
	 char * resultado;
	 if($3 > $5){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 $$ = resultado;
	}
	| SI'('expresion_entero'>'expresion_entero')'';' {
	 char * resultado;
	 if($3 > $5){ 
	  resultado = copiar_cadena("true");
	 }else{
	  resultado = copiar_cadena("false");
	 } 
	 $$ = resultado;
	}
;

expresion_real: REAL { $$ = $1; }
	| expresion_real '+' expresion_real{ $$ = $1 + $3; }
	| expresion_real '+' expresion_entero{ $$ = $1 + $3; }
	| expresion_entero '+' expresion_real{ $$ = $1 + $3; }
	| expresion_real '-' expresion_real{ $$ = $1 - $3; }
	| expresion_real '-' expresion_entero{ $$ = $1 - $3; }
	| expresion_entero '-' expresion_real{ $$ = $1 - $3; }
	| expresion_real '*' expresion_real{ $$ = $1 * $3; }
	| expresion_real '*' expresion_entero{ $$ = $1 * $3; }
	| expresion_entero '*' expresion_real{ $$ = $1 * $3; }
	| expresion_real '/' expresion_real{ $$ = $1 / $3; }
	| expresion_entero '/' expresion_entero{ $$ = (double)$1 / $3; }
	| expresion_real '/' expresion_entero{ $$ = $1 / $3; }
	| expresion_entero '/' expresion_real{ $$ = $1 / $3; }
	| expresion_entero '^' expresion_real{ $$ = pow($1,$3); }
	| expresion_real '^' expresion_entero{ $$ = pow($1,$3); }
	| expresion_real '^' expresion_real{ $$ = pow($1,$3); }
	| '+'expresion_real { $$ = $2; }
	| '-'expresion_real { $$ = (-$2); }
	| POW'('expresion_entero','expresion_real ')'{ $$ = pow($3,$5);  }
	| POW'('expresion_real','expresion_real ')'{ $$ = pow($3,$5);  }
	| POW'('expresion_real','expresion_entero ')'{ $$ = pow($3,$5);  }
	| '(' expresion_real')' { $$ = $2; }
;

expresion_entero: ENTERO { $$ = $1; }
	| expresion_entero '+' expresion_entero { $$ = $1 + $3; }
	| expresion_entero '-' expresion_entero { $$ = $1 - $3; }
	| expresion_entero '*' expresion_entero { $$ = $1 * $3; }
	| expresion_entero '^' expresion_entero{ $$ = (int) pow($1,$3); }
	| POW'('expresion_entero','expresion_entero ')'{ $$ = (int) pow($3,$5);  }
	| '+' expresion_entero { $$ = $2; }
	| '-' expresion_entero { $$ = (-$2); }
	| '(' expresion_entero ')' { $$ = $2; }
;

%% 

int
main(void)
{
  yyparse();
}

int
yyerror(char *s)
{
 printf("Error:----%s----\n",s);
}


struct simbolo *
operar_variables(struct simbolo * v1,struct simbolo * v2,int operacion,int tipo_regreso)
{
  struct simbolo * resultado = agregar_simbolo("Resultado",tipo_regreso);
  resultado->siguiente = NULL;
  double td;
  char * tc;
  if(v1->tipo == v2->tipo)
  {
    switch(v1->tipo)
    {
	case entero:
	switch(operacion)
	{
	  case suma:
	  td = v1->valor.v_entero + v2->valor.v_entero;
	  break;
	  case resta:
	  td = v1->valor.v_entero - v2->valor.v_entero;
	  break;
	  case multiplicacion:
	  td = v1->valor.v_entero * v2->valor.v_entero;
	  break;
	  case division:
	  td = (double)(v1->valor.v_entero)/(v2->valor.v_entero);
	  break;
	}
	break;
	case real:
	switch(operacion)
	{
	  case suma:
	  td = v1->valor.v_real + v2->valor.v_real;
	  break;
	  case resta:
	  td = v1->valor.v_real - v2->valor.v_real;
	  break;
	  case multiplicacion:
	  td = v1->valor.v_real * v2->valor.v_real;
	  break;
	  case division:
	  td = (v1->valor.v_real)/(v2->valor.v_real);
	  break;
	}

	break;
	case cadena:
	switch(operacion)
	{
	  case suma:
	  tc = concatenar(v1->valor.v_cadena,v2->valor.v_cadena);
	  break;
	  case resta:
	  printf("Operacion resta de cadenas no esta definida...\n");
	  break;
	  case multiplicacion:
	  printf("Operacion multiplicacion de cadenas no esta definida...\n");
	  break;
	  case division:
	  printf("Operacion division de cadenas no esta definida...\n");
	  break;
	}
      break;
    }
  }

  switch(tipo_regreso)
  {
    case entero:
    resultado->valor.v_entero = (int) td;
    break;
    case real:
    resultado->valor.v_real = (double) td;
    break;
    case cadena:
    resultado->valor.v_cadena = tc;
    break;
  }
  return resultado;

}

