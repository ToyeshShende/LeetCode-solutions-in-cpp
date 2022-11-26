class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums3, vector<int>& nums2) {
        vector<double>nums1;
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
         for(int i=0;i<nums3.size();i++){
            nums1.push_back(nums3[i]);
        }
        sort(nums1.begin(),nums1.end());
        double ans=0;
        int n=nums1.size();
        
        if(n%2==0){
            return (nums1[n/2]+nums1[(n/2)-1])/2;
        }
        else{
            return nums1[n/2];
        }
    }
};
