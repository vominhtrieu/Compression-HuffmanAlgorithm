#include "MinHeap.h"
#include <unordered_map>

#define CodeBook vector<Word>

struct Word
{
	char key;
	string bits;
};

Node* CreateNode(char data, int freq);
bool IsLeaf(Node* node);
Node* BuildHuffmanTree(vector<Node*>& datas);
void DeleteTree(Node* root);
void BuildCodeBook(Node* root, vector<string>& codeBook, string cur = "");
void PrintCodeBook(CodeBook& dict);
bool Traverse(Node* dict, string& s, char& c, int index = 0);
void PrintTree(Node* node);