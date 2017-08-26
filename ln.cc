#include "ln.h"

namespace m_math
{
    ln::ln(const function& op):ln{op.clone()}
    {

    }

    ln::ln(function * op):function{}, one_operand{op}
    {

    }

    function * ln::clone() const
    {
        return new ln{this->operand()->clone()};
    }

    std::string ln::derivate(std::string var) const
    {
        return std::string{"(1/"}+this->operand()->to_string()+std::string{")*"}+this->operand()->derivate(var);
    }

    std::string ln::to_string() const
    {
        return std::string{"ln("}+this->operand()->to_string()+std::string{")"};
    }

    ln::~ln()
    {
        
    }
}