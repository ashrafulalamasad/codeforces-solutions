#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<bool> fallen(n + 1, false);
    ll expected = n;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        fallen[x] = true;
        while(expected >= 1 && fallen[expected]){
            cout << expected << ' ';
            expected--;
        }
        cout << endl;
    }
    return 0;
}
