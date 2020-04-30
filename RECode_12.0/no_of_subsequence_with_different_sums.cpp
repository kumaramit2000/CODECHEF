/* check this solution here:
https://www.codechef.com/viewsolution/32440660
*/
/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 163577857
#define pb push_back
#define MODS 10000007
#define INF 2000000000000000000LL
#include <bits/stdc++.h>
using namespace std;
vector<ll> p(2000005);
vector<ll> q(2000005);
ll power(ll p,ll q)
{
    if(q==0)
    {
        return 1;
    }
    if(q%2==0)
    {
        return power((p*p)%MODM,q/2)%MODM;
    }
    else
    {
        return (p*(power((p*p)%MODM,q/2)%MODM))%MODM;
    }
}
void precalc()
{
    p[0]=1;
    q[0]=1;
    for(int i=1;i<2000000;i++)
    {
        p[i]=(p[i-1]*i)%MODM;
        q[i]=(q[i-1]*power(i,MODM-2))%MODM;
    }
}
ll ncombr(ll n,ll r)
{
    if(r>n)
    {
        return 0;
    }
    else
    {
        ll ans=p[n];
        ans=(ans*q[r])%MODM;
        ans=(ans*q[n-r])%MODM;
        return ans;
    }
}
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll zc=0,poc=0,noc=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            zc++;
        }
        else if(a[i]==1)
        {
            poc++;
        }
        else
        {
            noc++;
        }
    }
    ll every=power(2,zc);
    ll ans=0;
    vector<ll> result;
    //using fast fourier transform;
    for(int i=n;i>=1;i--)
    {
        ans=(every*ncombr(poc+noc,i+poc))%MODM;//FOR SUM= -N,-(N-1).......,-1 WE STROE THE ANSWER IN RESULT VECTOR; 
        result.pb(ans);
    }
    ans=((every*ncombr(poc+noc,poc))%MODM-1+MODM)%MODM;// EMPTY SUBSTRING ALSO INCLUDED IN THIS SO WE REDUCE IT BY 1;
    result.pb(ans);
    for(int i=1;i<=n;i++)
    {
        ans=(every*ncombr(poc+noc,i+noc))%MODM;//FOR SUM= 1,2,3,.........,N WE STROE THE ANSWER IN RESULT VECTOR; 
        result.pb(ans);
    }
    ll sz=result.size();
    for(int i=0;i<sz;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precalc();
    ll t;
    cin>>t;
    while(t--)
    {
       solve();
    }
	return 0;
}
