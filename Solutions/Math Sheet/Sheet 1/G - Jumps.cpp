//وَمَن رامَ العُلا مِن غَيرِ كَدٍ
//أضاعَ العُمرَ في طَلَبِ المُحالِ
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void Dalia()
{
    int x;
    cin>>x;
    int n=1;
    while(true)
    {
        int sum = (n*(n+1))/2;
        if(sum==x)
        {
            cout<<n<<endl;
            break;
        }
        else if(sum>x){
            if(sum-x==1)
            {
                cout<<n+1<<endl;
                break;
            }
            else
            {
                cout<<n<<endl;
                break;
            }}
        n++;
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
