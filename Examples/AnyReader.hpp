#ifndef ANYREADER_HPP
#define ANYREADER_HPP

class AnyReader {
public:
    virtual char getchar() const = 0;
    virtual ~AnyReader() {} //destructor
};

#endif // ANYREADER_HPP

