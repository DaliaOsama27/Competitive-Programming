class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int x=n+m;
        vector<int> arr(x);
        for(int i=0;i<n;i++){
            arr[i]=nums1[i];
        }
        for(int i=0;i<m;i++){
            arr[i+n]=nums2[i];
        }
        sort(arr.begin(),arr.end());
        if(x&1){
            return arr[x/2];
        }else{
            double s=(arr[x/2]+arr[(x/2)-1])/2.0;
            return s;
            }
        }


        
    
};
