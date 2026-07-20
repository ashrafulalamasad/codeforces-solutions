#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll sum1 = 0, sum2 = 0;
        set<ll> s; s.insert(0);
        bool found = false;
        for(ll i = 0; i < n; i++){
            if(i % 2 == 0) sum1 += a[i];
            else sum2 += a[i];
            ll diff = sum1 - sum2;
            if(s.find(diff) != s.end()){
                found = true;
                break;
            }
            s.insert(diff);
        }
        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}
