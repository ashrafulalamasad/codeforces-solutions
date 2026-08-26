#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll q, n = 0, sum = 0, riz = 0;; cin >> q;
        deque<ll> dq; bool rev = false;
        while(q--){
            ll s; cin >> s;
            if(s == 1){
                ll x;
                if(!rev){
                    x = dq.back();
                }else{
                    x = dq.front();
                }
                riz = riz + sum - n * x;
                if(!rev){
                    dq.pop_back();
                    dq.push_front(x);
                }else{
                    dq.pop_front();
                    dq.push_back(x);
                }
            }else if(s == 2){
                riz = (n + 1) * sum - riz;
                rev = !rev;
            }else{
                ll k; cin >> k;
                n++; sum += k; riz += k * n;
                if(!rev){
                    dq.push_back(k);
                }else{
                    dq.push_front(k);
                }
            }
            cout << riz << endl;
        }
    }
    return 0;
}
