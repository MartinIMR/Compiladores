%{
#include "def.h"
#include "cadenas.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
extern int yylex(void);
int yyerror(char *); 
struct simbolo * tabla = NULL;

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

operacion_variable: VAR '+' VAR {
	  struct simbolo * resultado;
	  struct simbolo * op1 = buscar_simbolo($1);
	  struct simbolo * op2 = buscar_simbolo($3);
	  if( op1 == NULL || op2 == NULL)
	  {
	     printf("Una de las variables no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {	
	  int t1 = op1->tipo, t2 = op2->tipo;
	    if( t1 == t2 )
	    {
	       switch(t1)
	       {
		 case 0:
		 resultado = agregar_simbolo("Resultado",0);
		 resultado->valor.v_entero = op1->valor.v_entero + op2->valor.v_entero;
		 break;
		 case 1:
		 resultado = agregar_simbolo("Resultado",1);
		 resultado->valor.v_real = op1->valor.v_real + op2->valor.v_real;
		 break;
		 case 2:
		 resultado = agregar_simbolo("Resultado",2);
		 resultado->valor.v_cadena = concatenar(op1->valor.v_cadena,op2->valor.v_cadena);
		 break;
	       }
	       resultado->siguiente = NULL;
	    }else
	    {
		printf("En construccion...\n");
		resultado == NULL;
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
	  int t1 = op1->tipo, t2 = op2->tipo;
	    if( t1 == t2 )
	    {
	       switch(t1)
	       {
		 case 0:
		 resultado = agregar_simbolo("Resultado",0);
		 resultado->valor.v_entero = op1->valor.v_entero - op2->valor.v_entero;
		 break;
		 case 1:
		 resultado = agregar_simbolo("Resultado",1);
		 resultado->valor.v_real = op1->valor.v_real - op2->valor.v_real;
		 break;
		 case 2:
		 resultado = agregar_simbolo("Resultado",2);
		 printf("La operacion susbtracion no esta definida para cadenas.\nSe concatenaran.\n");
		 resultado->valor.v_cadena = concatenar(op1->valor.v_cadena,op2->valor.v_cadena);
		 break;
	       }
	       resultado->siguiente = NULL;
	    }else
	    {
		printf("En construccion...\n");
		resultado == NULL;
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
	  int t1 = op1->tipo, t2 = op2->tipo;
	    if( t1 == t2 )
	    {
	       switch(t1)
	       {
		 case 0:
		 resultado = agregar_simbolo("Resultado",0);
		 resultado->valor.v_entero = op1->valor.v_entero * op2->valor.v_entero;
		 break;
		 case 1:
		 resultado = agregar_simbolo("Resultado",1);
		 resultado->valor.v_real = op1->valor.v_real * op2->valor.v_real;
		 break;
		 case 2:
		 resultado = agregar_simbolo("Resultado",2);
		 printf("La operacion multiplicacion no esta definida para cadenas.\nSe concatenaran.\n");
		 resultado->valor.v_cadena = concatenar(op1->valor.v_cadena,op2->valor.v_cadena);
		 break;
	       }
	       resultado->siguiente = NULL;
	    }else
	    {
		printf("En construccion...\n");
		resultado == NULL;
	    }
	  }
	 $$ = resultado;
	}
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
		resultado = agregar_simbolo("Resultado",2);
		resultado->valor.v_cadena = concatenar(op->valor.v_cadena,$3);
		resultado->siguiente == NULL;
	    }
	  }
	 $$ = resultado;

	}
	| VAR '+' expresion_real {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if( op->tipo != 1 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		resultado = agregar_simbolo("Resultado",1);
		resultado->valor.v_real = op->valor.v_real + $3;
		resultado->siguiente == NULL;
	    }
	  }
	 $$ = resultado;

	}
	| VAR '+' expresion_entero {
	  struct simbolo * resultado;
	  struct simbolo * op = buscar_simbolo($1);
	  if( op == NULL)
	  {
	     printf("La variable no ha sido declarada...\n");
	     resultado = NULL;
          }else
	  {
	    if( op->tipo != 0 )
	    {
		printf("Tipos no compatibles\n");
		resultado = NULL;
	    }else
	    {
		resultado = agregar_simbolo("Resultado",0);
		resultado->valor.v_entero = op->valor.v_entero + $3;
		resultado->siguiente == NULL;
	    }
	  }
	 $$ = resultado;

	}

;

expresion_variable: VAR ';' 
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
	    if(encontrado->tipo != 0)
	    {
	      printf("La asignacion no se puede realizar...\n");

	    }else
	    {
		encontrado->valor.v_entero = $3;
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
	    if(encontrado->tipo != 1)
	    {
	      printf("La asignacion no se puede realizar...\n");
	    }else
	    {
		encontrado->valor.v_real = $3;
            }
	  }

	}
	| ID VAR ';' { 
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo($2,$1);
	 tabla->siguiente = anterior;
	}
	| ID VAR '=' expresion_cadena ';' { 
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

	}
	| ID VAR '=' expresion_entero ';' { 
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo($2,$1);
	 tabla -> siguiente = anterior;
	 if(tabla->tipo != 0)
	 {
	   printf("Asignacion no compatible, variable no declarada...\n");
	   free(tabla);
	   tabla = anterior;
	 }else
	 {
	   tabla->valor.v_entero = $4;
	 }
	}
	| ID VAR '=' expresion_real ';' { 
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo($2,$1);
	 tabla -> siguiente = anterior;
	 if(tabla->tipo != 1)
	 {
	   printf("Asignacion no compatible, variable no declarada...\n");
	   free(tabla);
	   tabla = anterior;
	 }else
	 {
	   tabla->valor.v_real = $4;
	 }
	}
	| VAR '=' operacion_variable ';' {

	  struct simbolo * encontrado = buscar_simbolo($1);
	  if(encontrado == NULL)
	  {
	    printf("Esa variable no esta declarada...\nAsignacion no realizada\n");
	  }else
	  {
	    struct simbolo * resultado = $3;
	    if(encontrado->tipo != resultado->tipo )
	    {
	      printf("Tipos no concuerdan...\nAsignacion no realizada\n");
	    }else
	    {
		switch(encontrado->tipo)
		{
		  case 0:
		  encontrado->valor.v_entero = resultado->valor.v_entero;
		  break;
		  case 1:
		  encontrado->valor.v_real = resultado->valor.v_real;
		  break;
		  case 2:
		  free(encontrado->valor.v_cadena);
		  encontrado->valor.v_cadena = copiar_cadena(resultado->valor.v_cadena);
		  free(resultado->valor.v_cadena);
		  break;
		}
		free(resultado);
            }
	  }
	}
	| operacion_variable ';'{
	  imprimir_simbolo($1);
	  free($1);
	}
	| ID VAR '=' operacion_variable ';' {
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo($2,$1);
	 tabla -> siguiente = anterior;
	 struct simbolo * resultado = $4;
	 if(tabla->tipo != resultado->tipo)
	 {
	   printf("Asignacion no compatible, variable no declarada...\n");
	   free(tabla);
	   free(resultado);
	   tabla = anterior;
	 }else
	 {
		switch(tabla->tipo)
		{
		  case 0:
		  tabla->valor.v_entero = resultado->valor.v_entero;
		  break;
		  case 1:
		  tabla->valor.v_real = resultado->valor.v_real;
		  break;
		  case 2:
		  tabla->valor.v_cadena = copiar_cadena(resultado->valor.v_cadena);
		  free(resultado->valor.v_cadena);
		  break;
		}
		free(resultado);
	 }

	}
;


expresion_cadena: CADENA { $$ = $1;}
	| expresion_cadena'+'expresion_cadena
	 { 
	   char * s1 = $1;
	   char * s2 = $3;
	   $$ = concatenar(s1,s2);
	   free(s1);
           free(s2);
	 }
	| expresion_cadena '^' expresion_entero 
	{ 
          $$ = potencia_cadena($1,$3); 
	}
	| '+'expresion_cadena {$$ = $2;}
	| '-''-' expresion_cadena{ $$ = $3;}
	| '(' expresion_cadena ')' { $$ = $2; }
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
	| POW'('expresion_entero','expresion_real ')'';'{ $$ = pow($3,$5);  }
	| POW'('expresion_real','expresion_real ')'';'{ $$ = pow($3,$5);  }
	| POW'('expresion_real','expresion_entero ')'';'{ $$ = pow($3,$5);  }
	| '(' expresion_real')' { $$ = $2; }
;

expresion_entero: ENTERO { $$ = $1; }
	| expresion_entero '+' expresion_entero { $$ = $1 + $3; }
	| expresion_entero '-' expresion_entero { $$ = $1 - $3; }
	| expresion_entero '*' expresion_entero { $$ = $1 * $3; }
	| expresion_entero '^' expresion_entero{ $$ = (int) pow($1,$3); }
	| POW'('expresion_entero','expresion_entero ')'';'{ $$ = (int) pow($3,$5);  }
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
