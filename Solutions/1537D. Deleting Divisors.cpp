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
        if(n % 2 == 1){
            cout << "Bob" << endl;
            continue;
        }
        ll power = 0;
        while(n % 2 == 0){
            n /= 2;
            power++;
        }
        if(n > 1 || power % 2 == 0) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }
    return 0;
}
