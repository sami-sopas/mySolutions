#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
#define f first
#define s second
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define deb(x) cout << #x": " << (x) << endl;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;

void solve(){
    int n;
    string input;
    cin >> n;
    
    map<string,int> mp;
    
    fore(i,0,n){
        
        cin >> input;
        
        //Cuando es el primer elemento
        if(mp.count(input) == 0)
        {
            cout << "OK" << ENDL;
            mp[input] = 1;
        } //Cuando es uno ya repetido
        else{
            cout << input << mp[input]++ << ENDL;
            
        }
    }
}

    int main(){_
        solve();
        return 0;
    }
