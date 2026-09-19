#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; ll p = n;
        for(ll i = 2; i * i <= n; i++){
            if(n % i == 0){
                p = i;
                break;
            }
        }
        if(p == n) cout << 1 << " " << n - 1 << endl;
        else cout << n / p << " " << n - n / p << endl;
    }
    return 0;
}
