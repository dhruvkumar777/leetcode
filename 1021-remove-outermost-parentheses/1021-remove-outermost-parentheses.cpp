class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = ""; // Initialize the result string
        int balance = 0; // Keep track of the balance of parentheses
        
        for (char c : s) {
            if (c == '(') {
                if (balance > 0) {
                    result += c; // Add '(' to the result if it's not the outermost '('
                }
                balance++; // Increase the balance for open parenthesis
            } else if (c == ')') {
                balance--; // Decrease the balance for close parenthesis
                
                if (balance > 0) {
                    result += c; // Add ')' to the result if it's not the outermost ')'
                }
            }
        }
        
        return result;
    }
};
