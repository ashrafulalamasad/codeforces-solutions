#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string b; cin >> b;
        string a = "";
        a += b[0];
        for(int i = 1; i < b.size(); i += 2){
            a += b[i];
        }
        cout << a << endl;
    }
    return 0;
}
