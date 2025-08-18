//وَمَن رامَ العُلا مِن غَيرِ كَدٍ
//أضاعَ العُمرَ في طَلَبِ المُحالِ
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void Dalia()
{
int n;
    cin>>n;
    ll u,v;
    cin>>u>>v;
    vector<ll>ve(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>ve[i];
    }
    ll ans=0;
    bool d1=false;
    bool d2=false;

    for (int i=1;i<n;i++) {
        ll diff=abs(ve[i]-ve[i-1]);
        if (diff>=2)d2=true;
        if (diff==1)d1=true;
    }

    if (d2)ans=0; // مكانين مختلفين تماما
      /* . . . . . x .
     * . . . x . . .
     */
    else if(d1)ans=min(u,v);
    /* . . . . x . .
     * . . . x . . .
     */
    else ans=min(u+v,2*v);
    /* . . . . x . . .
     * . . . . x . . .
*/
    cout<<ans<<endl;
}



int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        Dalia();
    }

}
