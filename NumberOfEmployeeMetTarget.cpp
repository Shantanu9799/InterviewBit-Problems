class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt = 0;
        for(int it : hours) {
            if(target <= it) cnt++;
        }
        return cnt;
    }
};