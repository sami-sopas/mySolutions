/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {

    int p = 0;
    int n = 0;
    int z = 0;
    
    int size = arr.size();
    
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 0){
            z++;
        }
        
        if(arr[i] > 0){
            p++;
        }
        
        if(arr[i] < 0){
            n++;
        }
        
    }


    cout << setprecision(6) << static_cast<double>(p) / size << endl;
    cout << setprecision(6) << static_cast<double>(n) / size << endl;
    cout << setprecision(6) << static_cast<double>(z) / size << endl;


}
