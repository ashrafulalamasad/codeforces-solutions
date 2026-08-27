#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n + 1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        vector<ll> g(n + 2, 0);
        ll suffix = 0, bestSuffix = 0;
        for(ll i = n; i >= 1; i--){
            suffix += a[i];
            if(suffix > bestSuffix){
                bestSuffix = suffix;
            }
            g[i] = bestSuffix;
        }
        ll bestValue = g[1], answer = 0, pref = 0, maxPref = 0;
        for(ll i = 1; i <= n; i++){
            pref += a[i];
            if(pref > maxPref){
                ll current = pref + g[i + 1];
                if(current >= bestValue){
                    bestValue = current;
                    answer = pref;
                }
                maxPref = pref;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
