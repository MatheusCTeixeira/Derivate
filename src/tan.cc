#include  "../include/tan.hpp"

namespace m_math
{
    tan::tan(const function& op):tan{op.clone()}
    {

    }

    tan::tan(function * op):function{}, one_operand{op}
    {

    }

    function * tan::clone() const
    {
        return new tan{this->operand()->clone()};
    }

    std::string tan::derivate(std::string var) const
    {
        return std::string{"(sec("}+ this->operand()->to_string()+std::string{"))^2*"}+this->operand()->derivate(var);
    }

    std::string tan::to_string() const
    {
        return std::string{"tan("}+this->operand()->to_string()+std::string{")"};
    }

    tan::~tan()
    {

    }
}