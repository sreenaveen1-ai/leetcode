class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int valcount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                 nums[valcount]=nums[i];
                 valcount++;
            }
        }
            return valcount;

    }

};