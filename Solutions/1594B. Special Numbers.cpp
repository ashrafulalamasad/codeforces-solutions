#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll mod = 1000000007;
    tc{
        ll n, k; cin >> n >> k;
        ll answer = 0, power = 1;
        while(k > 0){
            if(k % 2 == 1) answer = (answer + power) % mod;
            power = power * n % mod;
            k /= 2;
        }
        cout << answer << endl;
    }
    return 0;
}
