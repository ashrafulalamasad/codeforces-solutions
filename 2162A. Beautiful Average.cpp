#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x, max_val = 0;
        cin >> n;
        for(ll i = 0; i < n; ++i){
            cin >> x;
            if(x > max_val){
                max_val = x;
            }
        }
        cout << max_val << endl;
    }
    return 0;
}
