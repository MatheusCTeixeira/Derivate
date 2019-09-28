#pragma once

#include "function.hpp"
#include "one_operand.hpp"

namespace m_math
{
class tan:public function, one_operand
{
public:
    tan(const function& op);

    function * clone() const override;
    std::string derivate(std::string var) const override;
    std::string to_string() const override;

    ~tan();

protected:
    tan(function * op);

private:

};

}