class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
      int n = nums.size();
      vector<int> leftSum;
      vector<int> rightSum;
      leftSum.push_back(0);
      rightSum.push_back(0);
      for(int i = 0; i < n-1; i++) {
          leftSum.push_back(leftSum[leftSum.size()-1] + nums[i]);
          rightSum.push_back(rightSum[rightSum.size()-1] + nums[n-i-1]);
      }
      reverse(rightSum.begin(), rightSum.end());
      for(int i = 0; i < n; i++) {
          nums[i] = abs(leftSum[i] - rightSum[i]);
      }
      return nums;  
    }
};