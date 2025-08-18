//وَمَن رامَ العُلا مِن غَيرِ كَدٍ
//أضاعَ العُمرَ في طَلَبِ المُحالِ
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
ll mod=1e9+7;

void Dalia()
{
    ll x;
    cin>>x;
    ll ans=0;
    ll sum=1,a= 1;
    while (x-sum>=0) {
        ans++;
        x-=sum;
        a*= 2;
        sum=a*a+(a*(a-1));
    }

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
