#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        char c; cin >> c;
        if(c=='c'||c=='o'||c=='d'||c=='e'||c=='f'||c=='r'||c=='s'){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
