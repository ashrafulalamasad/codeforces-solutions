#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k; priority_queue<ll> pq;
    for(ll i = 0; i < 30; i++){
        if(n & (1 << i)) pq.push(1 << i);
    }
    if(k < pq.size() || k > n){
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    while(pq.size() < k){
        ll x = pq.top();
        pq.pop();
        pq.push(x / 2);
        pq.push(x / 2);
    }
    vector<ll> v;
    while(!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }
    for(ll i = 0; i < k; i++) cout << v[i] << " \n"[i == k - 1];
    return 0;
}
