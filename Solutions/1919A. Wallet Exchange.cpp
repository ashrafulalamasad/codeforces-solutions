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
        if((a + b) % 2 == 0){
            cout << "Bob" << endl;
        }else{
            cout << "Alice" << endl;
        }
    }
    return 0;
}
