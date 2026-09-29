#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        ll mx = n * n / 2;
        if(k % 2 || k > mx){
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
        vector<ll> p(n);
        iota(p.begin(), p.end(), 1);
        k /= 2;
        for(ll i = 0; i < n / 2 && k > 0; i++){
            ll gain = n - 1 - 2 * i;
            if(k >= gain){
                swap(p[i], p[n - 1 - i]);
                k -= gain;
            }else{
                swap(p[i], p[i + k]);
                k = 0;
            }
        }
        for(ll i = 0; i < n; i++) cout << p[i] << " ";
        cout << endl;
    }
    return 0;
}
