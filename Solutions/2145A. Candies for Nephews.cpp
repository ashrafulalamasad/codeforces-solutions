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
        ll r = n % 3;
        if(r == 0){
            cout << 0 << endl;
        }else{
            cout << 3 - r << endl;
        }
    }
    return 0;
}
