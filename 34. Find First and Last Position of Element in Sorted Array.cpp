34. Find First and Last Position of Element in Sorted Array




class Solution {
public:
    int solve(int low,int high,vector<int>&nums,int target){
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target==nums[mid]){
                ans=mid;
                break;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        //brute force approach
        // vector<int>v;
        // v.push_back(-1);
        // v.push_back(-1);
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target && v[0]>-1 ){
        //         v[1]=i;
        //     }
        //     else if(nums[i]==target){
        //         v[0]=i;
        //     }

        // }
        // if(v[0]>-1 && v[1]==-1){
        //     v[1]=v[0];
        // }
        // return v;
       
        //optimised
        
        int index=solve(0,nums.size()-1,nums,target);
        int l=index;
        int r=index;
       
      // it will run loop until we first and last occurence
       while(1){
        int left=solve(0,l-1,nums,target);  //find left occurence if any   

        int right=solve(r+1,nums.size()-1,nums,target); //find right occurence if any
        
        if(left==-1 && right==-1){
            break;
        }
        if(left !=-1){  // if found any left occrence other than index
            l=left;
        }
        if(right!=-1){   // if found any right occurence other than index
            r=right;
        }
       }
        // both above conditions doesn't get satiesfy then same start and end index print
        return {l,r};
    
        
        
    }
};
