#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll ans = 0;
        for(ll i=0; i<10; i++){
            string s; cin >> s;
            for(ll j=0; j<10; j++){
                if(s[j]=='X'){
                    ll d = min(min(i,j), min(9-i,9-j));
                    ans += d + 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
