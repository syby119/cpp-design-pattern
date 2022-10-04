#pragma once

#include <map>
#include <memory>
#include <string>

class Expression {
public:
    virtual ~Expression() = default;

    virtual int interpret(const std::map<char, int>& map) = 0;
};

class ValueExpression: public Expression {
public:
    ValueExpression(char key);

    int interpret(const std::map<char, int>& map) override;
private:
    char _key;
};

class SymbolExpression: public Expression {
public:
    SymbolExpression(Expression* left, Expression* right);
protected:
    std::unique_ptr<Expression> _left;
    std::unique_ptr<Expression> _right;
};

class AddExpression: public SymbolExpression {
public:
    AddExpression(Expression* left, Expression* right);

    int interpret(const std::map<char, int>& map) override;
};

class SubstractExpression: public SymbolExpression {
public:
    SubstractExpression(Expression* left, Expression* right);

    int interpret(const std::map<char, int>& map) override;
};

Expression* analyse(const std::string& str);