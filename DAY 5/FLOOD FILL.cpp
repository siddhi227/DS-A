class Solution {
public:
    void solve(vector<vector<int>>& image, int sr, int sc,int color, int newColor){
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size() || 
          image[sr][sc]!=color ) return;
       
        image[sr][sc]=newColor;
        solve(image,sr+1,sc,color,newColor);
        solve(image,sr,sc+1,color,newColor);
        solve(image,sr-1,sc,color,newColor);
        solve(image,sr,sc-1,color,newColor);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image,int sr, int sc, int newColor) {
        if(image[sr][sc]!=newColor)
        solve(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
};