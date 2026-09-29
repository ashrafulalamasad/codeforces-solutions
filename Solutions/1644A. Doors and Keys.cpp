#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        set<char> keys; ll ok = 1;
        for(char c : s){
            if(islower(c)) keys.insert(c);
            else if(!keys.count(tolower(c))) ok = 0;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
