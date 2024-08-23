class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        if (mat.size() * mat[0].size() != r * c) {
            return mat; 
        }

        vector<int> vec ;
        for (int i = 0; i < mat.size(); ++i) 
        {
            for (int j = 0; j < mat[i].size(); ++j) 
            {
                vec.push_back(mat[i][j]) ;
            }
        }
        vector<vector<int>> reshapedMatrix(r, vector<int>(c));
        int x = 0 ;
        for(int i =0 ; i < r; i++)
        {
            for(int j = 0; j < c ; j++)
            {
                reshapedMatrix[i][j] = vec[x] ;
                x++ ;
            }
        }

        return reshapedMatrix ;
    }
};