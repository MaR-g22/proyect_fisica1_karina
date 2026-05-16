#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double G = 9.8;

// ===============================
// Segunda Ley de Newton
// ===============================
void segundaLey() {
    double masa, fuerza, mu;

    cout << "\n=== SEGUNDA LEY DE NEWTON ===\n";
    cout << "Ingrese la masa (kg): ";
    cin >> masa;

    cout << "Ingrese la fuerza aplicada (N): ";
    cin >> fuerza;

    cout << "Ingrese el coeficiente de friccion (0 - 1): ";
    cin >> mu;

    if (masa <= 0 || fuerza < 0 || mu < 0 || mu > 1) {
        cout << "\nDatos invalidos.\n";
        return;
    }

    double N = masa * G;
    double friccion = mu * N;
    double fuerzaNeta = fuerza - friccion;
    double aceleracion = fuerzaNeta / masa;

    cout << fixed << setprecision(4);

    cout << "\n===== RESULTADOS =====\n";
    cout << "Fuerza Normal: " << N << " N\n";
    cout << "Friccion: " << friccion << " N\n";
    cout << "Fuerza Neta: " << fuerzaNeta << " N\n";
    cout << "Aceleracion: " << aceleracion << " m/s^2\n";

    if (aceleracion > 0)
        cout << "El objeto acelera.\n";
    else
        cout << "El objeto no se mueve.\n";
}

// ===============================
// Tercera Ley de Newton
// ===============================
void terceraLey() {
    double masa, aceleracion;

    cout << "\n=== TERCERA LEY DE NEWTON ===\n";

    cout << "Ingrese la masa (kg): ";
    cin >> masa;

    cout << "Ingrese la aceleracion (m/s^2): ";
    cin >> aceleracion;

    if (masa <= 0) {
        cout << "\nDatos invalidos.\n";
        return;
    }

    double fuerzaAccion = masa * aceleracion;
    double fuerzaReaccion = -fuerzaAccion;

    cout << fixed << setprecision(4);

    cout << "\n===== RESULTADOS =====\n";
    cout << "Fuerza de accion: " << fuerzaAccion << " N\n";
    cout << "Fuerza de reaccion: " << fuerzaReaccion << " N\n";

    cout << "\nLas fuerzas tienen igual magnitud y direccion opuesta.\n";
}

// ===============================
// Main
// ===============================
int main() {

    int opcion;

    do {
        cout << "\n==============================\n";
        cout << "   LEYES DE NEWTON EN C++\n";
        cout << "==============================\n";
        cout << "1. Segunda Ley de Newton\n";
        cout << "2. Tercera Ley de Newton\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1:
                segundaLey();
                break;

            case 2:
                terceraLey();
                break;

            case 3:
                cout << "\nPrograma finalizado.\n";
                break;

            default:
                cout << "\nOpcion invalida.\n";
        }

    } while(opcion != 3);

    return 0;
}