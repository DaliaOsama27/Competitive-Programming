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
    long long n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n<<endl;
        return;
    }
    long long sum=n;
    for(int i=2;i<=k;i++){
        string s=to_string(sum);
        sort(s.begin(),s.end());
 
        sum=sum+((s[0]-'0')*(s[s.size()-1]-'0'));
        if(s[0]=='0') break;
    }
    cout<<sum<<endl;
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
