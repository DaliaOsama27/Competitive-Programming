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

    ll n;
    cin>>n;
    vector<ll>v(n);
    map<int, int>mp;
    for (auto& i:v)
    {
        cin>>i;
        mp[i]++;
    }
    if (n==1)
    {
        cout<<v[0];
        return;
    }
    int ones=0,twos=0;
    for (auto&i:mp)
    {
        if (i.first==1)
        {
            ones=i.second;
        }
        else if(i.first==2)
        {
            twos=i.second;
        }
    }
    if (twos==v.size())
    {
        for (int i=0;i<n;i++)
        {
            cout<<2<< " ";
        }
        return;
    }
    else if(ones==v.size())
    {
        for (int i=0;i<n;i++)
        {
            cout <<1<<" ";
        }
        return;
    }
 
    cout <<2<<" "<<1<<" ";
    twos--;
    ones--;
    for (int i=0;i< n; i++)
    {
            
        if (twos!=0)
        {
            cout<<2<<" ";
            twos--;
        }
        else if (ones!=0)
        {
            cout <<1<< " ";
            ones--;
        }
        if (twos==0&&ones==0)
            break;
    }
 
}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        Dalia();
    }


}
