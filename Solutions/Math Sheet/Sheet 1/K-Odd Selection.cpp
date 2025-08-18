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
    int n,x;
    cin>>n>>x;
    int a[n+1];
    int ans=0,cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0)ans++;
        else cnt++;
    }
    if(cnt==0){
        cout<<"NO\n";
       return;
    }
    bool f=0;
    for(int i=1;i<=cnt&&i<=x;i+=2){
        if(x-i<=ans){
            f=1;
            break;
        }
    }
    cout<<(f?"YES":"NO")<<endl;
		
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
