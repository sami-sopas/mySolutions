#include <bits/stdc++.h> 

using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int aux; cin >> aux;
        v.push_back(aux);
    }
    
    sort(v.begin(),v.end());
    
    for(const auto& x : v)
    {
        cout << x << ' '; 
    }
    
    
    return 0;
}
