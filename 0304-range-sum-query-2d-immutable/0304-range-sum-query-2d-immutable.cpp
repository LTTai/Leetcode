class NumMatrix {
public:
    vector<vector<int>> prefix;

    NumMatrix(vector<vector<int>>& matrix) {
        int m = size(matrix);
        int n = size(matrix[0]);
        prefix = vector<vector<int>> (m, vector<int> (n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (j==0) prefix[i][j] = matrix[i][j];
                else prefix[i][j] = prefix[i][j - 1] + matrix[i][j];
            } 
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for (int i = row1; i <= row2; i++) {
            sum += prefix[i][col2] - (col1 < 1 ? 0 : prefix[i][col1 - 1]);
            }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */