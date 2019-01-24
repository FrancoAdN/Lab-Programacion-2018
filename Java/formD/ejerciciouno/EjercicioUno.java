/*
Instituto Agustín Elizalde
Laboratorio de Programación 
6°Técnica
Marcos Ortiz
*/
package ejerciciouno;
public class EjercicioUno {
    public static void main(String[] args) {
        int[] vecNumeros = {
            11, -22, 33, -44, 55, -66, 77, -88, 99
        };
        int i, cPos = -1, cNeg = -1;
        int totalPositivos = 0, totalNegativos = 0;
        int[] vecPositivos = new int[10];
        int[] vecNegativos = new int[10];
        
        System.out.println("NUMEROS: ");
        for(i = 0; i < vecNumeros.length ; i++){
            if(vecNumeros[i] > 0){
                cPos++;
                vecPositivos[cPos] = vecNumeros[i];
                totalPositivos += vecPositivos[cPos];
            }else if(vecNumeros[i] < 0 ){
                cNeg++;
                vecNegativos[cNeg] = vecNumeros[i];
                totalNegativos += vecNegativos[cNeg];
            }else{
                System.out.println("Numero no admitido en la posicion: " +i);
            }
            System.out.println(vecNumeros[i]);
        }
        System.out.println("POSITIVOS: ");
        for(i = 0; i <= cPos ; i++){
            System.out.println(vecPositivos[i]);
        }
        System.out.println("NEGATIVOS: ");
        for(i = 0; i <= cNeg ; i++){
            System.out.println(vecNegativos[i]);
        }
        System.out.println("SUMA POSITIVOS: " +totalPositivos);
        System.out.println("SUMA NEGATIVOS: " +totalNegativos);
        
        System.out.println("LA SUMA DE LOS POSITIVOS MAS LOS NEGATIVOS ES: " +(totalPositivos + totalNegativos));
        
        
        
    }
    
}
