

public void funcionDelta(String estadoActual,String cadena)
{
 if(estadoActual.equals("qE"))
 {
	return estadoActual;
 }else if(cadena.length() == 0 && F.contains(estadoActual))
 {	
	return estadoActual+"F";	
 }
 String simbolo = String.valueOf(cadena.charAt(0));
 if(!sigma.contains(simbolo))
 {
   cadena = cadena.substring(1);
   errores += "ERROR:SIMBOLO "+simbolo+" NO VALIDO\n En estado:"+estadoActual+". Cadena restante:"+cadena+"\n";
   if(cadena.length() == 0)
   {
	if(F.contains(estadoActual))
	{
	  return estadoActual+"F";
	}else{
	  return estadoActual;
	}
   }
   simbolo = String.valueOf(cadena.charAt(0));
 }

 Hashtable transiciones = delta.get(estadoActual); 
 Set<String> conjuntoTransiciones = transiciones.get(simbolo);
 for(String estado:conjuntoTransiciones)
 {
String respuesta = estadoActual + "->" + 
	funcionDelta(estado,cadena.substring(1));
	if(respuesta.charAt(respuesta.length()-1) == 'F')
	{
	   out.println(respuesta);
	}
 }

  return errores;
}



/*
public String funcionDelta(String estadoActual,String cadena,String camino)
{
 if(estadoActual.equals("qE"))
 {
	return estadoActual;
 }else if(cadena.length() == 0)
 {
	if(F.contains(estadoActual))
	{
	  return estadoActual+"F";	
	}else
	{
	  return estadoActual;
	}
 }
  System.out.println("Cadena recibida en la funcion es:"+cadena);
 String simbolo = String.valueOf(cadena.charAt(0));

 if(!sigma.contains(simbolo))
 {
   cadena = cadena.substring(1);
   errores += "ERROR:SIMBOLO "+simbolo+" NO VALIDO\n En estado:"+estadoActual+". Cadena restante:"+cadena+"\n";
   return funcionDelta(estadoActual,cadena,camino);
 }
 /* Obtener el estado en el cual vamos a ver transiciones */
 Hashtable<String,Set<String>> transiciones = delta.get(estadoActual); 
 /* Para ese estado y el simbolo obtener siguientes */
 Set<String> conjunto = transiciones.get(simbolo);
 for(String estado:conjunto)
 {
	System.out.println("La cadena recibida es:"+cadena);
	camino += estadoActual + "("+ simbolo +")" + "-> ";
	System.out.println("El camino al momento es:"+camino);
	camino += funcionDelta(estado,cadena.substring(1),camino);
	
	if(camino.charAt(camino.length()-1) == 'F')
	{
	   out.println(camino.substring(0,camino.length()-1));
	}
	camino = "";
 }

  return errores;
}

*/ 


