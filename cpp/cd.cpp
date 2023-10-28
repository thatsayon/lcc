#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

using namespace std; 
int main(int argc, char* argv[]){
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_string>" << std::endl;
        return 1;
    }
    string input = argv[1];
    const char* dname = input.c_str();
    mkdir(dname, 0777);
}
