class Solution {
public:
    int maxArea(vector<int>& he) {
     int n = he.size();
        int maxi = INT_MIN;
        int st = 0; 
        int en = n -1;

        while(st <= en)
        {
            int width = en - st;
            int ht = min(he[st], he[en]);
            int area = width * ht;
            maxi = max(maxi, area);

            he[st] > he[en] ? en-- : st++;
        }

        return maxi;
        
    }
};
