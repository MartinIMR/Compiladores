#include <stdlib.h>
#include <stdio.h>
#include "def.h"
#include "cadenas.h"

struct simbolo * 
agregar_simbolo(char * name,int type)
{
  struct simbolo * nuevo;
  nuevo = (struct simbolo *) malloc(sizeof(struct simbolo));
  if(nuevo == NULL)
  {
    printf("No se pudo crear entrada en la tabla...\n");
    return NULL;
  }
  nuevo->nombre = copiar_cadena(name);
  nuevo->tipo = type;
  nuevo->valor.v_entero = 0;
  return nuevo;
}


struct simbolo * 
buscar_simbolo(char * name)
{
  struct simbolo * ptr;
  for(ptr = tabla ; ptr != NULL; ptr = ptr->siguiente)
  {
	if(comparar_cadenas(name,ptr->nombre))
	{
	  return ptr;
	}
  }
  return NULL;
}

void 
imprimir_simbolo(struct simbolo * ptr)
{
 if(ptr == NULL)
 {
   printf("El simbolo es vacio...\n");
   return;
 }
 
 printf("%s | ",ptr->nombre);  
 switch(ptr->tipo)
 {
   case 0:
   printf("Entero | %d",ptr->valor.v_entero);
   break;
   case 1:
   printf("Real | %f",ptr->valor.v_real);
   break;
   case 2:
   printf("String | %s",ptr->valor.v_cadena);
   break;
 }
 printf("\n");

}


