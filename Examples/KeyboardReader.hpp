#ifndef KEYBOARDREADER_HPP
#define KEYBOARDREADER_HPP

#include "AnyReader.hpp"

class KeyboardReader : public AnyReader {
public:
     char getchar() const override;
};

#endif // KEYBOARDREADER_HPP

