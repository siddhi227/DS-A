map<int,int> ma;
    vector<int> ret;
    
    int n=matrix.size();
    int m=matrix[0].size();
    
    for(int i=0;i<n;i++) {
        int mint= INT_MAX;
        for(int j=0;j<m;j++) {
            
            mint = min(mint, matrix[i][j]);
        }
        ma[mint]++;
    }
    
    for(int i=0;i<m;i++) {
        
        int maxi = INT_MIN;  
        
        for(int j=0;j<n;j++) {
            
            maxi = max(maxi, matrix[j][i]);
        }
        if(ma[maxi]==1) {
            
            ret.push_back(maxi);
    }
        
}
    
    return ret;
}
};