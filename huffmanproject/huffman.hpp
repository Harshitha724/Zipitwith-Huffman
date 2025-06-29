#ifndef HUFFMAN_HPP
#define HUFFMAN_HPP

#include <string>
#include <vector>
#include <queue>
#include <fstream>
using namespace std;

//structure representing a node in huffman tree
struct Node {
    char data;
    unsigned freq;
    string code;      //Huffman code for the char
    Node *left, *right;
    Node(){
        left = right = NULL;}};

class huffman{
    private:
        vector <Node*> arr;     //stores all nodes with freq
        fstream inFile, outFile;
        string inFileName, outFileName;
        Node *root;

        //custom comparator for the min-heap(priority queue)
        class Compare{
            public:
                bool operator() (Node* l, Node* r){
                    return l->freq > r->freq;  //Min-heap based on freq
                }
            };

        //store nodes while building the tree
        priority_queue <Node*, vector<Node*>, Compare> minHeap;

        //function to create the initial array of char freq
        void createArr();

        //recursively generate huffman code by traversing the tree
        void traverse(Node*, string);

        int binToDec(string); //for file decoding 
        string decToBin(int); //for file encoding

        void buildTree(char, string&);
        void createMinHeap();
        void createTree();
        void createCodes();
        void saveEncodedFile();
        void saveDecodedFile();
        void getTree();

    public:
        //initialize input/output filenames and build frq arrays
        huffman(string inFileName, string outFileName){
            this->inFileName = inFileName;
            this->outFileName = outFileName;
            createArr();
        }

        void compress();    //compress using huffman encoding
        void decompress();  //decompress the encoded file
    };
#endif