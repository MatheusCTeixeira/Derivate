#pragma once

#include "function.hpp"
#include "one_operand.hpp"

namespace m_math
{
class exp:public function, public one_operand
{
public:
    exp(const function& op);

    function * clone() const override;
    std::string derivate(std::string var) const override;
    std::string to_string() const override;

    ~exp();

protected:
    exp(function * op);

private:
};
}
