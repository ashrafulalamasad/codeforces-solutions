#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        if(k % 4 == 0) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            if(k % 2 == 1){
                for(ll i = 1; i <= n; i += 2) cout << i << " " << i + 1 << endl;
            }else{
                for(ll i = 1; i <= n; i += 2){
                    if((i + 1) % 4 == 0) cout << i << " " << i + 1 << endl;
                    else cout << i + 1 << " " << i << endl;
                }
            }
        }
    }
    return 0;
}
