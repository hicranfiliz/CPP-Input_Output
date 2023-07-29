#ifndef TERMINALWRITER_HPP
#define TERMINALWRITER_HPP

#include "AnyWriter.hpp"

class TerminalWriter : public AnyWriter {
public:
    void putchar(char ch) ;
};

#endif // TERMINALWRITER_HPP

