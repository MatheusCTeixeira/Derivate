#include  "sec.h"

namespace m_math
{
    sec::sec(const function& op):sec{op.clone()}
    {

    }

    sec::sec(function * op):function{}, one_operand{op}
    {

    }

    function * sec::clone() const
    {
        return new sec{this->operand()->clone()};
    }

    std::string sec::derivate(std::string var) const
    {
        return std::string{"sec("}+ this->operand()->to_string()+std::string{")*tan("}+ this->operand()->to_string()+std::string{")*"}+this->operand()->derivate(var);
    }

    std::string sec::to_string() const
    {
        return std::string{"sec("}+this->operand()->to_string()+std::string{")"};
    }

    sec::~sec()
    {

    }
}