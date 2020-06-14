/*解法一 hash表*/
class Solution1 {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()) return nums[i];
            else mp[nums[i]]++;
        }
        return -1;
    }
};
/*解法二 使用集合*/
class Solution2 {
public:
    int findRepeatNumber(vector<int>& nums) {
        set<int> count;
        for(auto i:nums){
            if(count.count(i) == 1){
                return i;
            }else{
                count.insert(i);
            }
        }
        return 0;
    }
};
//解法三 索引位置取反，如果已经取反过了说明重复
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])]<0)
                return abs(nums[i]);
            else
                nums[abs(nums[i])]*=-1;
        };
        return find(nums.begin(),nums.end(),0)-nums.begin();
    }
};