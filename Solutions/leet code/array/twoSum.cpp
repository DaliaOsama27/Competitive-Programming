// time n^2
class Solution {
public:

    vector<int> twoSum(vector<int>& num, int t) {
    
      
        for(int i=0;i<num.size();i++){
            for(int j=i+1;j<num.size();j++){
                if(num[j]==t-num[i])
                return {i,j};

            }
           

        }
        return {};
        
    }
};
// time n
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> m;
       for(int i=0;i<nums.size();i++){
        int com=target-nums[i];
        if(m.find(com)!=m.end()){
            return{m[com],i};
        }
        m [nums[i]] = i;
       }
     return {};
    }
};
