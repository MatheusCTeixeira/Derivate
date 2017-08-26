#include "exp.h"

namespace m_math
{
    exp::exp(const function& op):exp{op.clone()}
    {

    }

    exp::exp(function * op):function{}, one_operand{op}
    {

    }

    function * exp::clone() const
    {
        return new exp{this->operand()->clone()};
    }

    std::string exp::derivate(std::string var) const
    {
        return std::string{"e^("}+this->operand()->to_string()+std::string{")*"}+this->operand()->derivate(var);
    }

    std::string exp::to_string() const
    {
        return std::string{"e^"}+this->operand()->to_string();
    }

    exp::~exp()
    {

    }
}