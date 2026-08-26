#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; string s; cin >> n >> s; queue<ll> dq, rq;
    for(ll i = 0; i < n; i++){
        if(s[i] == 'D') dq.push(i);
        else rq.push(i);
    }
    while(!dq.empty() && !rq.empty()){
        if(dq.front() < rq.front()){
            ll d = dq.front(); dq.pop();
            rq.pop();
            dq.push(d + n);
        }else{
            ll r = rq.front(); rq.pop();
            dq.pop();
            rq.push(r + n);
        }
    }
    cout << (dq.empty() ? 'R' : 'D') << endl;
    return 0;
}
