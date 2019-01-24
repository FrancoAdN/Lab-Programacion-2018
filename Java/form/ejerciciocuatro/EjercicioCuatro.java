package ejerciciocuatro;
import java.util.Random;
import java.util.Scanner;
import java.lang.*;
public class EjercicioCuatro {
    
    static char eleccion;
    static int cont=0;
    static Scanner snc = new Scanner(System.in);
    public static void main(String[] args) {
        apostar();

        
    }
    public static void apostar(){
        int a, b;
        char eleccion;
        Random rnd = new Random();
        
        do{
          a = rnd.nextInt(100);
          b = rnd.nextInt(100);
        }while(a == b);
        
        do{
            System.out.println("¿Por quien desea apostar, por A o por B?");
            eleccion = Character.toUpperCase(snc.next().charAt(0));
        }while(eleccion != 'A' && eleccion != 'B');
        
        System.out.println("A: " +a);
        System.out.println("B: "+b);
        if(eleccion == 'A'){
            if(a>b){
                System.out.println("HAS GANADO");
                cont++;
            }else{
                System.out.println("HAS PERDIDO");
            }
        }else{
            if(a<b){
                System.out.println("HAS GANADO");
                cont++;
            }else{
                System.out.println("HAS PERDIDO");
            }
        }
        
        do{
            System.out.println("¿Quieres seguir jugando?");
            eleccion = Character.toUpperCase(snc.next().charAt(0));
        }while(eleccion != 'Y' && eleccion != 'N');
        
        if(eleccion == 'Y'){
            apostar();
        }else{
            System.out.println("Puntuacion: "+cont);
        }
    }
    

}
