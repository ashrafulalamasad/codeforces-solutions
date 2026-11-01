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
        bool all_one = true; ll sum = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i]; sum += a[i];
            if(a[i] != 1) all_one = false;
        }
        bool middle_one = true;
        for(ll i = 1; i < n - 1; i++){
            if(a[i] != 1) middle_one = false;
        }
        if(all_one){
            cout << -1 << endl;
        }else if(!middle_one){
            cout << sum - 1 << endl;
        }else{
            cout << sum - (n - 1) << endl;
        }
    }
    return 0;
}
