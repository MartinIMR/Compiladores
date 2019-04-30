import java.io.File;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.Scanner;
import java.io.FileNotFoundException;
import java.io.PrintWriter;

public class Principal
{

  public static void main (String[]args)
  {
    File archivo = new File ("epsilon.txt");
    Scanner entrada;
    AF af = new AF ();
    /* Leer archivo */
     try
    {
      entrada = new Scanner(archivo);
      String linea = null;
      int i = 0;
      while (entrada.hasNextLine())
	{
	  linea = entrada.nextLine();
	  i++;
	  System.out.println ("Linea " + i + ":" + linea);
	  af.establecerAF (linea, i);
	}
      entrada.close();
      entrada = null;
      archivo = null;
    }
    catch (FileNotFoundException fnfe)
    {
      fnfe.printStackTrace ();
    }

    /* Imprimir Automata */
    PrintWriter pw = null;
    archivo = new File("AutomataCompleto.txt");
    af.setEstadoError ();
    try{
    archivo.createNewFile();
    pw =  new PrintWriter(archivo);
    pw.println("El automata es:"); 
    pw.print(af.toString());
    pw.close();
    pw = null;
    archivo = null;
    }catch(FileNotFoundException fnfe){
	fnfe.printStackTrace();
    }catch(IOException ioe){
	ioe.printStackTrace();
    }
   
    System.out.println ("La funcion delta es:");
    System.out.println (af.getDelta ());
    entrada = new Scanner (System.in);
    String cadena = null;
    archivo = new File("Reconocimiento.txt");
    try{
    archivo.createNewFile();
    pw =  new PrintWriter(archivo);
    int opcion;
    do
    {
	   System.out.println("Escoge una opcion:");
	   System.out.println("1.-Ver automata");
	   System.out.println("2.-Introducir una cadena");
	   System.out.println("3.-Salir");
	   opcion = entrada.nextInt();
	   if(opcion == 1)
	   {
		System.out.println("El automata es:");
		System.out.print(af.toString());
	   }else if(opcion == 2)
	   {
		System.out.println ("Introduce una cadena a validar");
	        String basura = entrada.nextLine();
                cadena = entrada.nextLine();
		pw.println("Se introdujo la cadena:"+cadena);
		af.funcionDE(cadena,pw);
	   }else{
	   System.out.println("Saliendo...");
	    break;
	   }
    }while(opcion == 2 || opcion == 1 );
    pw.close();

   }
    catch (FileNotFoundException fnfe)
    {
      fnfe.printStackTrace ();
    }catch(IOException ioe)
    {
	ioe.printStackTrace();
    }

  }

}
