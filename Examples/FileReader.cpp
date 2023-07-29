#include "FileReader.hpp"
//////////////////////// & kaldirdik
FileReader::FileReader(const std::string& filename) : file(filename),lastChar(0){}

char FileReader::getchar() {
	return lastChar = file.get();
}
