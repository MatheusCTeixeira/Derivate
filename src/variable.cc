#include "../include/variable.hpp"

namespace m_math
{
    variable::variable(std::string name):function{},m_var{name}
    {

    }

    function * variable::clone() const
    {
        return new variable{this->m_var};
    }

    std::string variable::derivate(std::string var) const
    {
        if (this->m_var.compare(var) == 0)
            return std::string{"1"};
        else
            return std::string{"0"};
    }

    std::string variable::to_string() const
    {
        return this->m_var;
    }

    variable::~variable()
    {

    }
}