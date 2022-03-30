class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> newNums;
        for(int& i:nums){
            newNums.push_back(i*i);
        }
        sort(newNums.begin(), newNums.end());
        return newNums;
    }
};