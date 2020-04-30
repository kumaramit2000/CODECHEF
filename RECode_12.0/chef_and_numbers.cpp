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
       ll n;
       cin>>n;
       ll a[n];
       ll freq[1005];
       ll maxm=0;
       memset(freq,0,sizeof(freq));
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           maxm=max(maxm,a[i]);
           freq[a[i]]++;
       }
       int ans=0;
       ll res=0,dish=INF;
       for(int i=1;i<=maxm;i++)
       {
           ans=0;
           if(freq[i]>0)
           {
               int num=i;
               int flag=0;
               for(int j=0;j<n;j++)
               {
                   if(j==0)
                   {
                       if(a[j]==num)
                       {
                           ans++;
                           flag=1;
                       }
                   }
                   else
                   {
                       if(a[j]==num)
                       {
                           if(a[j]==a[j-1])
                           {
                               if(flag==0)
                               {
                                   ans++;
                                   flag=1;
                               }
                               else
                               {
                                   flag=0;
                               }
                           }
                           else
                           {
                               ans++;
                               flag=1;
                           }
                       }
                   }
               }
               if(res<=ans)
               {
                   if(res==ans)
                   {
                     if(dish>i)
                     {
                        dish=i;
                     }
                   }
                   else
                   {
                       dish=i;
                   }
                   res=ans;
               }
           }
       }
       cout<<dish<<endl;
    }
	return 0;
}
