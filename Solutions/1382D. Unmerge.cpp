#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(2 * n), blocks;
        for(ll i = 0; i < 2 * n; i++) cin >> p[i];
        ll currentMaximum = 0, length = 0;
        for(ll value : p){
            if(value > currentMaximum){
                if(length > 0) blocks.push_back(length);
                currentMaximum = value;
                length = 1;
            }else length++;
        }
        vector<ll> possible(n + 1, 0);
        possible[0] = 1;
        for(ll lengthValue : blocks){
            for(ll sum = n; sum >= lengthValue; sum--){
                if(possible[sum - lengthValue]) possible[sum] = 1;
            }
        }
        if(possible[n]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
