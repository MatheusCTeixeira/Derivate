#pragma once

#include "function.hpp"
#include "two_operands.hpp"

namespace m_math
{

class mul:public function, public two_operands
{
public:
    mul(const function& lop, const function& rop);

    function * clone() const override;
    std::string derivate(std::string var) const override;
    std::string to_string() const override;

    ~mul() = default;

protected:
    mul(function * lop, function * rop);

private:

};

}
