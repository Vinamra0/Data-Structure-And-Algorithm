class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> sol;
       int l= nums.size();
        k=k%l;
        
        for(int i = l-k ; i<l ; i++){
            sol.push_back(nums[i]);
        }
        
        for(int i= 0 ; i< l-k ;i++){
            sol.push_back(nums[i]);
            
        }
        
        for(int i=0 ; i<sol.size(); i++){
            nums[i]= sol[i];
        }
    }
};