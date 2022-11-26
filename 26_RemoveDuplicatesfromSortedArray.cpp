class Solution {
public:
    //solution using set
    int removeDuplicates(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        nums.clear();
       
        for(auto x:s){
            nums.push_back(x);
        }

        return s.size();
        
    }
};
