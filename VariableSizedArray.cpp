#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> queryAnswer(vector<vector<int>> VariableLengthArray, vector<pair<int, int>> queries) {
    vector<int> ans;
    for(int i = 0; i < queries.size(); i++) {
        ans.push_back(VariableLengthArray[queries[i].first][queries[i].second+1]);
    }
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;
    
    // Arrays
    vector<vector<int>> VariableLengthArray;
    for(int i = 0; i < n; i++) {
        vector<int> singleArray;
        int k;
        cin >> k;
        singleArray.push_back(k);
        while(k--) {
            int n;
            cin >> n;
            singleArray.push_back(n);
        }
        VariableLengthArray.push_back(singleArray);
    } 
    
    // queires
    vector<pair<int, int>> queries;
    for(int idx = 0; idx < q; idx++) {
        int i, j;
        cin >> i >> j;
        queries.push_back({i, j});
    }
    
    // Query Answer
    vector<int> ans = queryAnswer(VariableLengthArray, queries);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}
