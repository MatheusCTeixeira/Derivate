#include "mul.h"

namespace m_math
{
    mul::mul(const function& lop, const function& rop):mul{lop.clone(), rop.clone()}
    {

    }

    mul::mul(function * lop, function * rop):function{}, two_operands{lop, rop}
    {

    }

    function * mul::clone() const
    {
        return new mul{this->left_operand()->clone(), this->right_operand()->clone()};
    }

    std::string mul::derivate(std::string var) const
    {
        return std::string{"("}+this->left_operand()->derivate(var)+std::string{"*"}+this->right_operand()->to_string()+std::string{"+"}+this->left_operand()->to_string()+std::string{"*"}+this->right_operand()->derivate(var)+std::string{")"};
    }

    std::string mul::to_string() const
    {
        return this->left_operand()->to_string()+std::string{"*"}+this->right_operand()->to_string();
    }
    
}