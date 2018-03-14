// Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

// For "(()", the longest valid parentheses substring is "()", which has length = 2.

// Another example is ")()())", where the longest valid parentheses substring is "()()", which has length = 4.


class Solution {
public:
    int longestValidParentheses(string s) {
        std::stack<int> stk;
        stk.push(-1);
        int lvp = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
                stk.push(i);
            else
            {
                stk.pop();
                if(stk.empty())
                    stk.push(i);
                else
                    lvp = max(lvp, i - stk.top());
            }
        }
        return lvp;
    }
};