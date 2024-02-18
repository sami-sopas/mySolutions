#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() 
{
    int leaves;
    string name;
    set<string> st;
    int count = 0;
    
    cin >> leaves;
    cin.ignore();
    
    for(int i = 0; i < leaves; i++)
    {
        getline (cin, name);
        st.insert(name);
    }
    
    for(auto& str : st)
    {
        count++;
    }
    
    cout << count;


    return 0;
}
