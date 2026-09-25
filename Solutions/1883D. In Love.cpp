#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll q; cin >> q; multiset<ll> L, R;
    while(q--){
        char op; ll l, r; cin >> op >> l >> r;
        if(op == '+'){
            L.insert(l);
            R.insert(r);
        }else{
            L.erase(L.find(l));
            R.erase(R.find(r));
        }
        if(L.size() < 2) cout << "NO" << endl;
        else if(*L.rbegin() > *R.begin()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
