#include<fstream>
#include<string>
using namespace std;

int main(int argc, char* argv[]){
	fstream file;
	string line;
   	file.open(argv[1], fstream::out);	
	file << "I watched the movie Star Wars I.\nI watched the movie Star Trek." << endl;
   	return 0;
}
