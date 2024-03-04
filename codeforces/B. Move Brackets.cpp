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
    int t; cin >> t;

    while(t--){

        int n; cin >> n;
        string s; cin >> s;

        int count = 0;
        int answer = 0;

        fore(i,0,n){
            if(s[i] == '('){
                count++;
            }
            else if(s[i] == ')' && count > 0){ //Se cerro un parentesis
                count--;
            }
            else if(s[i] == ')' && count == 0){
                answer++;
            }
        }

        cout << answer << ENDL;

    }
}

int main(){
    // freopen("file.in","r",stdin);
    // freopen("file.out","w",stdout);
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
