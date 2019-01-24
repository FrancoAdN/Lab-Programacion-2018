package ejerciciotres;
public class Zoologico {
    public final int CANTIDAD_ANIMALES = 25;
    public final int RACIONES_POR_ANIMAL = 5;
    private boolean isOpen;
    
    public void abrir(){
        isOpen = true;
        System.out.println("Se abrio el zoo");
    }
    public void cerrar(){
        isOpen = false;
        System.out.println("Se cerro el zoo");
    }
    public void alimentarAnimales(int cant){
        Cuidador cuid = new Cuidador("Jose","25/23/94",cant);
        if(isOpen){
            if(CANTIDAD_ANIMALES*RACIONES_POR_ANIMAL <= cuid.CANT_DE_RACIONES ){
                System.out.println("Se alimentaron a los animales");
            }else{
                System.out.println("No se pudo alimentar a los animales, raciones insuficientes");
            }  
        }else{
            System.out.println("No se puede alimentar a los animales, el zoologico esta cerrado");
        }
        
        
    }
}
