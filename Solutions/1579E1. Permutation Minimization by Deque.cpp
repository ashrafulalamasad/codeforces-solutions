#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        deque<ll> dq; dq.push_back(p[0]);
        for(ll i = 1; i < n; i++){
            if(p[i] < dq.front()) dq.push_front(p[i]);
            else dq.push_back(p[i]);
        }
        for(ll i = 0; i < n; i++) cout << dq[i] << " ";
        cout << endl;
    }
    return 0;
}
