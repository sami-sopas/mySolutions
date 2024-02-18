#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int amigos;
    int altura;
    int a1 = 0;
    int a2 = 0;
    
    cin >> amigos >> altura;
    
    vector<int> arr(amigos);
    
    for(int i = 0; i < amigos; i++)
    {
        cin >> arr[i];
        
        if(arr[i] <= altura)
        {
            a1++;
        }
        else{
            a2+=2;
        }
    }

    cout << a1 + a2;
    
    
    return 0;
}
