class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for(int i=0 ; i<image.size() ; i++ ){
            for(int j=0; j<(image[i].size()+1)/2 ; j++){
                int temp = image[i][j] ^1;
                image [i][j] = image[i][image[i].size()-j-1] ^1 ;
                image[i][image[i].size()-j-1] = temp;
            }
        }
        return image;
       
     
        
        
    }
};