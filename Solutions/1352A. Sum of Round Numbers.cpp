#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> res;
        ll pow = 1;
        while(n > 0){
            ll digit = n % 10;
            if(digit != 0){
                res.push_back(digit * pow);
            }
            n /= 10; pow *= 10;
        }
        cout << res.size() << endl;
        for(ll x : res){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
