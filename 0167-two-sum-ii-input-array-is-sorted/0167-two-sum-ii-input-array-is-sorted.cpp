class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int>ans;
        // for(int i=0;i<numbers.size();i++){
        //     for(int j=i+1;j<numbers.size();j++){
        //         if(numbers[i]+numbers[j]==target){
        //             ans.push_back(i+1);
        //             ans.push_back(j+1);
        //             break;
        //         }
        //     }
        // }
        // return ans;
        vector<int>ans;
        int start=0;
        int end=numbers.size()-1;
        while(start<=end){
            int sum=numbers[start]+numbers[end];
            if(sum==target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                break;
            }
            else if(sum>target){
                end--;
            }
            else{
                start++;
            }

        }
        return ans;
        
    }
};