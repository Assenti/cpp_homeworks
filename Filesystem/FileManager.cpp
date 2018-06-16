#include "FileManager.h"

//void FileManager::initFileManager()
//{
//	enum Commands {
//		mkdir, echo, dir, del, rmdir, cd, search, copy, cut
//	};
//	std::string in_command;
//	std::cout << "Command options:/n0 - mkdir/n1 - echo/n2 - dir/n3 - del/n4 - rmdir/n";
//	std::cout << "5 - cd/n6 - search/n7 - copy/n8 - cut";
//	while (true)
//	{
//		int command;
//		std::cin >> command;
//		switch (command)
//		{
//		case 0:
//			std::string dir_name;
//			std::cin >> dir_name;
//			makeDirectory(dir_name);
//			break;
//		default:
//			break;
//		}
//	}
//}

FileManager::FileManager()
{
}


FileManager::~FileManager()
{
}

void FileManager::makeDirectory(std::string dir_name)
{
	std::string in_command = "mkdir " + dir_name;
	const char * command = in_command.c_str();
	system(command);
}

void FileManager::createFileWithRecord(std::string text_and_file_name)
{
	std::string in_command = "echo " + text_and_file_name;
	const char * command = in_command.c_str();
	system(command);
}

void FileManager::showAllFilesInCurrentDirectory()
{
	system("dir");
}

void FileManager::deleteFile(std::string file_name)
{
	std::string in_command = "del " + file_name;
	const char * command = in_command.c_str();
	system(command);
}

void FileManager::deleteDirectory(std::string dir_name)
{
	std::string in_command = "rmdir " + dir_name;
	const char * command = in_command.c_str();
	system(command);
}

void FileManager::goToDirectory(std::string path)
{
	std::string in_command = "cd " + path;
	const char * command = in_command.c_str();
	system(command);
}

void FileManager::searchFile(std::string file_name)
{
	std::string in_command = "dir /s " + file_name;
	const char * command = in_command.c_str();
	system(command);
}

void FileManager::copyFile(std::string file_name, std::string paste_path)
{
	std::string in_command = "copy " + file_name + " paste_path";
	const char * command = in_command.c_str();
	system(command);
}

void FileManager::cutFile(std::string file_name, std::string paste_path)
{
	std::string in_command = "move " + file_name + " paste_path";
	const char * command = in_command.c_str();
	system(command);
}
