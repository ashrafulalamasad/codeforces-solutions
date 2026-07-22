#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll row = n / 4, col;
    if(row % 2 == 0) col = n % 4;
    else col = 3 - n % 4;
    cout << row << ' ' << col << endl;
    return 0;
}
