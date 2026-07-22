#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    double n; cin >> n;
    ll ip = n;
    double fp = n - ip;
    if(fp == 0) cout << "int " << ip << endl;
    else cout << "float " << ip << " " << fp << endl;
    return 0;
}
