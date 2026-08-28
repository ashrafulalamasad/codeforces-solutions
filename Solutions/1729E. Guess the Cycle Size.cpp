#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    for(ll i = 2; i <= 26; i++){
        cout << "? " << 1 << " " << i << endl;
        ll p; cin >> p;
        if(p == -1){
            cout << "! " << i - 1 << endl;
            return 0;
        }
        cout << "? " << i << " " << 1 << endl;
        ll q; cin >> q;
        if(q == -1){
            cout << "! " << i - 1 << endl;
            return 0;
        }
        if(p != q){
            cout << "! " << p + q << endl;
            return 0;
        }
    }
    return 0;
}
