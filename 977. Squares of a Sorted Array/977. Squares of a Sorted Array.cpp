class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        vector<int> res(size);

        int start = 0, end = size - 1, i = size - 1;

        while(start <= end) {
            if(abs(nums[start]) >= abs(nums[end])) {
                res[i--] = nums[start] * nums[start];
                start++;
            } else {
                res[i--] = nums[end] * nums[end];
                end--;
            }
        }

        return res;
    }
};