#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    vector<string> cmp(3);
    for(ll i = 0; i < 3; i++) cin >> cmp[i];
    string order = "ABC";
    sort(order.begin(), order.end());
    do{
        bool ok = true;
        for(ll i = 0; i < 3; i++){
            char l = cmp[i][0], r = cmp[i][2], op = cmp[i][1];
            ll posL = order.find(l), posR = order.find(r);
            if(op == '>'){
                if(posL < posR){ ok = false; break; }
            }else{
                if(posL > posR){ ok = false; break; }
            }
        }
        if(ok){
            cout << order << endl;
            return 0;
        }
    }while(next_permutation(order.begin(), order.end()));
    cout << "Impossible" << endl;
    return 0;
}
