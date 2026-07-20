#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<string> arr(n);
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector<ll> pM(n);
        iota(pM.begin(), pM.end(), 0);
        sort(pM.begin(), pM.end(), [&](ll u, ll v){
            if(u<v){
                return arr[u][v]=='1';
                
            }
            return arr[v][u]=='0'; });
        for(ll i = 0; i < n; i++){
            cout << pM[i] + 1 << (i + 1 == n ? "\n" : " ");
        }
    }
    return 0;
}
