/*
Laboratorio de programación
6°Técnica
Franco di Nápoli
*/
package ejerciciodos;
public class EjercicioDos {
    public static void main(String[] args) {
        Vehiculo car = new Vehiculo(2,4,7);
        Persona a = new Persona("Franco","di Napoli","42904558");
        
        System.out.println("VEHICULO: ");
        System.out.println("Alto: " + car.getAlto());
        System.out.println("Ancho: " + car.getAncho());
        System.out.println("Largo: " + car.getLargo());
        
        System.out.println("PERSONA: ");
        System.out.println("Nombre: " + a.getNombre());
        System.out.println("Apellido: " + a.getApellido());
        System.out.println("Documento: " + a.getNumDocumento());
        
    }
    
}
