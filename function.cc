#include "function.h"

namespace m_math
{
    function::function(e_types type):m_type{type}
    {

    }

    void function::set_type(e_types type)
    {
        this->m_type = type;
    }

    e_types function::type() const
    {
        return this->m_type;
    }

    function::~function()
    {

    }

}