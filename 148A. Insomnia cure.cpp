#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll k, l, m, n, d, c = 0; cin >> k >> l >> m >> n >> d;
    for(ll i=1; i<=d; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            c++;
        }
    }
    cout << c;
    return 0;
}
