#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s, t; cin >> s >> t;
    reverse(t.begin(), t.end());
    if(s==t){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
