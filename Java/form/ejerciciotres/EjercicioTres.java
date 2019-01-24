/*
Laboratorio de programación
6°Técnica
Franco di Nápoli
*/
package ejerciciotres;
import java.util.Scanner;
public class EjercicioTres {
    public static void main(String[] args) {
        Scanner snc = new Scanner(System.in);
        int raciones=0;
        Zoologico lujan = new Zoologico();
        lujan.abrir();
        System.out.println("Ingrese la cantidad de raciones al cuidador");
        raciones = snc.nextInt();
        lujan.alimentarAnimales(raciones);
        lujan.cerrar();
        
    }
}
