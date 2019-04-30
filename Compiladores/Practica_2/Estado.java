
public class Estado
{
 String nombre;
 Hashtable delta;

 public Estado()
 {
   nombre = null;
   delta = new Hashtable();
 }

 public Estado(String nombre)
 {
   this.nombre = nombre ;
   delta = new Hashtable();

 }

 public void setNombre(String nombre)
 {
   this.nombre = nombre;
 }

 public void setTransicion(String simbolo,Estado estado)
 {

 }
 
}
