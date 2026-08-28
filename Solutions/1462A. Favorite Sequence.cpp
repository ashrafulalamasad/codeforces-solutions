#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> b(n);
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll l = 0, r = n - 1; bool front = true;
        while(l <= r){
            if(front) cout << b[l++] << " ";
            else cout << b[r--] << " ";
            front = !front;
        }
        cout << endl;
    }
    return 0;
}
