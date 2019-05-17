
struct simbolo 
{
  char * nombre;
  int tipo;
  union {
	int v_entero;
	double v_real;
	char * v_cadena;
  } valor ;
  struct simbolo * siguiente;
};

char * concatenar(char *, char *);
int numero_caracteres(char *);
char * reservar_cadena(int);
char * copiar_cadena(char *);
char * potencia_cadena(char *,int );
extern struct simbolo * tabla;
struct simbolo * agregar_simbolo(char *,int);
struct simbolo * buscar_simbolo();
