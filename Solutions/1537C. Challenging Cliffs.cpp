#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> h(n);
        for(ll& value : h) cin >> value;
        sort(h.begin(), h.end());
        if(n == 2){
            cout << h[0] << " " << h[1] << endl;
            continue;
        }
        ll position = 1;
        for(ll i = 2; i < n; i++){
            if(h[i] - h[i - 1] < h[position] - h[position - 1]) position = i;
        }
        for(ll i = position; i < n; i++) cout << h[i] << " ";
        for(ll i = 0; i < position; i++) cout << h[i] << " ";
        cout << endl;
    }
    return 0;
}
