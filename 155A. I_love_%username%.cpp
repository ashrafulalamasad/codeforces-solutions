#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    ll best=a[0], worst=a[0], amazing=0;
    for(ll i=1; i<n; i++){
        if(a[i] > best){
            amazing++;
            best = a[i];
        }
        else if(a[i] < worst){
            amazing++;
            worst = a[i];
        }
    }
    cout << amazing << endl;
    return 0;
}
