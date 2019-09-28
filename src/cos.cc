#include  "../include/cos.hpp"

namespace m_math
{
    cos::cos(const function& op):cos{op.clone()}
    {

    }

    cos::cos(function * op):function{}, one_operand{op}
    {

    }

    function * cos::clone() const
    {
        return new cos{this->operand()->clone()};
    }

    std::string cos::derivate(std::string var) const
    {
        return std::string{"-sin("}+ this->operand()->to_string()+std::string{")*"}+this->operand()->derivate(var);
    }

    std::string cos::to_string() const
    {
        return std::string{"cos("}+this->operand()->to_string()+std::string{")"};
    }

    cos::~cos()
    {

    }
}