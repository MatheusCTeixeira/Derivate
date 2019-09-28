#pragma once

#include "function.hpp"
#include "two_operands.hpp"

#include <stdexcept>

namespace m_math
{
class pow:public function, public two_operands
{
public:
    pow(const function& lop, const function& rop);

    function * clone() const override;
    std::string derivate(std::string var) const override;
    std::string to_string() const override;

    ~pow()=default;

protected:
    pow(function * lop, function * rop);

private:

};
}
