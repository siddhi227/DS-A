vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        vector<int> v;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> m;
        
        for(int i=0;i<mat.size();i++)
        {
            int c=count(mat[i].begin(),mat[i].end(),1);
            m.push({c,i});
        }
        
        for(int i=0;i<k;i++)
        {
            v.push_back(m.top().second);
            m.pop();
        }
        
        return v;
    }