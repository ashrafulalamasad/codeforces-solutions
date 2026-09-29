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
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        ll k = n / 2;
        for(ll i = 0; i < k; i++){
            string a(n, '0'), b(n, '0');
            a[0] = '1';
            b[0] = '9';
            a[n - 1 - k - i] = '6';
            a[n - 1 - 2 * i] = '9';
            b[n - 1 - k - i] = '6';
            b[n - 1 - 2 * i] = '1';
            cout << a << endl << b << endl;
        }
        string extra = "196" + string(n - 3, '0');
        cout << extra << endl;
    }
    return 0;
}
