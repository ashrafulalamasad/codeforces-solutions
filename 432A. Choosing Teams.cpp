#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k, x, c=0; cin >> n >> k;
    for(ll i=0; i<n; i++){
        cin >> x;
        if(x+k <= 5) c++;
    }
    cout << c/3 << endl;
    return 0;
}
