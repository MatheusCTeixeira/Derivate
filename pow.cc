#include "pow.h"

namespace m_math
{
    pow::pow(const function& lop, const function& rop):pow{lop.clone(), rop.clone()}
    {

    }

    pow::pow(function * lop, function * rop):function{e_types::pow}, two_operands{lop, rop}
    {

    }

    function * pow::clone() const
    {
        return new pow{this->left_operand()->clone(), this->right_operand()->clone()};
    }

    std::string pow::derivate(std::string var) const
    {        
        std::size_t sz;
        double value = std::stod(this->right_operand()->to_string(), &sz);
        return this->right_operand()->to_string()+std::string{"*"}+this->left_operand()->to_string()+std::string{"^"}+(sz>0?std::to_string(value-1):std::string{"("}+this->right_operand()->to_string()+std::string{"-1)"})+std::string{"*"}+this->left_operand()->derivate(var);
    } 

    std::string pow::to_string() const
    {
        return this->left_operand()->to_string()+std::string{"^"}+this->right_operand()->to_string();
    }
}