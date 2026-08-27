#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; bool found = false;
        for(ll i = 2; i*i*i <= n; i++){
            if(n % i != 0) continue;
            ll n1 = n / i;
            for(ll j = i+1; j*j <= n1; j++){
                if(n1 % j != 0) continue;
                ll c = n1 / j;
                if(c != i && c != j && c >= 2){
                    cout << "YES" << endl;
                    cout << i << " " << j << " " << c << endl;
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        if(!found) cout << "NO" << endl;
    }
    return 0;
}
