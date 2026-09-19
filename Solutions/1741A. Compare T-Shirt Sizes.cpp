#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string a, b; cin >> a >> b;
        ll va, vb, sa = a.back(), sb = b.back();
        if(sa == 'S') va = -1;
        else if(sa == 'M') va = 0;
        else va = 1;
        if(sb == 'S') vb = -1;
        else if(sb == 'M') vb = 0;
        else vb = 1;
        if(va != vb){
            if(va < vb) cout << "<" << endl;
            else cout << ">" << endl;
        }else{
            if(sa == 'S'){
                if(a.size() > b.size()) cout << "<" << endl;
                else if(a.size() < b.size()) cout << ">" << endl;
                else cout << "=" << endl;
            }else{
                if(a.size() > b.size()) cout << ">" << endl;
                else if(a.size() < b.size()) cout << "<" << endl;
                else cout << "=" << endl;
            }
        }
    }
    return 0;
}
