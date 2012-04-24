#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <string>
#include <map>
#include <vector>
using std::map;
using std::vector;
using std::string;

//this struct is to store a single BE
struct BasicelemNode {
    int num;
    string basicElem;
    int fatherNode;
};

//BEStruct is to store the BEs of a word
struct BEStruct {//BE stand for basic element
   bool judge; //this is for vitual word or soild word,true=soild & false=vitual
   string firstBE;
   std::vector<string> otherBE;
   std::map<string,string> relationBE;
   std::map<char,string> symbolBE;
};

//init_BEFile: to init the BEs in memory
//input:    fileName: the address of BE files
//             pBasicelemNode: the struct to store BEs
//output:   -1: open error
//              0: init success
int init_BEFile(const char *kp_filename_, BasicelemNode *p_baseicelemNode_);

//calculate_similarity: calculate the similary of 2 words
//input:    ben: BE tree
//              wordFileName: the filename of words table
//              input1: the word which wait to calculate
float calculate_similarity(BasicelemNode *p_ben_, const char *kp_wordFilename_, const string *kp_input1_, const string *kp_input2_);

#endif // MAIN_H_INCLUDED
