/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 1000000007
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
       string s;
       cin>>s;
       ll len=s.length();
       ll fre1[26];
       ll fre2[26];
       for(int i=0;i<26;i++)
       {
           fre1[i]=fre2[i]=0;
       }
       for(int i=0;i<len/2;i++)
       {
           fre1[s[i]-'a']++;
       }
       ll beg=0;
       if(len%2==0)
       {
           beg=len/2;
       }
       else
       {
           beg=len/2+1;
       }
       for(int i=beg;i<len;i++)
       {
           fre2[s[i]-'a']++;
       }
       ll flag=0;
       for(int i=0;i<26;i++)
       {
           if(fre1[i]!=fre2[i])
           {
               flag=1;
               goto label;
           }
       }
       label : ;
       if(flag==1)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }
    }
	return 0;
}
