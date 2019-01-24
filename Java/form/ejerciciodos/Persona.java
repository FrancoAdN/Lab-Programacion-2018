package ejerciciodos;
public class Persona {
    private String nombre;
    private String apellido;
    private String numDocumento;

    public Persona (String nombre, String apellido, String numDocumento){
        this.nombre = nombre;
        this.apellido = apellido;
        this.numDocumento = numDocumento;
    }

    Persona() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getApellido() {
        return apellido;
    }

    public void setApellido(String apellido) {
        this.apellido = apellido;
    }

    public String getNumDocumento() {
        return numDocumento;
    }
    public void setNumDocumento(String numDocumento) {
        this.numDocumento = numDocumento;
    }

}
