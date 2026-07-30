#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string num; cin >> num;
    ll div; cin >> div;
    ll result = 0;
    for(ll i = 0; i < num.size(); i++){
        result *= 10;
        result += num[i] - '0';
        result %= div;
    }
    if(result == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
