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
    int n,x,y;
    cin>>n>>x>>y;
    int d=y-x;
    for(int i=1;i<=d;i++)
    {
        if (d%i!=0)
            continue;
        int temp=d/i+1;
        if (temp>n)
            continue;
        int t1=min((y-1)/i,n-1);
        int t2=y-t1*i;
        for(int j=0;j<n;j++)
        {
            cout<<t2+j*i<<" ";
        }
        cout <<endl;
        break;
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
