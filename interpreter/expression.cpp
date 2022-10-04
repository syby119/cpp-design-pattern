#include <stack>
#include "expression.h"

ValueExpression::ValueExpression(char key): _key(key) { }

int ValueExpression::interpret(const std::map<char, int>& map) {
    return map.find(_key)->second;
}

SymbolExpression::SymbolExpression(Expression* left, Expression* right)
    : _left(left), _right(right) { }


AddExpression::AddExpression(Expression* left, Expression* right)
    : SymbolExpression(left, right) { }

int AddExpression::interpret(const std::map<char, int>& map) {
    return _left->interpret(map) + _right->interpret(map);
}

SubstractExpression::SubstractExpression(Expression* left, Expression* right)
    : SymbolExpression(left, right) { }

int SubstractExpression::interpret(const std::map<char, int>& map) {
    return _left->interpret(map) - _right->interpret(map);
}

Expression* analyse(const std::string& str) {
    std::stack<Expression*> stack;
    Expression* left = nullptr;
    Expression* right = nullptr;
    for (size_t i = 0; i < str.size(); ++i) {
        switch (str[i]) {
            case '+': 
                left = stack.top();
                right = new ValueExpression(str[++i]);
                stack.push(new AddExpression(left, right));
                break;
            case '-': 
                left = stack.top();
                right = new ValueExpression(str[++i]);
                stack.push(new SubstractExpression(left, right));
                break;
            case ' ':
                break;
            default: 
                stack.push(new ValueExpression(str[i]));
                break;
        }
    }

    return stack.top();
}