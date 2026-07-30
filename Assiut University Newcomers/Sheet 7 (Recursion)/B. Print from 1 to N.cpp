#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void printToN(ll num){
    if(num == 0) return;
    printToN(num - 1);
    cout << num << endl;
}

int main()
{
    fast;
    ll n; cin >> n;
    printToN(n);
    return 0;
}
