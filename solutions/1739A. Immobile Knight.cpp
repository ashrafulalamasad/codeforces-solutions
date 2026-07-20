#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        if(max(n, m) == 3){
            if(min(n, m) == 1){
                cout << "1 1" << endl;
            }else{
                cout << "2 2" << endl;
            }
        }else{
            cout << "1 1" << endl;
        }
    }
    return 0;
}
