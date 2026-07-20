#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, Zsur = 0, Osur = 0, extra = 0; cin >> n;
        for(ll i = 0; i < n; i++){
            ll a, b, c, d; cin >> a >> b >> c >> d;
            if(a > c) Zsur += (a - c);
            if(b > d){
                Osur += (b - d);
                extra += min(a, c);
            }
        }
        cout << (Zsur + Osur + extra) << "\n";
    }
    return 0;
}
