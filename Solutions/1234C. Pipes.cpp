#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, row = 0; cin >> n;
        string r1, r2; cin >> r1 >> r2;
        bool ok = false, dead = false;
        for(ll c = 0; c < n; c++){
            char cur = (row == 0 ? r1 : r2)[c];
            if(cur == '1' || cur == '2'){
                if(c == n - 1) ok = (row == 1);
            }else{
                row = 1 - row;
                char nxt = (row == 0 ? r1 : r2)[c];
                if(nxt == '1' || nxt == '2'){
                    dead = true;
                    break;
                }
                if(c == n - 1) ok = (row == 1);
            }
        }
        if(!dead && ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
