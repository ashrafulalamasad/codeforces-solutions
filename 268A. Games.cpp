#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, count = 0; cin >> n;
    ll h[30], a[30];
    for(ll i = 0; i < n; i++){
        cin >> h[i] >> a[i];
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(i != j && h[i] == a[j]){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
