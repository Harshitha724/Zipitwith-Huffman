# Zipitwith-Huffman
Built a simple file compressor and decompressor in C++ using Huffman Coding. It takes a text file, compresses it using binary encoding, and brings it back to the original. Learned a lot about trees, heaps, and file handling while exploring how compression works.

# Huffman File Compression Tool (C++)

A simple command-line project to compress and decompress text files using **Huffman Coding** — a lossless compression technique. You input a `.txt` file, it compresses it into a `.bin` file, and then decompresses it back.

## Features
- Compresses and decompresses text files
- Uses Huffman Tree with Priority Queue (Min Heap)
- Shows original and compressed sizes + compression ratio
- Command-line based, no GUI
- Handles binary file I/O

## How to Run

Make sure you have `g++` installed. 
check by giving g++ --version on cmd promt

### Step 1: Compile
g++ encode.cpp huffman.cpp -o encoder
g++ decode.cpp huffman.cpp -o decoder
### step 2: Compress the file
./encoder input.txt output.bin
### step 3: Decompress the file
./decoder output.bin decoded.txt

## Sample Output
Original size: 200 bytes  
Compressed size: 65 bytes  
Compression Ratio: 32.5%
->decoded.txt will match input.txt

## Concepts used
- Huffman Tree (Binary Tree)
- Min Heap / Priority Queue
- File Handling (Text and Binary)
- Bit manipulation
- C++ Classes & Modular Code
- CLI-based tool

Base structure inspired by an open-source repo. 
I made modifications, added compression stats, learned deeply, and reshaped it to my own version.


