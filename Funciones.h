#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace System;
using namespace std;

void ventana() {
    Console::SetWindowSize(200, 50);
}

void cursor(int x, int y)
{
    Console::SetCursorPosition(x, y);
}

void ClearScreen() {
    system("cls");
}

void titulo() {
    cout << endl << " ";
    cout << endl << " ";
    cout << endl << " ";
    cout << endl << " ";
    cout << endl << " ";
    cout << endl << " ";
    cout << endl << " \n \n \n \n \n \n \n \n \n \n \n ";
    cout << endl << "   _____                           _                  ";
    cout << endl << "  / ____|                         | |                 ";
    cout << endl << " | |  __  __ _ _ __ ___   ___     | | __ _ _ __ ___   ";
    cout << endl << " | | |_ |/ _` | '_ ` _ \\ / _ \\_   | |/ _` | '_ ` _ \\  ";
    cout << endl << " | |__| | (_| | | | | | |  __/ |  __| | (_| | | | | | | ";
    cout << endl << "  \\_____|\__,_|_| |_| |_|\\___|\\____/ \\__,_|_| |_| |_| ";
    _sleep(500);
    system("cls");
}

void mostrarVehiculo(int index) {
    switch (index) {
    case 0:
        Console::ForegroundColor = ConsoleColor::DarkCyan;
        cout << endl << "             __/\\__             ";
        cout << endl << "            `==/\\==`            ";
        cout << endl << "  ____________/__\\____________  ";
        cout << endl << " /____________________________\\ ";
        cout << endl << "   __||__||__/.--.\\__||__||__   ";
        cout << endl << "  /__|___|___( >< )___|___|__\\  ";
        cout << endl << "            _/`--`\\_            ";
        cout << endl << "           (/------\\)           ";
        break;
    case 1:
        Console::ForegroundColor = ConsoleColor::DarkYellow;
        cout << endl << "              ______ ";
        cout << endl << "          _\\ _~\\___ ";
        cout << endl << "  =  = ==(____AA____D ";
        cout << endl << "              \\_____\\___________________,-~~~~~~~`-.._ ";
        cout << endl << "              /     o O o o o o O O o o o o o o O o  |\\_ ";
        cout << endl << "              `~-.__        ___..----..                  ) ";
        cout << endl << "                    `---~~\\___________/------------````` ";
        cout << endl << "                    =  ===(_________D ";
        break;
    case 2:
        Console::ForegroundColor = ConsoleColor::DarkRed;
        cout << endl << " ----|------------|-----------|---- ";
        cout << endl << "     |        --/ - \\--       |     ";
        cout << endl << "    -|---------|  o  |--------|-    ";
        cout << endl << "               /\\ _ /\\              ";
        cout << endl << "            []/       \\[]           ";
        break;
    case 3:
        Console::ForegroundColor = ConsoleColor::DarkBlue;
        cout << endl << "  \\   ";
        cout << endl << " \\ \\  ";
        cout << endl << " /--\\ ";
        cout << endl << " \\--/ ";
        cout << endl << " / /  ";
        cout << endl << " \\/   ";
        break;
    case 4:
        Console::ForegroundColor = ConsoleColor::DarkGray;
        cout << endl << " /\\        ";
        cout << endl << " \\ \\       ";
        cout << endl << "  \\ \\      ";
        cout << endl << "   \\ \\     ";
        cout << endl << "   /  \\    ";
        cout << endl << "  /    \\   ";
        cout << endl << "  \\ > { \\  ";
        cout << endl << "  /    b \\ ";
        cout << endl << "  \\    p / ";
        cout << endl << "  / > { /  ";
        cout << endl << "  \\    /   ";
        cout << endl << "   \\  /    ";
        cout << endl << "   / /     ";
        cout << endl << "  / /      ";
        cout << endl << " / /       ";
        cout << endl << " \\/        ";
        break;
    case 5:
        Console::ForegroundColor = ConsoleColor::Yellow;
        cout << endl << "            ,-.    ";
        cout << endl << "  _,.      /  /    ";
        cout << endl << " ; \\____,-==-._  ) ";
        cout << endl << " //_    `----' {+> ";
        cout << endl << " `  `'--/  /-'`(   ";
        cout << endl << "       /  /        ";
        cout << endl << "       `='         ";
        break;
    case 6:
        Console::ForegroundColor = ConsoleColor::White;
        cout << endl << "     __  _ ";
        cout << endl << " \\ `/ |    ";
        cout << endl << "  \\__`!    ";
        cout << endl << "  / ,' `-.__________________ ";
        cout << endl << " '-'\\_____                LI`-. ";
        cout << endl << "    <____()-=O=O=O=O=O=[]====--) ";
        cout << endl << "      `.___ ,-----,_______...-' ";
        cout << endl << "           /    .' ";
        cout << endl << "          /   .' ";
        cout << endl << "         /  .'      ";
        cout << endl << "         `-' ";
        break;
    case 7:
        Console::ForegroundColor = ConsoleColor::Magenta;
        cout << endl << "     /\\.                                       ";
        cout << endl << "  ./    `\\.                                    ";
        cout << endl << "  \\.       `\\.                                 ";
        cout << endl << "    `\\.       `\\.                              ";
        cout << endl << "       `\\.       `\\.                           ";
        cout << endl << "          `\\.       `\\.                        ";
        cout << endl << "          ./           `\\.                     ";
        cout << endl << "        ./            ____`\\.                  ";
        cout << endl << "      ./                  <  `\\.               ";
        cout << endl << "      \\-------\\            `>   `\\.            ";
        cout << endl << "        `\\=====>        ___<       `\\.         ";
        cout << endl << "       ./-----/             __________`\\.      ";
        cout << endl << "       \\.------\\       _____   ___(_)(_\\.`\\    ";
        cout << endl << "         `\\=====>          <            ./'    ";
        cout << endl << "        ./-----/            `>        ./       ";
        cout << endl << "        \\.               ___<       ./         ";
        cout << endl << "          `\\.                     ./           ";
        cout << endl << "             `\\.                ./             ";
        cout << endl << "                `\\.           ./               ";
        cout << endl << "                ./          ./                 ";
        cout << endl << "              ./          ./                   ";
        cout << endl << "            ./          ./                     ";
        cout << endl << "          ./          ./                       ";
        cout << endl << "        ./          ./                         ";
        cout << endl << "        \\.        ./                           ";
        cout << endl << "          `\\.   ./                             ";
        cout << endl << "             `\\/                               ";
        break;
    }
}

void elegirVehiculosAleatorios() {
    int vehiculos[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };
    int numVehiculos = 8;
    int vehiculosSeleccionados[3] = { -1, -1, -1 }; // Inicializamos los vehículos seleccionados

    srand(time(NULL)); // Semilla para la aleatoriedad

    for (int i = 0; i < 3; i++) {
        bool vehiculoRepetido = true;
        while (vehiculoRepetido) {
            int indiceAleatorio = rand() % numVehiculos; // Selecciona un índice aleatorio
            vehiculoRepetido = false;
            // Verificar si el vehículo ya fue seleccionado
            for (int j = 0; j < i; j++) {
                if (indiceAleatorio == vehiculosSeleccionados[j]) {
                    vehiculoRepetido = true;
                    break;
                }
            }
            // Si el vehículo no está repetido, lo seleccionamos
            if (!vehiculoRepetido) {
                vehiculosSeleccionados[i] = indiceAleatorio;
                mostrarVehiculo(vehiculos[indiceAleatorio]);
            }
        }
    }
}

void mostrarPersona() {

    cout << endl << " O";
    cout << endl << "/|\\";
    cout << endl << "/ \\";
}

int generarTiempoAleatorio() {
    return rand() % 1000 + 1;
}

void rescate () {
    
    int tiempoRescate = generarTiempoAleatorio();

    // Mostrar el tiempo de rescate en pantalla
    cout << "Tiempo de rescate: " << tiempoRescate << " segundos" << endl;
}



void mapa ()
{
    ventana();

    srand(time(NULL)); // Inicializa la semilla para la generación de números aleatorios
    int vehiculoIndex = rand(); // Genera un índice aleatorio
    generarTiempoAleatorio();
    rescate();
    elegirVehiculosAleatorios();
    mostrarVehiculo(vehiculoIndex);
    mostrarPersona();

    cout << endl << "\n \n  \n \n \n \n \n \n \n  ";
    Console::ForegroundColor = ConsoleColor::Yellow;

    //Entorno
    Console::ForegroundColor = ConsoleColor::White;
    cout << endl << "   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                                 _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _              -------------------------------------------- ";
    cout << endl << "  |                                               |                               |                                                                    |                ZONA                      |  ";
    cout << endl << "  |                                               |                               |                    Zona                                            |               SEGURA                     |  ";
    cout << endl << "  |                                               |                               |                  INSEGURA                                          |                                          |  ";
    cout << endl << "  |                                               |                               |                                                                    |                                          |  ";
    cout << endl << "  |                                               |                               |                                                                    |                                          |  ";
    cout << endl << "  |                                               |                               |                                                                    |                                          |  ";
    cout << endl << "  |                                               |                               |                                                                    |                                          |  ";
    cout << endl << "  |                                               |                               |                                                                                                                 ";
    cout << endl << "  |                                               |                                                                                             ";
}

void menu() {
    ventana();
    int opcion;
    cout << endl << "\t \t \t \t       MENU DE OPCIONES ";
    cout << endl << "\t \t 1. Presentacion";
    cout << endl << "\t \t 2. Creadores";
    cout << endl << "\t \t 3. Animacion";
    cout << endl << "\t \t 4. Salir";
    cout << endl << "\t \t \t Por favor, ingrese una opcion: "; cin >> opcion;

    switch (opcion) {
    case 1: // Presentación
        ClearScreen();
        cout << endl << " Universidad Peruana de ";
        cout << endl << " Ciencias Aplicadas";
        cout << endl << " FACULTAD DE INGENIERIA";
        cout << endl << "                                             .=                 ";
        cout << endl << "                                             =#*         :      ";
        cout << endl << "                                      -=    -###:        .*-    ";
        cout << endl << "                                     ++     #####=.        #+   ";
        cout << endl << "                                    +#.     *######+       +#+  ";
        cout << endl << "                                   .##.     .########      =##. ";
        cout << endl << "                                   =##=      .+######-     *##= ";
        cout << endl << "                                   =###:       .=####-    +###= ";
        cout << endl << "                                   .####=        -###   .*####. ";
        cout << endl << "                                    =#####=:      #+  -+#####=  ";
        cout << endl << "                                     =#######*+==**+########=   ";
        cout << endl << "                                      :*##################*:    ";
        cout << endl << "                                        .=##############=.      ";
        cout << endl << "                                           .:-=++++=-:.         ";
        cout << endl << "                              Curso: Introduccion a los algoritmos";
        cout << endl << "                                    TA 1: GameJam - 48 horas";
        cout << endl << "                                    Docente: Edson Mendiolaza ";
        cout << endl << "                                      Ingenieria de software ";
        break;
    case 2: // Creadores
        ClearScreen();
        cout << " Creadores: " << endl;
        cout << " - Sophie Ameli, PADILLA FERNANDEZ" << endl;
        cout << " - No participo" << endl;
        cout << " - No participo" << endl;
        break;
    case 3: // Animación
        ventana();
        ClearScreen();
        mapa();

        break;
    case 4: // Salir
        cout << "Saliendo..." << endl;
        exit(0);
        break;
    default:
        cout << "Opción no válida. Intente nuevamente." << endl;
        break;
    }
}