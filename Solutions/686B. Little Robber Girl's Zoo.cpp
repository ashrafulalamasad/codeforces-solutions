#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j + 1 < n; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                cout << j + 1 << " " << j + 2 << endl;
            }
        }
    }
    return 0;
}
