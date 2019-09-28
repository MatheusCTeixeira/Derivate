#pragma once

#include "function.hpp"
#include "two_operands.hpp"

namespace m_math
{

class div:public function, public two_operands
{
public:
    div(const function& lop, const function& rop);

    function * clone() const override;
    std::string derivate(std::string var) const override;
    std::string to_string() const override;

    ~div() = default;

protected:
    div(function * lop, function * rop);
private:

};

}
