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
        ll hh = stoi(s.substr(0, 2));
        ll mm = stoi(s.substr(3, 2));
        string period = "AM";
        if(hh >= 12){
            period = "PM";
            if (hh > 12) hh -= 12;
        }
        if(hh == 0) hh = 12;
        cout << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << " " << period << endl;
    }
    return 0;
}
