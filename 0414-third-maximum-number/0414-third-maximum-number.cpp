class Solution {
public:
    int thirdMax(vector<int>& nums) {
          set<int> maxSet;
    for (int num : nums) {
        maxSet.insert(num);
        if (maxSet.size() > 3) {
            maxSet.erase(maxSet.begin()); 
        }
    }
    return (maxSet.size() == 3) ? *maxSet.begin() : *maxSet.rbegin();
        
    }
};