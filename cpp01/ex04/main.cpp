include <iostream.h>
include <fstream.h>
include <string.h>

int main(int argc, char **argv){
    std::string     line;
    std::ifstream   infile;
    std::ofstream   outfile;

    if (argc != 4)
    {
        std::cout << "Invalid argument number" << std::endl;
        exit (0);
    }
    infile.open(argc[1]);
    if (!infile.is_open()) {
        std::cout << "Unable to open file" << std::endl;
    }
    else {
        
    }
    
}