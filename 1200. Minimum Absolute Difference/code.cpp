class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());

        int minDiff = INT_MAX;
        for(int i = 1; i < arr.size(); i++) {
            int diff = arr[i] - arr[i - 1];

            if(minDiff > diff) {
                minDiff = diff;
                res.clear();
            } 
            
            if(diff == minDiff) {
                res.push_back(vector<int> {
                    arr[i - 1], arr[i]
                });
            }
        }

        return res;
    }
};