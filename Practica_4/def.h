
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

enum tipos{ entero, real, cadena }; 
enum operaciones{ suma = 3, resta, multiplicacion, division, potencia};

void imprimir_simbolo(struct simbolo *);
extern struct simbolo * tabla;
struct simbolo * agregar_simbolo(char *,int);
struct simbolo * buscar_simbolo(char *);
