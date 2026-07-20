#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll m, power = 1; cin >> m;
        while(power * 10 <= m){
            power *= 10;
        }
        cout << m - power << endl;
    }
    return 0;
}
