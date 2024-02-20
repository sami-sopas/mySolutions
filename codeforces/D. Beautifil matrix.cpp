#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int fila, columna;
    int matriz[5][5];
    int movimientos = 0;
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            
            int input;
            cin >> input;
            
            if(input == 1){
                fila = i + 1;
                columna = j + 1;
            }
        }
    }
    
    movimientos = abs(fila - 3) + abs(columna - 3);
    
    cout << movimientos;
    


    return 0;
}
