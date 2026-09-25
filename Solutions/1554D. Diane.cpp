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
        if(n == 1) cout << "a" << endl;
        else{
            string s = string((size_t)(n / 2), 'a');
            if(n % 2 == 1) s += "bc";
            else s += "b";
            s += string((size_t)(n / 2 - 1), 'a');
            cout << s << endl;
        }
    }
    return 0;
}
