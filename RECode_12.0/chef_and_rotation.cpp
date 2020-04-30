/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 1000000007
#define pb push_back
#define MODS 10000007
#define INF 2000000000000000000LL
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       ll a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       map<ll,vector<ll> > m;
       for(int i=0;i<n;i++)
       {
           m[a[i]].pb(i);
       }
       ll ans=0,temp=n;
       for(auto it:m)
       {
           if(it.second.back()<temp)
           {
               ans++;
               temp=it.second[0];
           }
           else
           {
               temp=*lower_bound(it.second.begin(),it.second.end(),temp);
           }
       }
       cout<<ans<<endl;
    }
	return 0;
}
