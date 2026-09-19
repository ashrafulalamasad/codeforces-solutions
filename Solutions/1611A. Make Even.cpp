#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; ll n = s.size();
        if((s[n - 1] - '0') % 2 == 0) cout << 0 << endl;
        else if((s[0] - '0') % 2 == 0) cout << 1 << endl;
        else{
            ll ok = 0;
            for(ll i = 0; i < n; i++){
                if((s[i] - '0') % 2 == 0) ok = 1;
            }
            if(ok == 1) cout << 2 << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}
