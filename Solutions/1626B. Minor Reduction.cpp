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
        ll n = s.size();
        bool done = false;
        for(ll i = n - 2; i >= 0; i--){
            if(s[i] + s[i + 1] >= 106){
                s[i + 1] = s[i] + s[i + 1] - 58;
                s[i] = '1';
                done = true;
                break;
            }
        }
        if(!done){
            s[1] = s[0] + s[1] - '0';
            s.erase(0, 1);
        }
        cout << s << endl;
    }
    return 0;
}
