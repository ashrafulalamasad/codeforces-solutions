#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll sum = 0;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            sum += i;
            if(i != n / i) sum += n / i;
        }
    }
    cout << sum << endl;
    return 0;
}
