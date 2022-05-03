import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Jugador {
    private int numero;
    private String nombre;
    private int puntos;
    private String posicicion;
    private float estatura;

    public Jugador(int numero, String nombre, int puntos) {
        this.numero = numero;
        this.nombre = nombre;
        this.puntos = puntos;
    }

    public Jugador(int puntos) {
        this.puntos = puntos;
    }

    public Jugador(String nombre) {
        this.nombre = nombre;

    }

    public Jugador(String nombre, int numero, int puntos, String posicicion, float estatura) {
        this.nombre = nombre;
        this.numero = numero;
        this.puntos = puntos;
        this.posicicion = posicicion;
        this.estatura = estatura;
    }

    public String getnombre() {
        return nombre;
    }

    public void setnombre(String nombre) {
        this.nombre = nombre;
    }

    public int getnumero() {
        return numero;
    }

    public void setnumero(int numero) {
        this.numero = numero;
    }

    public int getpuntos() {
        return puntos;
    }

    public void setpuntos(int puntos) {
        this.puntos = puntos;
    }

    public String getposicion() {
        return posicicion;
    }

    public void setposicion(String posicion) {
        this.posicion = posicicion;
    }

    public float getestatura() {
        return estatura;
    }

    public void setestatura(float estatura) {
        this.estatura = estatura;
    }
    public void capturar(Jugador[] jugador) {

        for (int i = 0; i < jugador.length; i++) {

            System.out.println("\nNombre : ");
            Scanner nombre = new Scanner(System.in);
            jugador[i].setnombre(nombre.nextLine());

            System.out.println("\nNumero: ");
            Scanner uniforme = new Scanner(System.in);
            jugador[i].setnumero(uniforme.nextInt());

            System.out.println("\nPosicion: ");
            Scanner posicion = new Scanner(System.in);
            jugador[i].setPosicicion(posicion.next());

            System.out.println("\nEstatura: ");
            Scanner estatura = new Scanner(System.in);
            jugador[i].setestatura(estatura.nextFloat());


            System.out.println("\nPuntos anotados: ");
            Scanner puntos = new Scanner(System.in);
            jugador[i].setpuntos(puntos.nextInt());

            nombre.close();
            uniforme.close();
            posicion.close();
            estatura.close();
            puntos.close();
        }
    }

    @Override
    public String toString() 
    {
        return 
        "Nombre: " + nombre +
        "\nNumero: " + numero + 
        "\nEstatura: " + estatura +
        "\nPosicion: " + posicicion + 
        "\nPuntos: " + puntos;
    }

    public void validarnombre() {
        for (int i = 0; i < nombre.size(); i++) {
            for (int j = i; j < nombre.size(); j++) {
                if (nombre.get(i) == nombre.get(j)) {
                    System.out.println("El jugador " + nombre.get(i) + " ya esta registrado");
                } else {
                    System.out.println("El jugador " + nombre.get(i) + " no esta registrado");

                }
            }
        }
    }

    public void validarnumero() {
        for (int i = 0; i < numero.size(); i++) {
            for (int j = i; j < numero.size(); j++) {
                if (numero.get(i) == numero.get(j)) {
                    System.out.println("El uniforme  " + numero.get(i) + " Se puede usar");
                } else {
                    System.out.println("El uniforme  " + numero.get(i) + " No se puede usar");
                }
            }
        }
    }

}

public class Torneo extends Jugador {
    private String nombre;
    private String region;
    private int equipos;
    private int PJ;
    private int PP;

    public Torneo() {
    }

    public String getnombre() {
        return nombre;
    }

    public void setnombre(String nombre) {
        this.nombre = nombre;
    }

    public String getRegion() {
        return region;
    }

    public void setRegion(String region) {
        this.region = region;
    }

    public int getequipos() {
        return equipos;
    }

    public void setequipos(int equipos) {
        this.equipos = equipos;
    }

    public int PJ() {
        return PJ;
    }

    public void setPJ(int PJ) {
        this.PJ = PJ;
    }

    public int getPP() {
        return PP;
    }

    public void setPP(int PP) {
        this.PP = PP;
    }
