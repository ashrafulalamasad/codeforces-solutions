#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void printNTimes(ll n, char c){
    for(ll i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << c;
    }
    cout << endl;
}

int main()
{
    fast;
    tc{
        ll n; char c; cin >> n >> c;
        printNTimes(n, c);
    }
    return 0;
}
