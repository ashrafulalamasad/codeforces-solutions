#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        if(s == "abc"){
            cout << "YES\n";
            continue;
        }
        bool ok = false;
        for(int i=0; i<3; i++){
            for(int j=i+1; j<3; j++){
                string t = s;
                swap(t[i], t[j]);
                if(t == "abc") ok = true;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
