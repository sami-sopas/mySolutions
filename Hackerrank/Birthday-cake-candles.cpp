/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> candles) {
    
    int n = candles.size();
    
    sort(candles.begin(),candles.end());
    
    long max = candles.back();
    
    int ans = 0;
    
    for(int i = n - 1; i >= 0; i--)
    {
        if(max == candles[i]){
            ans++;
        }
        else{
            break;
        }
    }
    
    return ans;
}
