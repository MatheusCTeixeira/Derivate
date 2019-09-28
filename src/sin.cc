#include  "../include/sin.hpp"

namespace m_math
{
    sin::sin(const function& op):sin{op.clone()}
    {

    }

    sin::sin(function * op):function{}, one_operand{op}
    {

    }

    function * sin::clone() const
    {
        return new sin{this->operand()->clone()};
    }

    std::string sin::derivate(std::string var) const
    {
        return std::string{"cos("}+ this->operand()->to_string()+std::string{")*"}+this->operand()->derivate(var);
    }

    std::string sin::to_string() const
    {
        return std::string{"sin("}+this->operand()->to_string()+std::string{")"};
    }

    sin::~sin()
    {

    }
}