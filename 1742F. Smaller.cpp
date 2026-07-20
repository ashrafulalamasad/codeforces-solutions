#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll q; cin >> q;
        ll cnts[26]={0}, cntt[26]={0};
        cnts[0]=1; cntt[0]=1;
        for(ll i=0; i<q; i++){
            ll d; ll k;string x; cin >> d >> k >> x;
            ll *tar = d == 1? cnts:cntt;
            for(char c:x) tar[c-'a']+=k;
            bool yes=0;
            ll ps = 0, pt = 25;
            ll rs = cnts[0], rt = cntt[25];
            while(1){
                while(ps<26&&rs==0){ps++;if(ps<26)rs=cnts[ps];}
                while(pt>=0&&rt==0){pt--;if(pt>=0)rt=cntt[pt];}
                if(ps==26){yes=(pt>=0);break;}
                if(pt<0){yes=0;break;}
                if(ps<pt){yes=1;break;}
                else if(ps>pt){yes=0;break;}
                else{ll adv=min(rs,rt);rs-=adv;rt-=adv;}
            }
            cout<<(yes?"YES\n":"NO\n");
        }
    }
    return 0;
}
