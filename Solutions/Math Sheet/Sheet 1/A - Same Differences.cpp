//وَمَن رامَ العُلا مِن غَيرِ كَدٍ
//أضاعَ العُمرَ في طَلَبِ المُحالِ
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Dalia()
{
    ll  n;
    cin >>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    map<ll,ll>mp;
    //j-i=aj-ai ----->  j-aj=i-ai
    for(int i=0;i<n;i++)
    {
        mp[v[i]-(i+1)]++;
    }
    ll c=0;
    for(auto &x:mp)
    {
       ll f=x.second;
        c+=(f*(f-1)/2);

    }
    cout<<c<<endl;

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
