#pragma once

#include "function.hpp"
#include "one_operand.hpp"

namespace m_math
{
class sin:public function, one_operand
{
public:
    sin(const function& op);

    function * clone() const override;
    std::string derivate(std::string var) const override;
    std::string to_string() const override;

    ~sin();

protected:
    sin(function * op);

private:

};

}