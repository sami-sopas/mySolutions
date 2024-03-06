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

    v.clear();

    fore(i,0,n)
    {
        int t;
        cin >> t;
        v.pb(t);
    }

    sort(all(v));

    int l = 0;
    int r = n - 1;

    int count = 0;
    int sum = 0;

    while(l < r)
    {
        sum+= v[r] - v[l];
        r--; l++;

    }

    cout << sum << ENDL;
}

int main(){
    // freopen("file.in","r",stdin);
    // freopen("file.out","w",stdout);
    IO;
    int t; cin>>t; 
    while(t--){
        solve();
    }
    return 0;
}
