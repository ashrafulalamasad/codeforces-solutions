#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    bool space = false;
    for(int i = 0; i < s.length();){
        if(s.substr(i,3) == "WUB"){
            if(space){
                cout << " ";
            }
            space = false;
            i += 3;
        }
        else{
            cout << s[i];
            space = true;
            i++;
        }
    }
    return 0;
}
