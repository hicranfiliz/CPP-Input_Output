#ifndef ANYREADER_HPP
#define ANYREADER_HPP

class AnyReader {
public:
    virtual char getchar() = 0;
    virtual ~AnyReader() {} //destructor
};

#endif // ANYREADER_HPP

