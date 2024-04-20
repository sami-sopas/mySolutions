/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    
    int l = 0,r = 0;
    
    int n = arr.size();
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(i == j){
                l+=arr[i][j];
            }
            if(i + j == n -1 ){
                r+=arr[i][j];
            }
        }
    }
    
    
    return abs(l - r);
    
}
