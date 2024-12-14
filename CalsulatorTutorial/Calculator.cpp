#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return (y != 0) ? (x / y) : 0; // Проверка на деление на ноль
    default:
        return 0.0;
    }
}