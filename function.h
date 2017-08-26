#include <string>

#ifndef _FUNCTION_
#define _FUNCTION_

namespace m_math
{
    class function
    {
    public:
        virtual function * clone() const = 0;
        virtual std::string derivate(std::string var) const = 0;
        virtual std::string to_string() const = 0;
        virtual ~function() = default;          
    };
}

#endif