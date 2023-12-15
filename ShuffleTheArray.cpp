class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffleArray;
        for(int i = 0; i < n; i++) {
            shuffleArray.push_back(nums[i]);
            shuffleArray.push_back(nums[n+i]);
        }
        return shuffleArray;
    }
};