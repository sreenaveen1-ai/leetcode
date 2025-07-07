class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        int count;
        for(int i=0;i<nums.size();i++){
            if(count==0)
            ans=nums[i];
            if(nums[i]==ans)
            count+=1;
            else
            count-=1;

        }
        return ans;

    
    }
        
    
};