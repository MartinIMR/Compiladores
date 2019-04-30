%{
#include <stdio.h>
#include <stdlib.h>
#include "pr.tab.h"

char * copiar_cadena(char *);
%}

digito [0-9]
entero {digito}+
real {digito}*\.{digito}+|{digito}+\.{digito}*
operadores [-|+|\*|\/]
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
		 yylval.cadena = copiar_cadena(yytext);
		 return (CADENA);
		}

{operadores}	{
		 char op = yytext[0];
		 switch(op)
		 {
		  case '+': printf("Suma\n"); break;
		  case '-': printf("Resta\n"); break;
		  case '*': printf("Multiplicacion\n"); break;
		  case '/': printf("Division\n"); break;
		 }
		 return op;
                }

"\n" 		{ 
		return '\n';
		}

%%

char *
copiar_cadena(char * original)
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

