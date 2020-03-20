#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int opcion;
    
    do {
        system("cls");

        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Alquiler de Portatiles" << endl;
        cout << "2. Alquiler de Libros" << endl;
        cout << "3. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                // Volvemos a hacer el bucle do y ponemos dos opciones: OFIMATICA Y SOPORTAR GRANDES PROGRAMAS  
				//             
                printf("HOLA");
                system("pause>nul"); // Pausa
                break;
                
            case 2:
                // Lista de instrucciones de la opción 2                
                
                system("pause>nul"); // Pausa
                break;

        }        
    } while (opcion != 3);     
    return 0;
}
