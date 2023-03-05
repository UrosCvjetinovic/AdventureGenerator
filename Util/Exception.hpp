#ifndef UTIL_EXCEPTION_HPP_
#define UTIL_EXCEPTION_HPP_

#include <exception>

namespace Util {

class Exception : public std::exception {
    public:
        Exception(const char* errorMessage);
        Exception(const char* errorMessage, int errorNr);
        virtual ~Exception() throw() {}
        virtual const char* what() const throw();
        // virtual void printWhat(std::ostream& outStream = std::cout) const;
        virtual int getErrorNumber() const;

        // virtual std::ostream& show(std::ostream& outStream = std::cout) const;
    protected:
        const char* message;
        int errorNumber;
};

} // namespace Util

#endif // UTIL_EXCEPTION_HPP_