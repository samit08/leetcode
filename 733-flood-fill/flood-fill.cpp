class Solution {
    private:
    void dfs(int i,int j,vector<vector<int>>& image, int color,int icolour)
    { 
        int n=image.size();
        int m=image[0].size();
        if(i<0||j<0||i>=n||j>=m)return;
        if(image[i][j]!=icolour) return;
        image[i][j]=color;

        dfs(i+1,j,image,color,icolour);
        dfs(i-1,j,image,color,icolour);
        dfs(i,j+1,image,color,icolour);
        dfs(i,j-1,image,color,icolour);
        
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int icolour=image[sr][sc];
        if(icolour!=color)
        dfs(sr,sc,image,color,icolour);
        return image;
    }
};