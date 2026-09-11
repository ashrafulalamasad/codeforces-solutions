#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, i = 0, step = 1;
    string t, s = "";
    cin >> n >> t;
    while(i < n){
        s += t[i];
        i += step;
        step++;
    }
    cout << s << endl;
    return 0;
}
