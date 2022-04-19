public class Main {

    public static void main(String[] args) 
	{
		int i,j;
        Torneo tor = new Torneo();

        System.out.println("Nombre: " +tor.getNombre() +
		"\n Region: " +tor.getRegion());
        System.out.println("Equipos: " + tor.getEquipos());
        System.out.println("Partidos Jugados: " +tor.getPP()+ 
		"\nPartido pendientes: "+torne.getPP());

        for(i=0;i<Torneo.equipos;i++){
            System.out.println("Nombre del equipo :"+ Torneo.equipos[i].getEquipo());
            System.out.println("Division "+ Torneo.equipos[i].getDivision());
            System.out.println("jugadores " + Torneo.equipos[i].jugadores());
            System.out.println("Puntos obtenidos: " + Torneo.equipos[i].puntos());
            
            for(j=0;j<Torneo.equipos[i].jugadores.length;j++){
                System.out.println("Jugador: " + Torneo.equipos[i].jugadores[j].getNombreJugador());
                System.out.println("Numero del jugador: " + Torneo.equipos[i].jugadores[j].getNumJugador());
            }
        }
    }
}

public class Jugadores {
     public int Numero;
     public String Nombre;
     public int PA;
     public String posicion;
     public float estatura;

    public void setNumero(int nume)
	{
        Numero = nume;
    }
    public String getNumero()
	{
        return Numero;
    }
    public void setNombre(String nomb)
	{
        Nombre = nomb;
    }
    public String getNombreJ()
	{
        return Nombre;
    }
    public void setPA(int puntos)
	{
        PA = puntos;
    }
        public int getPA()
	{
        return PA;
    }

    public void setPosicion(String pos)
	{
        posicion = pos;
    }
    public int getPosicion()
	{
        return Posicion;
    }
    public void setEstatura( float estatura)
	{
        this.estatura = estatura;
    }



}
public class Torneo {
   public String Nombre;
   public String Region;
   public int Equipos;
   public int PJ;
   public int PP;
   public static Equipo []equipos = new Equipo[5];

    public Torneo(){
        setNombre("UABC");
        setRegion("Santa fe");
        setPJ(5);
        Equipos = equipos.length;
        setPP(10);
    }
    public void setNombre(String nombre)
	{
        Nombre = nombre;
    }
    public void setRegion(String region)
	{
        this.Region = region;
    }

    public void setPj(int partidos)
	{
        PJ = partidos;
    }

    public void setPP(int partido)
	{
        PP = partido;
    }
    public void Equipos()
	{
        for(int i=0; i<5; i++){
            equipos[i] = new Equipo();
            equipos[i].setNombre(CapturaEntrada.capturarCadena("\nNombre"));
            equipos[i].setDivision(1); ("\Division");
            equipos[i].setParticipaciones(CapturaEntrada.capturarEntero("\nParticipaciones"));
            equipos[i].setGanados(CapturaEntrada.capturarEntero("\nTorneos Ganados"));
            equipos[i].setPerdidos(CapturaEntrada.capturarEntero("\nTorneos Perdidos"));
            equipos[i].setEntrenador(CapturaEntrada.capturarCadena("\nNombre del entrenador"));
        }

    }
    public int getNumeroEquipos(){
        return equipos.length;
    }
    public String getNombretorneo(){
        return NombreTorneo;
    }
    public String getRegion(){
        return region;
    }
    public int getPJ(){
        return PJ;
    }
    public int getPP(){
        return PP;
    }
}
import java.util.Random;

public class Equipo {
   public String Nombre;
   public int division;
   public String entrenador;
   public int Participaciones;
   public int Torneosganados;
   public int torneosPerdidos;
   public int equipo;
   public Jugador [] jugadores = new Jugador[10];

    public void setNombre(String nombre)
	{
        Nombre = nombre;
    }
    public void setDivision(int division)
	{
        this.division = division;
    }
    public void setEntrenador(String entrenador)
	{
        this.entrenador = entrenador;
    }
    public void setParticipacion(int Par)
	{
        Participacion = Par;
    }
    public void setTorenosGanados(int torneosG)
	{
        torneosGanados = torneosG;
    }
    public void setTorneosPerdidos(int torneosP)
	{
        torneosPerdidos = torneosP;
    }
    public void setJugadores(Equipo)
	{
        System.out.println("Jugadores del equipo " +(Equipo+1));;
        for(int i=0; i<10; i++)
		{
            jugadores[i] = new Jugador();
        }
        for(int i=0;i<10;i++)
		{
            jugadores[i].setNombre(CapturaEntrada.capturarCadena("Nombre"));
            if(numEquipo!=0){
                for(int j=0;j<numEquipo;j++){
                    for(int k=0;k<jugadores.length;k++){
                        while(jugadores[i].getNombreJugador().equals(Torneo.equipos[j].jugadores[k].getNombreJugador())){
                            jugadores[i].setNombre(CapturaEntrada.capturarCadena("Otro nombre"));
                        }
                    }
                }
            }
            jugadores[i].setNumJugador(CapturaEntrada.capturarEntero("Numero del jugador"));
            for(int z=0;z<i;z++){
                while(jugadores[i].getNumJugador() == jugadores[z].getNumJugador()){
                    jugadores[i].setNumJugador(CapturaEntrada.capturarEntero("Otro numero del jugador"));
                }
            }
            if(i<=5){
                jugadores[i].setPosicion("Delantero");
            }
            else{
                jugadores[i].setPosicion("Defensa");
            }
            jugadores[i].setEstatura(r.nextInt(200-170)+170);
            jugadores[i].setpuntosAnotados(r.nextInt(50));
        }
    }
    public String getNameEquipo(){
        return nameEquipo;
    }
    public int getDivision(){
        return division;
    }
    public int puntosTotales(){
        int puntosT = 0;
        for(Jugador j: jugadores){
            puntosT+= j.getPuntosAnotados();
        }
        return puntosT;
    }
    public int jugadoresTotales(){
        return jugadores.length;
    }
}

import java.util.Scanner;

public class capturaE 
	{
    public static int capturarEntero(String msg)
	{
    	
        Scanner sc = new Scanner(System.in);
        System.out.print(""+msg+": ");
        return (sc.nextInt());
    }

    public static float capturarF(String msg)
	{
        Scanner sc = new Scanner(System.in);
        System.out.print(""+msg+": ");
        return (sc.nextFloat());
    }

    public static double capturarDoble(String msg){
        Scanner sc = new Scanner(System.in);
        System.out.print(""+msg+": ");
        return (sc.nextDouble());
    }

    public static String capturarCadena(String msg){
        Scanner sc = new Scanner(System.in);
        System.out.print(""+msg+": ");
        return (sc.nextLine());

    }
    public static char capturarChar(String msg) {
        Scanner sc = new Scanner(System.in);
        System.out.print(""+msg+": ");
        return (sc.nextLine().charAt(0));
    }
}

