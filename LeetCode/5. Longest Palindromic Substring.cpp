// Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

// Example:

// Input: "babad"

// Output: "bab"

// Note: "aba" is also a valid answer.
 

// Example:

// Input: "cbbd"

// Output: "bb"
 


class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxlen = 0, start = 0;
        for(int i = 0, j = 0; i < n; i++)
        {
            int len = 1;
            for(j = 1; i - j >= 0 && i + j < n; j++)
            {
                if(s[i - j] == s[i + j])
                    len += 2;
                else
                    break;
            }
            if(len > maxlen)
            {
                start = i - j + 1;
                maxlen = len;
            }
            len = 1;
            for(j = 1; i - j + 1 >= 0 && i + j < n; j++)
            {
                if(s[i - j + 1] == s[i + j])
                    len += 2;
                else
                    break;
            }
            if(len > maxlen)
            {
                start = i - j + 1 + 1;
                maxlen = len - 1;
            }
        }
        return s.substr(start, maxlen);
    }
};