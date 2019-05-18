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

expresion_variable: VAR ';' 
	{
	  struct simbolo * encontrado = buscar_simbolo($1);
	  if(encontrado == NULL)
	  {
	    printf("Esa varible no esta declarada...\n");
	  }else{
	    imprimir_simbolo(encontrado);    
	  }
	  $$ = encontrado;
	}
	| ID VAR ';' { 
	 struct simbolo * anterior = tabla;
	 tabla = agregar_simbolo($2,$1);
	 tabla->siguiente = anterior;
	 $$ = tabla;
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
	 $$ = tabla;
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
	 $$ = tabla;
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
	 $$ = tabla;
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
