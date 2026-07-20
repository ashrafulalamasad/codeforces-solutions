#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, p, q, count = 0; cin >> n;
    for(ll i=0; i<n; i++){
        cin >> p >> q;
        if(q>=p+2){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
