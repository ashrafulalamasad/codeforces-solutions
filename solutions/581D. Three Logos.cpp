#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll x[3],y[3];
    for(int i=0;i<3;i++) cin>>x[i]>>y[i];
    ll area=x[0]*y[0]+x[1]*y[1]+x[2]*y[2];
    ll n=(ll)round(sqrt((double)area));
    if(n*n!=area){cout<<-1;return 0;}
    int p[3]={0,1,2};
    do{
        for(int mask=0;mask<8;mask++){
            ll w[3],h[3];
            for(int i=0;i<3;i++){
                w[i]=(mask>>i)&1?y[p[i]]:x[p[i]];
                h[i]=(mask>>i)&1?x[p[i]]:y[p[i]];
            }
            if(w[0]==n&&w[1]==n&&w[2]==n&&h[0]+h[1]+h[2]==n){
                cout<<n<<"\n";
                for(int k=0;k<3;k++)
                    for(ll r=0;r<h[k];r++){for(ll c=0;c<n;c++) cout<<(char)('A'+p[k]);cout<<"\n";}
                return 0;
            }
            if(h[0]==n&&w[1]==w[2]&&w[0]+w[1]==n&&h[1]+h[2]==n){
                cout<<n<<"\n";
                for(ll r=0;r<n;r++){
                    for(ll c=0;c<w[0];c++) cout<<(char)('A'+p[0]);
                    if(r<h[1]) for(ll c=0;c<w[1];c++) cout<<(char)('A'+p[1]);
                    else for(ll c=0;c<w[2];c++) cout<<(char)('A'+p[2]);
                    cout<<"\n";
                }
                return 0;
            }
        }
    }while(next_permutation(p,p+3));
    cout<<-1;
    return 0;
}
