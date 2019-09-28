#pragma once

#include "function.hpp"
#include "one_operand.hpp"

namespace m_math
{

class cos:public function, one_operand
{
public:
    cos(const function& op);

    function * clone() const override;
    std::string derivate(std::string var) const override;
    std::string to_string() const override;

    ~cos();

protected:
    cos(function * op);

private:

};

}