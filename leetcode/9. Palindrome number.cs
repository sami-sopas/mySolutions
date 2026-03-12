public static class Solution
{
    // The method must also be static to be called directly
    public static bool IsPalindrome(int x)
    {
        string input = x.ToString();
		int l = 0;
		int r = input.Length - 1;
		
		for(int i = 0; i < r; i ++){
			if(input[l] == input[r]) {
				l++;
				r--;
			}else {
				return false;
			}

		}
		

		return true;
		
    }
}