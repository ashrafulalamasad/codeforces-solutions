#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll n, m;
ll tree[524288];

int main()
{
    fast;
    cin >> n >> m;
    ll sz = 1<<n;
    for(ll i=0; i<sz; i++) cin >> tree[sz+i];
    for(ll l=sz/2, dep=1; l>=1; l/=2, dep++){
        if(dep%2==1){
            for(ll i=l; i<2*l; i++) tree[i] = tree[2*i]|tree[2*i+1];
        }else{
            for(ll i=l; i<2*l; i++) tree[i] = tree[2*i]^tree[2*i+1];
        }
    }
    while(m--){
        ll p, b; cin >> p >> b;
        ll nd = sz+p-1;
        tree[nd] = b;
        for(ll dep=1; nd>1; dep++, nd/=2){
            if(dep%2==1) tree[nd/2] = tree[nd]|tree[nd^1];
            else tree[nd/2] = tree[nd]^tree[nd^1];
        }
        cout << tree[1] << endl;
    }
    return 0;
}
