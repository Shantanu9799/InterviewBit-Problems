class Solution {
public:

    int binarySearch(vector<int> arr, int target) {
        int s = 0, e = arr.size() - 1;
        while(s <= e) {
            int mid = s + (e-s)/2;
            if(arr[mid] >= target) e = mid-1;
            else s = mid + 1;
        }
        return s;
    }

    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> tmp = nums;
        sort(tmp.begin(), tmp.end());
        for(int i = 0; i < nums.size(); i++) {
            nums[i] = binarySearch(tmp, nums[i]);
        }
        return nums;
    }
};