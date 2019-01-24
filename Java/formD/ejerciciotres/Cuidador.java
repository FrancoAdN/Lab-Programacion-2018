package ejerciciotres;
public class Cuidador extends Persona{
    public final int CANT_DE_RACIONES;
    public Cuidador(String nombre, String fDeNacimiento,int raciones) {
        super(nombre, fDeNacimiento);
        this.CANT_DE_RACIONES = raciones;
    }
}
