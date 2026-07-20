#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    if(n==1){
        cout << "I hate it" << endl;
        return 0;
    }
    for(ll i=1; i<=n-1; i++){
        if(i%2==1){
            cout << "I hate ";
        }else{
            cout << "I love ";
        }
        cout << "that ";
    }
    if(n%2==1){
        cout << "I hate ";
    }else{
        cout << "I love ";
    }
    cout << "it";
    return 0;
}
