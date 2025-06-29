#include <iostream>
#include "huffman.hpp"
#include <sys/stat.h> // used for getting file size info

using namespace std;

long getFileSize(const string& filename) {
    struct stat stat_buf;
    stat(filename.c_str(), &stat_buf);
    return stat_buf.st_size;
}

int main(int argc, char* argv[]){
    //Expecting two command line arguments: input and output file
    if(argc != 3){
        cout << "Unable to detect Files";
		exit(1);
    }

    //create Huffman object and compress the input file
    huffman f(argv[1], argv[2]);
    f.compress();
    cout << "Compression successful" << endl;
    
    long original = getFileSize(argv[1]);
    long compressed = getFileSize(argv[2]);

    cout << "Original size: " << original << " bytes" << endl;
    cout << "Compressed size: " << compressed << " bytes" << endl;
    if (compressed < original) {
        cout << "Compression Ratio: " << (100.0 * compressed / original) << "%" << endl;
        cout << "Space Saved: " << (100.0 * (original - compressed) / original) << "%" << endl;
    } else {
        cout << "Warning: Compressed file is larger than original!" << endl;
    }
    return 0;
}