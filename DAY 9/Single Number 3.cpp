class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
      int l=nums.size();
        for(int i=0;i<l;i++)
        {
            int flag=0;
            for(int j=0;j<l;j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(nums[i]==nums[j])
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                return nums[i];
            }
        }
        return nums[l-1];
    }
};