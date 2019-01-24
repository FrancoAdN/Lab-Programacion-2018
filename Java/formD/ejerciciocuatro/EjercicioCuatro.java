package ejerciciocuatro;
import java.util.Random;
import java.util.Scanner;
import java.lang.*;
public class EjercicioCuatro {
    static int puntuacion = 0;
    public static void main(String[] args) {
        juego();
    }
    
    public static void juego(){
        Random rand = new Random();
        Scanner sc = new Scanner(System.in);
        char eleccion;
        int a,b;
        do{
            a = rand.nextInt(10);
            b = rand.nextInt(10);
        }while(a == b);
        
        do{
            System.out.println("Apostar por A o por B");
            System.out.println("Ingrese su apuesta: ");
            eleccion = Character.toUpperCase(sc.next().charAt(0));
        }while(eleccion != 'A' && eleccion != 'B');
        
        System.out.println("A: " +a);
        System.out.println("B: "+b);
        if(eleccion == 'A'){
            if(a>b){
                System.out.println("HAS GANADO");
                puntuacion++;
            }else{
                System.out.println("HAS PERDIDO");
            }
        }else{
            if(a<b){
                System.out.println("HAS GANADO");
                puntuacion++;
            }else{
                System.out.println("HAS PERDIDO");
            }
        }
        
        do{
            System.out.println("Quieres seguir jugando (Y/N)");
            eleccion = Character.toUpperCase(sc.next().charAt(0));
        }while(eleccion != 'Y' && eleccion != 'N');
        
        if(eleccion == 'Y'){
            juego();
        }else{
            System.out.println("Puntuacion: "+puntuacion);
        }
        
        
        
    }
}

