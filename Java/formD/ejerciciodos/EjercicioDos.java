/*
Instituto Agustín Elizalde
Laboratorio de Programación
6°Técnica
Marcos Ortiz
*/
package ejerciciodos;
public class EjercicioDos {
    public static void main(String[] args) {
        Persona man = new Persona("Valeria","Gutierrez","25896741");
        Vehiculo auto = new Vehiculo(4,8,15);
        
        System.out.println("VEHICULO: ");
        System.out.println("ALTO: " +auto.getAlto());
        System.out.println("ANCHO: "+auto.getAncho());
        System.out.println("LARGO: "+auto.getLargo());
        
        System.out.println("PERSONA: ");
        System.out.println("NOMBRE: " +man.getNombre());
        System.out.println("APELLIDO: "+man.getApellido());
        System.out.println("NUMERO DE DOCUMENTO: "+man.getNumDocumento());
        
    }
}
