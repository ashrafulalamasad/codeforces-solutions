#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    bool hard = false;
    for(ll i=0; i<n; i++){
        ll opinion; cin >> opinion;
        if(opinion == 1){
            hard = true;
            break;
        }
    }
    if(hard){
        cout << "HARD" << endl;
    }else{
        cout << "EASY" << endl;
    }
    return 0;
}
