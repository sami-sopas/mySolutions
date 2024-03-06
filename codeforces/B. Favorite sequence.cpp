#include <bits/stdc++.h>
#define ENDL '\n'
#define lli long long
#define pb push_back
#define ff first
#define ss second
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;

void solve(){

    int n; cin >> n;
    vector<int> v;

    fore(i,0,n)
    {
        int num; cin >> num;
        v.pb(num);
    }

    int l = 0;
    int r = v.size() - 1;

    bool esImpar = 1; //Saber si el numero que imprimimos es par

    //Por defecto, el primer index del numero sera inpar (a1)
    while(l <= r)
    {
        if(esImpar){
            cout << v[l] << " ";
            l++; 
        }
        else{
            cout << v[r] << " ";
            r--;
        }

        //pasamos al siguiente index, el cual sera un par (a2) y asi sucesivamente
        esImpar = !esImpar;
    }


}

int main(){
    // freopen("file.in","r",stdin);
    // freopen("file.out","w",stdout);
    IO;
    int t; cin>>t; 

    //Input: 3 4 5 2 9 1 1
    //a:     1 3 5 7 6 4 2
    //Output: 3 1 4 1 5 9 2
    //a:      1 2 3 4 5 6 7

    while(t--){
        solve();
    }
    return 0;
}
