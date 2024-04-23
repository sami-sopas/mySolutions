/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {

    int size = arr.size();
    
    sort(arr.begin(),arr.end());
        
    long long min = 0;
    long long max = 0;
    
    for(int i = 0; i < size - 1; i++){
        min+= arr[i];
    }
    
    for(int i = 1; i < size ; i++){
        max+= arr[i];
    }
    
    cout << min << " " << max; 
    
    
}
