#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
    fast;
    tc{
        string s; cin >> s;
        if(s.find("10") == string::npos){
            cout << 1 << endl;
            continue;
        }
        ll runs = 1;
        for(size_t i = 1; i < s.size(); i++) if(s[i] != s[i-1]) runs++;
        if(runs == 2) cout << 2 << endl;
        else cout << runs - 1 << endl;
    }
    return 0;
}
