import java.util.Scanner;
public class Prueba
{
 public static void main(String []args)
 {
	Scanner entrada = new Scanner(System.in);
	String cadena = entrada.nextLine();
	System.out.println("Linea leida es:"+cadena);
	System.out.println("Recortar de indice:");
	int indice = entrada.nextInt();
	System.out.println("Estos caracteres:");
	int numero = entrada.nextInt();
	String recortada = cadena.substring(indice);
System.out.println("La entrada se recorta a:"+recortada+",tiene longitud:"+recortada.length());
        String primer = String.valueOf(cadena.charAt(0));
	System.out.println("El primer caracter:"+primer);

	 
 }

}
