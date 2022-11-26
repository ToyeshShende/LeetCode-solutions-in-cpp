class Solution {
public:
    vector<int> twoSum(vector<int>& num1, int target) {
        int low=0;
        vector<int> v,num;
        int n1,n2;
        int high=num1.size()-1;
        num=num1;
        
        sort(num.begin(),num.end());
        
        
        while(low<high){
            if((num[low]+num[high])==target){
                n1=num[low];
                n2=num[high];
                break;
            }
            else if((num[low]+num[high])>target){
                high--;
            }
            else if((num[low]+num[high])<target){
                low++;
            }
        }
        for(int i=0;i<num1.size();i++){
            if(num1[i]==n1){
                v.push_back(i);
            }
            else if(num1[i]==n2){
                v.push_back(i);
            }
        }
        return v;
    }
};
