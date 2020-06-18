class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        if (nums.size()<=1) return nums;
        int p=0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]%2==1){
                swap(nums[i],nums[p]);
                p++;
            }
        }
        return nums;

    }
};