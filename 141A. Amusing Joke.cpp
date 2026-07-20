#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string a, b, c; cin >> a >> b >> c;
    string s = a + b;
    sort(s.begin(), s.end());
    sort(c.begin(), c.end());
    if(s == c){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
