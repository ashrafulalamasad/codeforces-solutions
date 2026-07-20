#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, p, q, num; cin >> n;
    set<ll>s;
    cin >> p;
    for(ll i=0; i<p; i++){
        cin >> num;
        s.insert(num);
    }
    cin >> q;
    for(ll i=0; i<q; i++){
        cin >> num;
        s.insert(num);
    }
    if(s.size() == n){
        cout << "I become the guy." << endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}
