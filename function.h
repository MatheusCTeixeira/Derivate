
#include "types.h"
#include <string>

#ifndef _FUNCTION_
#define _FUNCTION_

namespace m_math
{
    class function
    {
    public:

        function(e_types type);

        void set_type(e_types type);
        e_types type() const;

        virtual function * clone() const = 0;
        virtual std::string derivate(std::string var) const = 0;
        virtual std::string to_string() const = 0;

        virtual ~function();

    private:
        e_types m_type;
    };
}

#endif