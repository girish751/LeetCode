class Solution {
public:
void nextPermutation(vector<int>& nums) {
    int i = nums.size() - 1, k = i, tmp;
    while (i > 0 && nums[i-1] >= nums[i])
        i--;
    for (int j=i; j<k; j++, k--)
        tmp = nums[j], nums[j] = nums[k], nums[k] = tmp;
    if (i > 0) {
        k = i--;
        while (nums[k] <= nums[i])
            k++;
        tmp = nums[i], nums[i] = nums[k], nums[k] = tmp;
    }
}