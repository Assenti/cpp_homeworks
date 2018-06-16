#include <iostream>
#include <string>
#include "FileManager.h"


int main()
{
	FileManager fm;
	// cd - notice: not works in this app
	std::string path = "c:\\";
	fm.goToDirectory(path);

	// mkdir
	std::string dir_name = "temp";
	fm.makeDirectory(dir_name);

	// rmdir
	std::string dir_name = "temp";
	fm.deleteDirectory(dir_name);

	// echo ... > *.txt
	std::string text_and_file_name = "text > file.txt";
	fm.createFileWithRecord(text_and_file_name);

	// copy file
	std::string file_name = "file.txt";
	std::string path = ".\temp";
	fm.copyFile(file_name, path);

	// move file
	std::string file_name = "file.txt";
	std::string path = ".\temp";
	fm.cutFile(file_name, path);
	
	// del file
	std::string file_name = "file.txt";
	fm.deleteFile(file_name);

	//search file
	std::string file_name = "file.txt";
	fm.searchFile(file_name);

	std::cin.get();
	return 0;
}