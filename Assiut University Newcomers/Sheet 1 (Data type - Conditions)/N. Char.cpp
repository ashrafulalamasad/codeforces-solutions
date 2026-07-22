#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    char x; cin >> x;
    if(x >= 'a' && x <= 'z') cout << (char)(x - 32) << endl;
    else cout << (char)(x + 32) << endl;
    return 0;
}
