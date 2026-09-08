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
        ll answer = 1;
        while(n > 0){
            ll digit = n % 10;
            answer *= (digit + 1) * (digit + 2) / 2;
            n /= 10;
        }
        cout << answer << endl;
    }
    return 0;
}
