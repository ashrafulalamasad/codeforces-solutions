#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string table; cin >> table;
    bool canPlay = false;
    for(ll i = 0; i < 5; i++){
        string card; cin >> card;
        if(card[0] == table[0] || card[1] == table[1]){
            canPlay = true;
        }
    }
    if(canPlay){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
