#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    while(k--){
        ll last = n%10;
        if(last > 0){
            n--;
        }else{
            n = n/10;
        }
    }
    cout << n << endl;
    return 0;
}
