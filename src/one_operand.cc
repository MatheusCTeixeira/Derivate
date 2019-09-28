#include "../include/one_operand.hpp"

namespace m_math
{
    one_operand::one_operand(function * op):m_op{op}
    {

    }

    void one_operand::set_operand(function * op)
    {
        this->m_op = op;
    }

    function * one_operand::operand() const
    {
        return this->m_op;
    }

    one_operand::~one_operand()
    {

    }
}