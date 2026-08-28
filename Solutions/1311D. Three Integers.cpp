#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll LIM = 20000;

int main()
{
    fast;
    tc{
        ll a, b, c; cin >> a >> b >> c;
        ll best = LLONG_MAX, ra = 1, rb = 1, rc = 1;
        for(ll A = 1; A <= LIM; A++){
            for(ll B = A; B <= LIM; B += A){
                ll k = c / B;
                for(ll d = 0; d < 2; d++){
                    ll C = (k + d) * B;
                    if(C < B) continue;
                    ll cost = abs(a - A) + abs(b - B) + abs(c - C);
                    if(cost < best){
                        best = cost; ra = A; rb = B; rc = C;
                    }
                }
            }
        }
        cout << best << endl;
        cout << ra << " " << rb << " " << rc << endl;
    }
    return 0;
}
