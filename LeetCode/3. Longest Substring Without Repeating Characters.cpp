// Given a string, find the length of the longest substring without repeating characters.

// Examples:

// Given "abcabcbb", the answer is "abc", which the length is 3.

// Given "bbbbb", the answer is "b", with the length of 1.

// Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> HashTable(256, 0);
        int i = 0, j = 0, n = s.length();
        int res = 0;
        while(j < n)
        {
            i = max(HashTable[s[j]], i);
            HashTable[s[j]] = j + 1;
            res = max(res, j - i + 1);
            j++;
        }
        return res;
    }
};