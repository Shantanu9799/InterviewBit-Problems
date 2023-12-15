class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> decompressedList;
        for(int i = 0; i < nums.size(); i += 2) {
            int freq = nums[i], val = nums[i+1];
            while(freq--) {
                decompressedList.push_back(val);
            }
        }
        return decompressedList;
    }
};