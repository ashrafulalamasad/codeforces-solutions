#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; ll q = n / 3, r = n % 3;
        if(r == 0){
            cout << q << " " << q + 1 << " " << q - 1 << endl;
        }else if(r == 1){
            cout << q << " " << q + 2 << " " << q - 1 << endl;
        }else{
            cout << q + 1 << " " << q + 2 << " " << q - 1 << endl;
        }
    }
    return 0;
}
