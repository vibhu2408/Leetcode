class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        //Time Complexity O(n)
        //Space Complexity O(n)
        vector<int> ans;
        for(auto& a: nums) {
            if(a < pivot)
                ans.push_back(a);
        }
        for(auto& a: nums) {
            if(a == pivot)
                ans.push_back(a);
        }
        for(auto& a: nums) {
            if(a > pivot)
                ans.push_back(a);
        }
        return ans;
    }
};
