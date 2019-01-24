package ejerciciotres;
public class Zoologico {
    public final int CANTIDAD_ANIMALES = 25;
    public final int RACIONES_POR_ANIMAL = 5;
    public boolean abierto;
    
    public void abrir(){
        abierto = true;
        System.out.println("SE ABRIO EL ZOOLOGICO");
    }
    public void cerrar(){
        abierto = false;
        System.out.println("SE CERRO EL ZOOLOGICO");
    }
    
    public void alimentarAnimales(int cantR){
        Cuidador zoo = new Cuidador("Horacion", "Ortiz", cantR);
        if(abierto == true){
            if((CANTIDAD_ANIMALES*RACIONES_POR_ANIMAL) <= zoo.CANT_DE_RACIONES){
                System.out.println("EL CUIDADOR ALIMENTO A LOS ANIMALES");
            }else{
                System.out.println("NO SE PUDO ALIMENTAR A LOS ANIMALES, RACIONES INSUFICIENTES");
            }
        }else{
            System.out.println("ZOOLOGICO CERRADO");
        }
    }
    
}
