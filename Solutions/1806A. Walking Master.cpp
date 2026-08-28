#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, c, d; cin >> a >> b >> c >> d;
        if(d < b){
            cout << -1 << endl;
        }else{
            ll up = d - b;
            ll left = a + up - c;
            if(left < 0){
                cout << -1 << endl;
            }else{
                cout << up + left << endl;
            }
        }
    }
    return 0;
}
