#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll x;
    while(cin >> x){
        if(x == 1999){
            cout << "Correct" << endl;
            break;
        }else{
            cout << "Wrong" << endl;
        }
    }
    return 0;
}
