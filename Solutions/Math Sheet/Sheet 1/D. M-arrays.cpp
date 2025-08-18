//وَمَن رامَ العُلا مِن غَيرِ كَدٍ
//أضاعَ العُمرَ في طَلَبِ المُحالِ
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

void Dalia()
{
int n,m;
    cin>>n>>m;
    vector<int>freq(m,0);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        freq[x%m]++;
    }
    int ans=0;
    if (freq[0]>0)ans++;
    for (int r=1;r<=m/2;r++) {
        if (r==m-r) {
            if (freq[r]>0)ans++;
        } else {
            int a=freq[r];
            int b=freq[m-r];
            if (a==0&&b==0) continue;

            ans++;
            int ex=abs(a-b)-1;
            if (ex>0)ans+=ex;
        }
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
