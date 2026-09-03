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
        ll temp = n, best = n, bestE = 1;
        for(ll p = 2; p * p <= temp; p++){
            if(temp % p == 0){
                ll e = 0;
                while(temp % p == 0){
                    temp /= p; e++;
                }
                if(e > bestE){
                    best = p; bestE = e;
                }
            }
        }
        cout << bestE << endl;
        ll rem = n;
        for(ll i = 0; i < bestE - 1; i++){
            cout << best << " "; rem /= best;
        }
        cout << rem << endl;
    }
    return 0;
}
