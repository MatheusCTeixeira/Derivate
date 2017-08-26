#include "div.h"

namespace m_math
{
    
    div::div(const function& lop, const function& rop):div{lop.clone(), rop.clone()}
    {

    }    
    
    div::div(function * lop, function * rop):function{} ,two_operands{lop, rop}
    {

    }

    function * div::clone() const
    {
        return new div{this->left_operand()->clone(), this->right_operand()->clone()};
    }

    std::string div::derivate(std::string var) const
    {
        return std::string{"("}+this->left_operand()->derivate(var)+std::string{"*"}+this->right_operand()->to_string()+std::string{"-"}+this->left_operand()->to_string()+std::string{"*"}+this->right_operand()->derivate(var)+std::string{"/("}+this->right_operand()->to_string()+std::string{")^2)"};
    }

    std::string div::to_string() const
    {
        return this->left_operand()->to_string()+std::string{"/"}+this->right_operand()->to_string();
    }
}