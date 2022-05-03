public class Equipo {
    private String name;
    private String division;
    private String entrenador;
    private int torneo;
    private int ganados;
    private int perdidos;

    public int Jugadores(Jugador[] jugador) {
        int ap = 0;
        for (int i = 0; i < jugador.length; i++) {
            ap= jugador[i].getap();
        }
        return ap;
    }

    public int puntos(Jugador[] jugador) {
        int ap = 0;
        for (int i = 0; i < jugador.length; i++) {
            ap += jugador[i].getScored();
        }
        return ap;
    }

    public Equipo() {
    }

    public String getmane() {
        return name;
    }

    public void setname(String name) {
        this.name = name;
    }

    public String getdivision() {
        return division;
    }

    public void setdivision(String division) {
        this.division = division;
    }

    public String getentrenador() {
        return entrenador;
    }

    public void setentrenador(String entrenador) {
        this.entrenador = entrenador;
    }

    public int gettorneo() {
        return torneo;
    }

    public void settorneo(int torneo) {
        this.torneo = torneo;
    }

    public int getganados() {
        return ganados;
    }

    public void setganados(int ganados) {
        this.ganados = ganados;
    }

    public int getperdidos() {
        return perdidos;
    }

    public void setperdidos(int perdidos) {
        this.perdidos = perdidos;
    }

}
