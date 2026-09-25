#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    deque<ll> dq; set<ll> onScreen;
    for(ll i = 0; i < n; i++){
        ll id; cin >> id;
        if(onScreen.count(id)) continue;
        if((ll)dq.size() == k){
            onScreen.erase(dq.back());
            dq.pop_back();
        }
        dq.push_front(id);
        onScreen.insert(id);
    }
    cout << dq.size() << endl;
    for(ll x : dq) cout << x << " ";
    cout << endl;
    return 0;
}
