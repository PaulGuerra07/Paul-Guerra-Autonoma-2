/*Ejercicio 1
1. Escribe un programa que simule una votación. 
El programa debe permitir a los usuarios votar por tres opciones: 
• 1 para "Candidato A" 
• 2 para "Candidato B" 
• 3 para "Candidato C" 
• 0 para terminar la votación. 

El programa debe: 
• Contar los votos de cada candidato. 
• Al finalizar la votación, mostrar los resultados de la elección.
 El ciclo debe continuar hasta que el usuario ingrese 0 para terminar.  
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables que vamos a utilizar y utilizamos acumuladores para contar los votos de cada candidato
    int voto, candidatoA = 0, candidatoB = 0, candidatoC = 0;

    // Solicitamos al usuario que ingrese su voto por el candidato que desee
    cout << "Bienvendio al sistema de votacion" << endl;
    cout << "1 Para votar por el candidato A" << endl;
    cout << "2 Para votar por el candidato B" << endl;
    cout << "3 Para votar por el candidato C" << endl;
    cout << "0 Para terminar la votacion" << endl;

    // Se usa para que el ciclo continue hasta que el usuario ingrese el numero 0
    while (voto != 0)
    {
        cout << "Ingrese el numero que corresponda a su candidato (1, 2, 3) o 0 para finalizar la votacion: " << endl;
        cin >> voto;
        
        if (voto == 1) // Cuenta los votos según la opción ingresada
        {
            candidatoA = candidatoA ++; // Aqui se incrementa el contador del Candidato A
        }
        else if (voto == 2)
        {
            candidatoB = candidatoB ++; // Aqui se incrementa el contador del Candidato B
        }
        else if (voto == 3)
        {
            candidatoC = candidatoC ++; // Aqui se incrementa el contador del Candidato C
        }
        else if (voto == 0)
        {
           cout << "Fin de la votación" << endl;
        }
        else
        {
            cout << "Opcion invalida. Por favor ingrese 1, 2, 3 o 0 para terminar." << endl;
        }
    }

    cout << "Resultados de la votacion es:" << endl;
    cout << "Los votos del Candidato A son : " << candidatoA << "Votos" << endl;
    cout << "Los votos del Candidato B son : " << candidatoB << "Votos" << endl;
    cout << "Los votos del Candidato C son : " << candidatoC << "Votos" << endl;
    return 0;
}
