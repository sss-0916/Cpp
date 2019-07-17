#include <iostream>
#include <string>
#include <vector>
#include <io.h>
#include <stdlib.h>

using std::cout;
using std::endl;

void listDir(const std::string& path, std::vector<std::string>& subfiles,
	std::vector<std::string>& subdirs){
	_finddata_t file;

	// 使用通配符
	std::string path_ = path + "\\*.*";

	intptr_t handle = _findfirst(path_.c_str(), &file);
	if (handle == -1){
		cout << "_findfirst error" << endl;
	}

	do {
		// 判断file是否是目录文件
		if (file.attrib & _A_SUBDIR){
			// 判断file是否是.或..
			if ((strcmp(file.name, ".") != 0) && (strcmp(file.name, "..") != 0)){
				subdirs.push_back(path + "\\" + file.name);
			}
		}
		else{
			subfiles.push_back(path + "\\" + file.name);
		}
	} while (_findnext(handle, &file) == 0);

	// 结束查找
	_findclose(handle);
}

void listDirTest(){
	std::vector<std::string> subdirs;
	std::vector<std::string> subfiles;

	// 要遍历的目录
	std::string path = "C:\\Users\\Administrator\\Desktop\\CSDN";

	// 遍历目录
	listDir(path, subfiles, subdirs);

	// 递归遍历子目录
	for (size_t i = 0; i < subdirs.size(); ++i){
		listDir(subdirs[i], subfiles, subdirs);
	}

	// 打印目录下的文件
	cout << "files: " << subfiles.size() << endl;
	for (size_t i = 0; i < subfiles.size(); ++i){
		cout << subfiles[i] << endl;
	}
	cout << endl;

	// 打印目录下的目录文件
	cout << "dirs: " << subdirs.size() << endl;
	for (size_t i = 0; i < subdirs.size(); ++i){
		cout << subdirs[i] << endl;
	}
}

int main(){

	listDirTest();
	
	system("pause");
	return 0;
}