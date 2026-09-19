#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> q(n);
        for(ll i = 0; i < n; i++) cin >> q[i];
        vector<ll> r1(n, -1), r2(n, -1);
        ll last = -1;
        for(ll i = 0; i < n; i++){
            if(last != q[i]){
                r1[i] = q[i];
                r2[i] = q[i];
            }
            last = q[i];
        }
        set<ll> left;
        for(ll i = 1; i <= n; i++) left.insert(i);
        for(ll i = 0; i < n; i++) if(r1[i] != -1) left.erase(r1[i]);
        for(ll i = 0; i < n; i++) if(r1[i] == -1){
            r1[i] = *left.begin();
            left.erase(left.begin());
        }
        set<ll> right;
        for(ll i = 1; i <= n; i++) right.insert(i);
        for(ll i = 0; i < n; i++) if(r2[i] != -1) right.erase(r2[i]);
        ll lastPlaced = -1;
        for(ll i = 0; i < n; i++){
            if(r2[i] == -1){
                auto it = right.lower_bound(lastPlaced);
                it--;
                r2[i] = *it;
                right.erase(it);
            }else lastPlaced = r2[i];
        }
        for(ll i = 0; i < n; i++) cout << r1[i] << " ";
        cout << endl;
        for(ll i = 0; i < n; i++) cout << r2[i] << " ";
        cout << endl;
    }
    return 0;
}
