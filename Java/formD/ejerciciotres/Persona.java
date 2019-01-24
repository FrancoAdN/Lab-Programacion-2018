package ejerciciotres;
abstract class Persona {
    private String nombre;
    private String fDeNacimiento;

    public Persona(String nombre,String fDeNacimiento){
        this.nombre = nombre;
        this.fDeNacimiento = fDeNacimiento;
    }
            
    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getfDeNacimiento() {
        return fDeNacimiento;
    }

    public void setfDeNacimiento(String fDeNacimiento) {
        this.fDeNacimiento = fDeNacimiento;
    }
}
