#include "KeyboardReader.hpp"
#include "TerminalWriter.hpp"
#include <cstdio>
#include <iostream>
#include <string>
#include "FileReader.hpp"
#include "FileWriter.hpp"
using namespace std;

bool copy(const AnyReader& reader, AnyWriter& writer){
	string input;
	char ch = reader.getchar();
	while(ch != EOF){
		input += ch;
		writer.putchar(ch);
		ch = reader.getchar();
		
		if(input == "exit"){
			break;
		}
	}
	return true;
}

int main(){
	KeyboardReader klavyeOkuyucu;
	TerminalWriter terminalYazici;
	cout << "before copy\n";
	copy(klavyeOkuyucu,terminalYazici);
	cout << "after copy: \n";
	
	string inputFilename,outputFilename;
	//cout << "Enter the input file: ";
	//cin >> inputFilename;
	//cout << "Enter the output file: ";
	//cin >> outputFilename;
	inputFilename = "inputfile.txt";
	cout << "Input file name: " << inputFilename << endl;
	outputFilename = "outputfile.txt";
	cout << "Output file name: " << outputFilename << endl;
	FileReader fileReader(inputFilename);
	FileWriter fileWriter(outputFilename);
	
	if(copy(fileReader,fileWriter)){
		cout << "Copy successful.\n";
	}else{
		cout << "Copy failed!\n";
	}
	//copy(fileReader,fileWriter);
	
	return 0;
}
