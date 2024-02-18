
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int clientes;
    long long helados;
    char operador;
    int pedido;
    int abandono = 0;
    
    cin >> clientes >> helados;
    
    vector<int> arr(clientes);
    
    for (int i = 0; i < clientes; ++i) {

        cin >> operador >> pedido;
        
        if(operador == '+'){
            helados = helados + pedido;
        }
        else //cuando operador es '-'
        {
            if(helados - pedido < 0)
            {
                abandono++;
            }
            else{
                helados = helados - pedido;
            }
            
        }
        
    }
    
    cout << helados << " " << abandono;
    
    return 0;
}
