class Solution 
{
public:
    int missingNumber(vector<int>& nums)
     {
        int sum1 = 0;
        int arrSum = 0;
        int n = nums.size();
        sum1 = n*(n+1);
        sum1 = sum1/2;
        for(int i = 0; i < n; i++){
            arrSum = arrSum + nums[i];
        }
        return (sum1 == arrSum) ? 0 : (sum1 - arrSum);
    }
};