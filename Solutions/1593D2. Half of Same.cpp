#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        map<ll, ll> frequency; bool unbounded = false;
        for(ll value : a){
            frequency[value]++;
            if(frequency[value] >= n / 2) unbounded = true;
        }
        if(unbounded){
            cout << -1 << endl;
            continue;
        }
        ll answer = 1;
        for(ll i = 0; i < n; i++){
            for(ll j = i + 1; j < n; j++){
                ll difference = abs(a[i] - a[j]);
                for(ll divisor = 1; divisor * divisor <= difference; divisor++){
                    if(difference % divisor != 0) continue;
                    for(ll candidate : {divisor, difference / divisor}){
                        ll count = 0;
                        for(ll value : a){
                            if((value - a[i]) % candidate == 0) count++;
                        }
                        if(count >= n / 2) answer = max(answer, candidate);
                    }
                }
            }
        }
        cout << answer << endl;
    }
    return 0;
}
