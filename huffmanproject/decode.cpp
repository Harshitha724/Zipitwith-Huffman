#include <iostream>
#include "huffman.hpp"

using namespace std;

int main(int argc, char* argv[]){
    if(argc != 3){
        cout << "Unable to detect Files";
		exit(1);}

    //create huffman object and decompress the encded file
    huffman f(argv[1], argv[2]);
    f.decompress();
    cout << "Decompression successful" << endl;
    return 0;}