#include "cadenas.h"
#include <stdio.h>
#include <stdlib.h>

int
comparar_cadenas(char * s1,char * s2)
{
  int l1 = longitud_cadena(s1);
  int l2 = longitud_cadena(s2);
  if(l1 != l2)
  {
    return 0;
  }
  int i = 0;
  while(s1[i] != '\0' && s2[i] != '\0') {
        if(s1[i] != s2[i])
        {
          return 0;
        }
        i++;
  }
  return 1;
}

int
longitud_cadena(char * cadena)
{
 int i = 0;
  while(cadena[i])
   i++;
 return i;
}

char * 
potencia_cadena(char * cadena, int numero)
{
  char * concatenada = NULL;
  if(numero <= 0)
  {
	concatenada = "";
  }
  if(numero == 1)
  {
    	concatenada = cadena;
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
  return concatenada;
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
