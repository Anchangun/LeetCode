class Solution {
public:
    vector<string> generateParenthesis(int n) {
        std::vector<std::string> result;
        generate_parenthesis_helper(n, n, "", result);
        return result;
    }
private : 
    void generate_parenthesis_helper(int open, int close, std::string curr, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(curr);
        return;
    }
    
    if (open > 0) {
        generate_parenthesis_helper(open - 1, close, curr + '(', result);
    }
    
    if (close > open) {
        generate_parenthesis_helper(open, close - 1, curr + ')', result);
    }
}
};