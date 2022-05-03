public class Main {
    public static void main(String[] args) throws Exception {

        Jugador[] jugador = {
                new Jugador(1, "Brandon", 14),
                new Jugador(5, "Alexis",11 ),
                new Jugador(78, "Adahir", 6),
                new Jugador(1, "Miguel", 4
        };
        Equipo equipo = new Equipo();
        System.out.println("\nTodos los jugadores: " + equipo.jugadores(jugador));
        System.out.println("TOTAL DE PUNTOS: " + equipo.puntos(jugador));
        for (int i = 0; i < jugador.length; i++) {
            jugador[i].validarnombre();
        }
        System.out.println("\n NUMEROS");
        for (int i = 0; i < jugador.length; i++) {
            jugador[i].validarnumero();
        }
    }

}