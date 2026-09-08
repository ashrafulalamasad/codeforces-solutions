#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string s; cin >> s;
        ll cnt = count(s.begin(), s.end(), '0');
        if(cnt % 2 == 0 || cnt == 1){
            cout << "BOB" << endl;
        }else{
            cout << "ALICE" << endl;
        }
    }
    return 0;
}
