#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    for(ll i=1; i<=n; i++){
        if(i%2==1){
            for(ll j=0; j<m; j++){
                cout << "#";
            }
        }
        else if(i%4==2){
            for(ll j=1; j<m; j++){
                cout << ".";
            }
            cout << "#";
        }
        else{
            cout << "#";
            for(ll j=1; j<m; j++){
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
