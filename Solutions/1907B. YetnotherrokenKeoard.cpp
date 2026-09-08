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
        vector<char> answer; vector<bool> alive;
        vector<ll> lowercase, uppercase;
        for(char c : s){
            if(c == 'b'){
                if(!lowercase.empty()){
                    alive[lowercase.back()] = false;
                    lowercase.pop_back();
                }
            }else if(c == 'B'){
                if(!uppercase.empty()){
                    alive[uppercase.back()] = false;
                    uppercase.pop_back();
                }
            }else{
                answer.push_back(c);
                alive.push_back(true);
                if(islower(c)) lowercase.push_back(answer.size() - 1);
                else uppercase.push_back(answer.size() - 1);
            }
        }
        for(ll i = 0; i < answer.size(); i++){
            if(alive[i]) cout << answer[i];
        }
        cout << endl;
    }
    return 0;
}
