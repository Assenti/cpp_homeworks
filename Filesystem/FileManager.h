#pragma once
#include <string>
#include <iostream>
class FileManager
{
	
public:
	void makeDirectory(std::string);
	void createFileWithRecord(std::string);
	void showAllFilesInCurrentDirectory();
	void deleteFile(std::string);
	void deleteDirectory(std::string);
	void goToDirectory(std::string);
	void searchFile(std::string);
	void copyFile(std::string file_name, std::string paste_path);
	void cutFile(std::string file_name, std::string paste_path);
	//void initFileManager();
	FileManager();
	~FileManager();
};

