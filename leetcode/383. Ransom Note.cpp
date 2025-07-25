/*
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
 

Constraints:

1 <= ransomNote.length, magazine.length <= 105
ransomNote and magazine consist of lowercase English letters.

*/

class Solution {
public:
    bool canConstruct(string ran, string mag) {
        sort(ran.begin(), ran.end());
        sort(mag.begin(), mag.end());
        int i = 0;
        int j = 0;
        int count = 0;
        while(j < mag.size()) {
            if(ran[i] == mag[j]) {
                count++;
                i++;
                j++;
            }
            else j++;
        }
        return count == ran.size();
    }
};
