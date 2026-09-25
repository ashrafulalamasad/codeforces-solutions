#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string cur = "";
        while((ll)cur.size() < n){
            cout << "? " << cur + "0" << endl;
            ll res; cin >> res;
            if(res == 1) cur += "0";
            else{
                cout << "? " << cur + "1" << endl;
                cin >> res;
                if(res == 1) cur += "1";
                else break;
            }
        }
        while((ll)cur.size() < n){
            cout << "? " << string("0") + cur << endl;
            ll res; cin >> res;
            if(res == 1) cur = string("0") + cur;
            else cur = string("1") + cur;
        }
        cout << "! " << cur << endl;
    }
    return 0;
}
