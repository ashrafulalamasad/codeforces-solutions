#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll count = 0;
    tc{
        ll a, b, c; cin >> a >> b >> c;
        if(a+b+c >= 2){
            count ++;
        }
    }
    cout << count << endl;
    return 0;
}
