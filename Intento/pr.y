%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
extern int yylex(void);
int yyerror(char *); 
char * concatenar(char *, char *);
int numero_caracteres(char *);
char * reservar_cadena(int);
char * copiar_cadena(char *);
%}

%union {
 int entero;
 double real;
 char * cadena;
}

%token <cadena> CADENA
%type <cadena> expresion_cadena
%token <entero> ENTERO
%type <entero> expresion_entero
%token <real> REAL
%type <real> expresion_real
%token POW

%left '^'
%left '+' '-'
%left '*' '/'

%start entrada

%%

entrada: /* Vacio */
	| entrada linea 
;

linea: '\n'
	| expresion_cadena '\n' { printf("La cadena es:%s\n",$1); free($1); }
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
	  char * cadena = $1;
	  int numero = $3;
	  char * concatenada = NULL;
	  if(numero <= 0)
	  {
		concatenada = "";
          }
	  if(numero == 1)
	  {
	    	concatenada = $1;
	  }else
	  {
	
	   concatenada = concatenar(cadena,cadena);
	   for(int  i = 0; i < numero-2 ; i++ )
	   {
	    char * aux = concatenada;
	    concatenada = concatenar(aux,cadena);
	    free(aux);
	   }

	  }
	   $$ = concatenada;
	}

	| '+'expresion_cadena {$$ = $2;}
	| '-''-' expresion_cadena{ $$ = $3;}
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
	| POW'('expresion_entero','expresion_entero ')'';'{ $$ = pow($3,$5);  }
	| POW'('expresion_entero','expresion_real ')'';'{ $$ = pow($3,$5);  }
	| POW'('expresion_real','expresion_real ')'';'{ $$ = pow($3,$5);  }
	| POW'('expresion_real','expresion_entero ')'';'{ $$ = pow($3,$5);  }
;

expresion_entero: ENTERO { $$ = $1; }
	| expresion_entero '+' expresion_entero { $$ = $1 + $3; }
	| expresion_entero '-' expresion_entero { $$ = $1 - $3; }
	| expresion_entero '*' expresion_entero { $$ = $1 * $3; }
	| expresion_entero '^' expresion_entero{ $$ = (int) pow($1,$3); }
	| '+' expresion_entero { $$ = $2; }
	| '-' expresion_entero { $$ = (-$2); }
;

%% 

int
main(void)
{
  yyparse();
}

char *
concatenar(char * s1,char * s2)
{
 int l1 = numero_caracteres(s1);
 int l2 = numero_caracteres(s2);
 char * cadena = (char *) malloc( sizeof(char) * (l1+l2+1));
 if(cadena == NULL)
 {
   printf("No se pudo reservar espacio para concatenacion...\n");
   return NULL;
 }
 cadena[l1+l2] = '\0';
 int i = 0;
 while(s1[i] != '\0') {cadena[i] = s1[i]; i++; };
 int j = i;
 i = 0;
 while(s2[i] != '\0') {cadena[j+i] = s2[i]; i++; };
 return cadena;
}

char *
copiar_cadena(char * cadena)
{
 int longitud = numero_caracteres(cadena);
 char * copia = reservar_cadena(longitud);
 int i = 0;
 while(cadena[i] != '\0') { copia[i] = cadena[i]; i++; };
 return copia;
}

char *
reservar_cadena(int longitud)
{
 char * reservada;
 reservada = (char *) malloc( sizeof(char) * (longitud+1) );
 if(reservada == NULL)
 {
   printf("No se pudo reservar espacio para la cadena\n");
   return NULL;
 }
 reservada[longitud] = '\0';
 return reservada;
}

int
numero_caracteres(char * cadena)
{
 int i=0;
 while(cadena[i] != '\0') { i++; };
 return i;
}

int
yyerror(char *s)
{
 printf("Error:----%s----\n",s);
}
