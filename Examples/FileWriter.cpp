#include "FileWriter.hpp"

FileWriter::FileWriter(const std::string& filename): file(filename){}

void FileWriter::putchar(char ch){
	file.put(ch);
}
