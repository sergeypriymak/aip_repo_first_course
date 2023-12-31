#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& text) {
    std::stack<char> brackets;

    for (char c : text) {
        if (c == '(' || c == '{' || c == '[') {
            brackets.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (brackets.empty()) {
                return false;
            }
            
            char top = brackets.top();
            brackets.pop();
            
            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    
    return brackets.empty();
}

int main() {
    std::string text;
    std::getline(std::cin, text, '!');

    if (isBalanced(text)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
