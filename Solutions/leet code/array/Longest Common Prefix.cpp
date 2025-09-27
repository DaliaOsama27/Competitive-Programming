// عملت سورت علشان اشوف اكتر اتين مختلفين بعاد عن بعض من حيث الترتيب البجدى ومن هنا بدات اشوفهم 

class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n=s.size();
string ans="";
sort(s.begin(),s.end());
string first=s[0];
    string last=s[n-1];
    for(int i=0;i<min(first.size(),last.size());i++){
    if(first[i]!=last[i]) return ans;
    else
    ans+=first[i];
}
 return ans;    
    }
};
