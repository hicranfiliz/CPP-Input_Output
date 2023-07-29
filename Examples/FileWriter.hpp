#ifndef FILEWRITER_HPP
#define FILEWRITER_HPP

#include "AnyWriter.hpp"
#include <fstream>

class FileWriter : public AnyWriter {
	public:
		FileWriter(const std::string& filename);
		
		  void putchar(char ch) const;
		
	private:
		std::ofstream file;
};

#endif 
