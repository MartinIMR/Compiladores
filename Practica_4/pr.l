%{
#include <stdio.h>
#include <stdlib.h>
#include "pr.tab.h"
#include "cadenas.h"

char * limpiar_cadena(char *);
char * copiar_bufer(char *);
%}

digito [0-9]
entero {digito}+
real {digito}*\.{digito}+|{digito}+\.{digito}*
pow [pP][oO][wW]
si [iI][fF]
identificador [Ss]tring|ent|doble
variable [_|A-Z|a-z]([_|a-z|A-Z|0-9])*
operadores [-|+|\*|\/|^|(|)|,|;|<|>|=]
nocs [^\"\n]+
cadena \"({nocs}*)\"


%%

{entero}	{
		  yylval.entero = atoi(yytext);
		  /* yylval.entero = (int) strtol(yytext,(char **)NULL,10); */
		  return ENTERO;
		}

{real}		{
		 yylval.real = strtod(yytext,NULL);
		 return REAL;
		}

{cadena}	{
		 yylval.cadena = limpiar_cadena(yytext);
		 return (CADENA);
		}

{identificador} {
		  int tipo = 0;
	          char * iden = copiar_bufer(yytext);
		  if(comparar_cadenas("String",iden)||comparar_cadenas("string",iden))
		  {
			tipo = 2;
		  }
		  if(comparar_cadenas("doble",iden)){
			tipo = 1;
		  }
		  if(comparar_cadenas("ent",iden))
		  {
			tipo = 0;
                  }
	 	  free(iden);
		  yylval.entero = tipo;
		  return ID;
	        }

{pow}		{
		 return POW;
		}
	
{si}		{
		 return SI;
		}


{variable}	{
		  char * nombre = copiar_bufer(yytext);
		  yylval.cadena = nombre;
		  return VAR;
		}



{operadores}	{
		 char op = yytext[0];
	         /*
		 switch(op)
		 {
		  case '+': printf("Suma\n"); break;
		  case '-': printf("Resta\n"); break;
		  case '*': printf("Multiplicacion\n"); break;
		  case '/': printf("Division\n"); break;
		  case '^': printf("Potencia\n"); break;
		  case '(': printf("Parentesis derecho\n"); break;
		  case ')': printf("Parentesis izquierdo\n"); break;
		  case ';': printf("Punto y coma\n"); break;
		  case ',': printf("Coma\n"); break;
		 }
		 */
		 return op;
                }

"\n" 		{ 
		return '\n';
		}



%%

char * 
copiar_bufer(char * bufer)
{
 int longitud = longitud_cadena(bufer);
  char * copia;
  copia = (char *) malloc( sizeof(char) * (longitud+1) );
  if(copia == NULL)
  {
    printf("Error al reservar espacio...");
    return NULL;
  }
  copia[longitud] = '\0';
  int i = 0;
  while( i < longitud ) { 
  copia[i] = bufer[i]; 
  i++; 
  }
  return copia;
}

char *
limpiar_cadena(char * original)
{
  int i = 0;
  while(original[i+1] != '"') { i++; };
  char * copia;
  copia = (char *) malloc( sizeof(char) * (i+1) );
  if(copia == NULL)
  {
    printf("Error al reservar espacio...");
    return NULL;
  }
  copia[i] = '\0';
  i = 0;
  while(original[i+1] != '"') { copia[i] = original[i+1]; i++; };
  return copia;
}

