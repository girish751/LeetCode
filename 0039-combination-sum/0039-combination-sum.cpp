class Solution {
    set<vector<int>>s;
    void combination(vector<int>& candidates,int i,  vector<vector<int>>&ans, vector<int>&temp,int target){
        
        if(target==0){
            if(s.find(temp)==s.end()){
            ans.push_back(temp);
            s.insert(temp);
            }
            return;
        }
        if(i==candidates.size() ||target<0){
            return;
        }
        //include single
        temp.push_back(candidates[i]);
        combination(candidates,i+1,ans,temp,target-candidates[i]);
        //include multi
        combination(candidates,i,ans,temp,target-candidates[i]);
        //exclude
        temp.pop_back();
        combination(candidates,i+1,ans,temp,target);



    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        combination(candidates,0,ans,temp,target);
        return ans;
    }
};