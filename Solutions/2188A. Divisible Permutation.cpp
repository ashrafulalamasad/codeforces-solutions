#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p; set<ll> used;
        p.push_back(1); p.push_back(n);
        used.insert(1); used.insert(n);
        for(ll i = n - 2; i >= 1; i--){
            ll prev = p.back();
            if(prev - i >= 1 && prev - i <= n && used.find(prev - i) == used.end()){
                p.push_back(prev - i);
                used.insert(prev - i);
            }else{
                p.push_back(prev + i);
                used.insert(prev + i);
            }
        }
        reverse(p.begin(), p.end());
        for(ll i = 0; i < n; i++) cout << p[i] << " ";
        cout << endl;
    }
    return 0;
}
