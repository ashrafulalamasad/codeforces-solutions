#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll solve(ll a, ll b){
    ll sum = 0;
    for(ll i = 2; i <= b; i += 2){
        sum +=  pow(a, i);
    }
    return sum;
}

int main()
{
    fast;
    ll a, b; cin >> a >> b;
    cout << solve(a, b) << endl;
    return 0;
}
