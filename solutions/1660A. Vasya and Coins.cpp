#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b; cin >> a >> b;
        if(a == 0){
            cout << 1 << endl;
        }else{
            cout << (a+(b*2))+1 << endl;
        }
    }
    return 0;
}
