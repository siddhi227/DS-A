class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
      sort(nums.begin(),nums.end());
        int l=nums.size();
        for(int i=0;i<l-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                return nums[i];
            }
            i++;
        }
        return nums[l-1];
    }
};