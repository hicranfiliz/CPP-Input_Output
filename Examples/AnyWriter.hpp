#ifndef ANYWRITER_HPP
#define ANYWRITER_HPP

class AnyWriter {
public:
    virtual void putchar(char ch) = 0;
    virtual ~AnyWriter() {} // destructor
};

#endif // ANYWRITER_HPP

