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

	// ʹ��ͨ���
	std::string path_ = path + "\\*.*";

	intptr_t handle = _findfirst(path_.c_str(), &file);
	if (handle == -1){
		cout << "_findfirst error" << endl;
	}

	do {
		// �ж�file�Ƿ���Ŀ¼�ļ�
		if (file.attrib & _A_SUBDIR){
			// �ж�file�Ƿ���.��..
			if ((strcmp(file.name, ".") != 0) && (strcmp(file.name, "..") != 0)){
				subdirs.push_back(path + "\\" + file.name);
			}
		}
		else{
			subfiles.push_back(path + "\\" + file.name);
		}
	} while (_findnext(handle, &file) == 0);

	// ��������
	_findclose(handle);
}

void listDirTest(){
	std::vector<std::string> subdirs;
	std::vector<std::string> subfiles;

	// Ҫ������Ŀ¼
	std::string path = "C:\\Users\\Administrator\\Desktop\\CSDN";

	// ����Ŀ¼
	listDir(path, subfiles, subdirs);

	// �ݹ������Ŀ¼
	for (size_t i = 0; i < subdirs.size(); ++i){
		listDir(subdirs[i], subfiles, subdirs);
	}

	// ��ӡĿ¼�µ��ļ�
	cout << "files: " << subfiles.size() << endl;
	for (size_t i = 0; i < subfiles.size(); ++i){
		cout << subfiles[i] << endl;
	}
	cout << endl;

	// ��ӡĿ¼�µ�Ŀ¼�ļ�
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