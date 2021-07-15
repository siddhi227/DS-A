class Solution
 {
public:
    int toBin(int n)
{
    int count=0;
    while(n>0){
        count++;
        n=n&(n-1);
    }

    return count;
}
    
    vector<int> countBits(int n) 
    {
        
        vector<int> ans(n+1);
        for(int i=0;i<n+1;i++){
            ans[i]=toBin(i);
        }
        
        return ans;
        
    }
};