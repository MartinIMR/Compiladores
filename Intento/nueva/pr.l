%{
#include <stdio.h>
#include <stdlib.h>
#include "pr.tab.h"

char * limpiar_cadena(char *);
%}

alfabeto [a-zA-Z]
digito [0-9]
entero [+-]?{digito}+
real {digito}*\.{digito}+|{digito}+\.{digito}*
pow [pP][oO][wW]"("/ ( [{cadena}{entero}{real}] "," {entero} ")" ;)
operadores [-|+|\*|\/|^|{pow}]
nocs [^\"\n]+
cadena \"({nocs}*)\"
potencia [{cadena}{entero}{real}]"^"{entero}|[pP][oO][wW]\(

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

{operadores}	{
		 char op = yytext[0];
		 if(op == 'p' || op == 'P')
		 {
		   op = '^';
		 }
		 switch(op)
		 {
		  case '+': printf("Suma\n"); break;
		  case '-': printf("Resta\n"); break;
		  case '*': printf("Multiplicacion\n"); break;
		  case '/': printf("Division\n"); break;
		  case '^': printf("Potencia\n"); break;
		 }
		 return op;
                }

"\n" 		{ 
		return '\n';
		}

%%

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

