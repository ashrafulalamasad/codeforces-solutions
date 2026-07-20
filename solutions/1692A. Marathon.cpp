#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        vector<ll> a(4);
        for(ll i=0; i<4; i++) cin >> a[i];
        ll count = 0;
        for(ll i=1; i<4; i++){
            if(a[i]>a[0]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
