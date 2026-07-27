#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, q; cin >> n >> q;
    string s; cin >> s;
    for(ll i = 0; i < q; i++){
        string cmd; cin >> cmd;
        if(cmd == "pop_back"){
            s.pop_back();
        }else if(cmd == "front"){
            cout << s.front() << endl;
        }else if(cmd == "back"){
            cout << s.back() << endl;
        }else if(cmd == "sort"){
            ll l, r; cin >> l >> r;
              if(l > r) swap(l, r);
              sort(s.begin() + (l-1), s.begin() + r);
        }else if(cmd == "reverse"){
            ll l, r; cin >> l >> r;
              if(l > r) swap(l, r);
              reverse(s.begin() + (l-1), s.begin() + r);
        }else if(cmd == "print"){
            ll pos; cin >> pos;
              if(pos >= 1 && pos <= (ll)s.size()) cout << s[pos-1] << '\n';
              else cout << '\n';
        }else if(cmd == "substr"){
            ll l, r; cin >> l >> r;
              if(l > r) swap(l, r);
              if(l >= 1 && r <= (ll)s.size()) cout << s.substr(l-1, r-l+1) << '\n';
              else cout << '\n';
        }else if(cmd == "push_back"){
            char x; cin >> x; s.push_back(x);
        }
    }
    return 0;
}
