//وَمَن رامَ العُلا مِن غَيرِ كَدٍ
//أضاعَ العُمرَ في طَلَبِ المُحالِ
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void Dalia()
{
    ll n,k;
    cin>>n>>k;
    if (n%2==0) {
        ll x=(k-1)%n+1;
        cout<<x<<endl;
    } else {
        ll m=(n-1)/2;
        ll y=(k-1)/m;
        ll x=(k+y)%n;
        if(x==0)x=n;
        cout<<x<<endl;
    }

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
