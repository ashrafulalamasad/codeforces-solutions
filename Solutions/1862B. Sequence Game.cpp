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
        vector<ll> a; a.reserve(2 * n);
        a.push_back(b[0]);
        for(ll i = 1; i < n; i++){
            if(b[i - 1] <= b[i]){
                a.push_back(b[i]);
            }else{
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }
        ll m = (ll)a.size();
        cout << m << endl;
        for(ll i = 0; i < m; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
