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
  if(n&1)
  {
      cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
  }
    else if(n%4==0)
    {
        cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
    }
    else
    {
        cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
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
