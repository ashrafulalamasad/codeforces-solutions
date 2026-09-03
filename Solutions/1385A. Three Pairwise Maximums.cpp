#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        vector<ll> v(3);
        for(ll i = 0; i < 3; i++) cin >> v[i];
        sort(v.begin(), v.end());
        if(v[1] != v[2]){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            cout << v[0] << " " << v[0] << " " << v[2] << endl;
        }
    }
    return 0;
}
