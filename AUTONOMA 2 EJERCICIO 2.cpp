/*Ejercicio 2
2. Crea un programa que permita simular diferentes métodos de pago en un sistema de compras. 
El menú debe ofrecer las siguientes opciones: 1 • Pagar con tarjeta de crédito. • Pagar con tarjeta de débito. 
• Pagar en efectivo. 
• Salir. 

Según la opción seleccionada, el programa debe pedir al usuario el monto total de la compra y realizar el cálculo del pago: 
• Para tarjeta de crédito: Se aplica una comisión del 5%. 
• Para tarjeta de débito: No se aplica comisión. 
• Para pago en efectivo: Se aplica un descuento del 2%. 

El ciclo debe continuar hasta que el usuario decida salir. 
Consideraciones: 
• Al final de cada operación, el programa debe mostrar el monto total después de aplicar el descuento o la comisión, según corresponda. 
• Al elegir salir, el programa debe finalizar la ejecución. */

#include <iostream>
using namespace std;

int main()
{
    int opc;
    float monto_compra, total_compra;
    string continuar;

    // Hacemos uso del ciclo do while para que el menu se repita hasta que el usuario decida salir

    
        do
        {

            // Se realiza un menu de opciones para que eliga entre los diferentes metodos de pago
            cout << "Bienvendido al sistema de pago:" << endl;
            cout << "Con que desea pagar su compra?" << endl;
            cout << " 1. Tarjeta de credito " << endl;
            cout << " 2. Tarjeta de debito " << endl;
            cout << " 3. Pago en efectivo " << endl;
            cout << " 4. Salir " << endl;
            cin >> opc;
           
            switch (opc) // Se hace uso de la estructura switch para manejar las diferentes opciones del menu
            {

            case 1:
            {
                cout << "Ingrese el monto total de su compra: " << endl;
                cin >> monto_compra;
                total_compra = monto_compra + (monto_compra * 0.05);
                cout << "El total de su compra con tarjeta de credito es : " << total_compra << endl;
                break;
            }
            case 2:
            {
                cout << "Ingrese el monto total de su compra: " << endl;
                cin >> monto_compra;
                total_compra = monto_compra;
                cout << "El total de su compra con tarjeta de debito es : " << total_compra << endl;
                break;
            }
            case 3:
            {
                cout << "Ingrese el monto total de su compra: " << endl;
                cin >> monto_compra;
                total_compra = monto_compra - (monto_compra * 0.02);
                cout << "El total de su compra con efectivo es : " << total_compra << endl;
                break;
            }
            case 4:
            {
                if (opc == 4)
                {
                    cout << "Gracias por preferirnos" << endl;
                    return 0;
                }
            }
            default:
            {
                cout << "Opcion invalida, reintente de nuevo con las opciones que se le indican" << endl;
                break;
            }
            }
            
            // Preguntamos al usuario si desea realizar otra transaccion
            cout << "Desea realizar otra transaccion? (si/no): ";
            cin >> continuar;

        } while (continuar == "si" || continuar == "Si");

    return 0;
}