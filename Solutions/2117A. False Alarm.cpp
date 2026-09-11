#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x; cin >> n >> x; vector<ll> a(n);
        ll first = -1, last = -1;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 1){
                if(first == -1) first = i;
                last = i;
            }
        }
        if(x >= last - first + 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
