#ifndef FILEREADER_HPP
#define FILEREADER_HPP

#include "AnyReader.hpp"
#include <fstream>

class FileReader : public AnyReader {
	public:
		FileReader(const std::string& filename);
		
		  char getchar() const override ; 
		
	private:
		std::ifstream file;
		char lastChar;
		
};

#endif 
