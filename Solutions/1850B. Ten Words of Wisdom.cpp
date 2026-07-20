#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll winner = -1, best = -1;
        for(ll i = 1; i <= n; i++){
            ll a, b; cin >> a >> b;
            if(a <= 10 && b > best){
                best = b;
                winner = i;
            }
        }
        cout << winner << endl;
    }
    return 0;
}
