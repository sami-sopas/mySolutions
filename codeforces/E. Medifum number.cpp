#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n; cin >> n;
   vector<int> solutions;
   int a,b,c;
   
   for(int i = 0; i < n; i++)
   {
       vector<int> v;
       
       cin >> a >> b >> c;
       
       v.push_back(a);
       v.push_back(b);
       v.push_back(c);
       
       sort(v.begin(),v.end());
       
       solutions.push_back(v[1]);
      
   }
   
   for(const auto& x : solutions)
   {
       cout << x << endl;
   }

    return 0;
}
