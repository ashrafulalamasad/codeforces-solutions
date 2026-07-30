#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void print(ll num){
    if(num == 0) return;
    cout << "I love Recursion" << endl;
    print(num - 1);
}

int main()
{
    fast;
    ll n; cin >> n;
    print(n);
    return 0;
}
