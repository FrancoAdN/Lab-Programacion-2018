package ejerciciodos;
public class Vehiculo {
    public int alto;
    private int ancho;
    private int largo;

    public Vehiculo (int alto, int ancho, int largo) {
        this.alto = alto;
        this.ancho = ancho;
        this.largo = largo;
    }

    Vehiculo() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    
    public int getAlto() {
        return alto;
    }


    public void setAlto(int alto) {
        this.alto = alto;
    }


    public int getAncho() {
        return ancho;
    }


    public void setAncho(int ancho) {
        this.ancho = ancho;
    }


    public int getLargo() {
        return largo;
    }


    public void setLargo(int largo) {
        this.largo = largo;
    }

    static class java {

        public java() {
        }
    }
}
