#ifndef UTIL_ENUMEXCEPTION_HPP_
#define UTIL_ENUMEXCEPTION_HPP_

#include "Exception.hpp"

namespace Util {

class EnumException : public Exception {
    public:
        EnumException(const char* errorMessage = "EnumException") : Exception(errorMessage) {}
        virtual ~EnumException() throw() {}
};

class EnumException_BadIntToEnumConversion : public EnumException {
    public:
        EnumException_BadIntToEnumConversion(const char* errorMessage) : EnumException(errorMessage) {}
        virtual ~EnumException_BadIntToEnumConversion() throw() {}
};

class EnumException_BadEnumToBool : public EnumException {
    public:
        EnumException_BadEnumToBool(const char* errorMessage) : EnumException(errorMessage) {}
        virtual ~EnumException_BadEnumToBool() throw() {}
};

} // namespace Util

#endif // UTIL_ENUMEXCEPTION_HPP_