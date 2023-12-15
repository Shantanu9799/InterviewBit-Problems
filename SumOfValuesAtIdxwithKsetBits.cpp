class Solution {
public:

    int setBits(int i) {
        int cnt = 0;
        while(i) {
            cnt += (i & 1);
            i = i >> 1;
        }
        return cnt;
    }

    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(setBits(i) == k) sum += nums[i];
        }
        return sum;
    }
};