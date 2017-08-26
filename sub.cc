#include "sub.h"

namespace m_math
{
    sub::sub(const function& lop, const function& rop):sub{lop.clone(), rop.clone()}
    {

    }

    sub::sub(function * lop, function * rop):function{}, two_operands{lop, rop}
    {

    }

    function * sub::clone() const
    {
        return new sub{this->left_operand()->clone(), this->right_operand()->clone()};
    }

    std::string sub::derivate(std::string var) const
    {
        return std::string{"("}+this->left_operand()->derivate(var)+std::string{"-"}+this->right_operand()->derivate(var)+std::string{")"};
    }

    std::string sub::to_string() const
    {
        return std::string{"("}+this->left_operand()->to_string()+std::string{"-"}+this->right_operand()->to_string()+std::string{")"};
    }
}