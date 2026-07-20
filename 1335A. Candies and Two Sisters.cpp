#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        if(n<=2){
            cout << 0 << endl;
        }else if(n==3){
            cout << 1 << endl;
        }else{
            if(n%2==0){
                cout << (n/2)-1 << endl;
            }else{
                cout << n/2 << endl;
            }
        }
    }
    return 0;
}
