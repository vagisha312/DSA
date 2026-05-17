class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        int fr = 0;
        int fc = 0;

        // Check first column
        for(int i = 0; i < n; i++)
        {
            if(matrix[i][0] == 0)
                fc = 1;
        }

        // Check first row
        for(int j = 0; j < m; j++)
        {
            if(matrix[0][j] == 0)
                fr = 1;
        }

        // Mark rows and columns
        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set inner matrix zeroes
        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        // Set first row
        if(fr)
        {
            for(int j = 0; j < m; j++)
            {
                matrix[0][j] = 0;
            }
        }

        // Set first column
        if(fc)
        {
            for(int i = 0; i < n; i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};