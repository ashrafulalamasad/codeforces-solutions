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
        if(n == 1){
            cout << 1 << endl;
        }else{
            set<ll> s(a.begin(), a.end());
            if(s.size() > 2){
                cout << n << endl;
            }else{
                cout << (n / 2) + 1 << endl;
            }
        }
    }
    return 0;
}
