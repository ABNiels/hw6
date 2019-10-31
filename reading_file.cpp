#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char* argv[]){
	fstream file;
	string line;
   	file.open(argv[1], fstream::in);	
	while (getline(file, line)) {
		cout << line << endl;	
	}
   	return 0;
}
