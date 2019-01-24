/*
Laboratorio de programación
6°Técnica
Franco di Nápoli
*/
package ejerciciouno;

import java.util.ArrayList;

public class EjercicioUno {
    public static void main(String[] args) {
       int i = 0;
       int tPos = 0, tNeg = 0;
       int[] vecNumeros = {
          11, -22, 33, -44, 55, -66, 77, -88, 99
       };
       
       ArrayList<Integer> vecPos = new ArrayList<>();
       ArrayList<Integer> vecNeg = new ArrayList<>();
       for(i = 0; i < vecNumeros.length ;i++){
           if(vecNumeros[i]>0){
               tPos += vecNumeros[i];
               vecPos.add(vecNumeros[i]);
           }else if(vecNumeros[i]<0){
               tNeg += vecNumeros[i];
               vecNeg.add(vecNumeros[i]);
           }else
               System.out.println("Numero no admitido: " +vecNumeros[i]);
       }
       
       System.out.println("Numeros positivos: ");
       for(i=0;i<vecPos.size();i++){
           System.out.println(vecPos.get(i));
       }
       System.out.println("Numeros negativos: ");
       for(i=0;i<vecNeg.size();i++){
           System.out.println(vecNeg.get(i));
       }
        
       System.out.println("El total de los positivos es: " +tPos);
       System.out.println("El total de los negativos es: "+tNeg);
       System.out.println("La suma entre ellos es : " + (tPos+tNeg));
       
    }
 
    
}
