#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool first = false;

void printToNum(ll num){
    if(num == 0) return;
    if(first) cout << " ";
    first = true;
    cout << num;
    printToNum(num - 1);
}

int main()
{
    fast;
    ll n; cin >> n;
    printToNum(n);
    cout << endl;
    return 0;
}
