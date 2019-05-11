import java.util.Hashtable;
import java.util.Set;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.ArrayList;
import java.io.PrintWriter;

public class AF
{
  Set<String> Q;
  Set<String> sigma;
  String S;
  Set<String> F;
  Hashtable<String,Hashtable<String,Set<String>>> delta;
  int longitud;
  PrintWriter out;
  String errores;
  
  public AF()
  {
    Q =  new HashSet<String>();
    sigma =  new LinkedHashSet<String>();
    S = null;
    F =  new HashSet<String>();
    delta = new Hashtable<String,Hashtable<String,Set<String>>>();
    errores = "";
  }

  public void setInicial(String S)
  {
	this.S = S;
  }

  public AF convertirAFD()
  {
	AF determinista = new AF();
	Hashtable<Integer,Set<String>> nuevosEstados = new Hashtable<Integer,Set<String>>();
	Set<String> z = cerraduraEpsilon(this.S);

  }

  public Set<String> cerraduraEpsilon(String estado)
  {
	delta.get();
	for()
	{

	}		

  }

  @Override
  public String toString()
  {
	String representacion = "δ   |";
	for(String simbolo:sigma)
	{
	representacion += "  " + simbolo + "  |";
	}
	representacion += "\n";
	for(String estado:Q)
	{
	   if(F.contains(estado))
	   {
		representacion += "*";
	   }
	   if(estado.equals(S))
	   {
		representacion += "->";	
	   }
	   representacion += estado + ": "; 
	   Hashtable<String,Set<String>> transiciones = delta.get(estado);
	  for(String simbolo:sigma)
	  {
	    Set<String> conjuntos = transiciones.get(simbolo);
	    representacion += conjuntos.toString()  + "  ";
	  }
	    representacion += "\n";
	}
	return representacion;
  }

  public String getDelta()
  {
    return delta.toString();
  }

  public void funcionDE(String cadena,PrintWriter out)
  {
    longitud = cadena.length();
    this.out = out;
    String camino = "";
    funcionDelta(S,cadena,camino);
  }

public void funcionDelta(String actual,String cadena,String camino)
{
 if(actual.equals("qE"))
 {
    return;
 }else if(cadena.length() == 0){
    if(F.contains(actual))
    {
	camino += actual;
	out.println("Se encontro el siguiente camino:");
	out.println(camino);
	out.print(errores);
	System.out.println("Se encontro el siguiente camino:");
	System.out.println(camino);
    }
    return;
 }

 String simbolo = String.valueOf(cadena.charAt(0));
 /* Si el simbolo no pertenece */
 if(!sigma.contains(simbolo))
 {
   cadena = cadena.substring(1);
   String erroresOriginal = errores;
   errores += "ERROR:SIMBOLO "+simbolo+" NO VALIDO\n En estado:"+actual+". Cadena restante:"+cadena+"\n";
   funcionDelta(actual,cadena,camino);
   errores = erroresOriginal;
   return;
 }


 /* Obtener el estado en el cual vamos a ver transiciones */
 Hashtable<String,Set<String>> transiciones = delta.get(actual); 
 /* Para ese estado y el simbolo obtener siguientes */
 Set<String> conjunto = transiciones.get(simbolo);
 String caminoRecibido = camino;
 for(String estado:conjunto)
 {
	camino += actual + "("+ simbolo +")" + "-> ";
        System.out.println("Camino al momento:"+camino);
	funcionDelta(estado,cadena.substring(1),camino);
	camino = caminoRecibido;
 }
 
 Set<String> tEpsilon = transiciones.get("E");
 if(!tEpsilon.contains("qE"))
 {

   for(String estado:tEpsilon)
   {
	camino += actual + "(E)" + "-> ";
	funcionDelta(estado,cadena,camino);
	camino = caminoRecibido;
   }


 }


}

public void establecerAF(String linea,int nlinea)
{
  if(nlinea > 4)
  {
    setTransicion(linea);
    return;
  }else if(nlinea == 3)
  {
    S = linea;
    System.out.println(S);
    return; 
  }
  int longitud = linea.length();
  int inicio = 0;

  for(int i = 0; i < longitud ; i++)
  {
    if(linea.charAt(i) == ',')
    {
	switch(nlinea)
	{
	  case 1:
	  Q.add(linea.substring(inicio,i));
	  break;
	  case 2:
	  sigma.add(linea.substring(inicio,i));
	  break;
	  case 4:
	  F.add(linea.substring(inicio,i));
	  break;
	}
	inicio = i + 1;
    }

  }
    switch(nlinea)
	{
	  case 1:
	  Q.add(linea.substring(inicio));
	  System.out.println(Q);
	  break;
	  case 2:
	  sigma.add(linea.substring(inicio));
	  System.out.println(sigma);
	  break;
	  case 4:
	  F.add(linea.substring(inicio));
	  System.out.println(F);
	  break;
	}
}

public void setEstadoError()
{

  delta.put("qE",new Hashtable<String,Set<String>>()); 
  Hashtable<String,Set<String>> tError = delta.get("qE");
  for(String simbolo:sigma)
  {
	tError.put(simbolo,new HashSet<String>());
	Set<String> conjunto = tError.get(simbolo);
	conjunto.add("qE");
  }
  System.out.println("El estado de error tiene transiciones:");
  System.out.println(delta.get("qE").toString());
  Set<String> cError = new HashSet<String>();
  cError.add("qE");

  /* Verificar todos los estados tienen transiciones */
  for(String estado:Q)
  {
	if(!delta.containsKey(estado))
	{
	  delta.put(estado,new Hashtable<String,Set<String>>()); 
	}
  }
  /* Simbolos no definidos see asigna qE*/
  for(Hashtable<String,Set<String>> estado:delta.values())
  {
     for(String simbolo:sigma)
     {
        if(!estado.containsKey(simbolo))
	{
		estado.put(simbolo,cError);	
	}

     }
 }

}


public void setTransicion(String linea)
{
  String actual, simbolo, siguiente;
  actual = obtenerCadena(linea,0);
  simbolo = obtenerCadena(linea,actual.length()+1);
  siguiente = obtenerCadena(linea,actual.length() + simbolo.length() + 2);
  System.out.println("La regla es:("+actual+","+simbolo+","+siguiente+")");
  /* Buscar entrada para algun q */

  if(!delta.containsKey(actual))
  {
    delta.put(actual,new Hashtable<String,Set<String>>());
  }
  /* Transiciones para esa q */
  Hashtable<String,Set<String>> transiciones = delta.get(actual);
  if(!transiciones.containsKey(simbolo))
  {
    /*Agregar las transiciones para algun simbolo */
    transiciones.put(simbolo,new HashSet<String>());
  }

  Set<String> conjunto = transiciones.get(simbolo);
  if(!conjunto.contains(siguiente))
  {
    conjunto.add(siguiente);
  }

}
 
public String obtenerCadena(String linea,int inicio)
{
  int i = inicio;
  int longitud = linea.length();
  while(linea.charAt(i) != ',')
  {
   i++;
   if( i+1 > longitud)
   {
     break;
   }
  }
  return linea.substring(inicio,i);
} 


}
