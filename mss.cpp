// kadane algo --> aximum sum subarray
// leetcode
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,meh=0,msf=INT_MIN;
        for(i=0;i<nums.size();i++)
        {
            meh=meh+nums[i];
            if(meh<nums[i])
            {
                meh=nums[i];
            }
            if(msf<meh)
            {
                msf=meh;
            }
        }
     return msf;   
    }
};
