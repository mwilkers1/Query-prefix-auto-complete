/****************************
 * Matthew Wilkerson        *
 * CECS 503-50              *
 * Project 1                *
 ****************************/

//node.h

#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node //node used to hold data in trie tree structure
{
	friend class Trie;
private:
	char c;
	bool word; //true = marks end of word
	Node* child[128]; //points to next node; each pointer for each char in ASCII table (0-127)
public:
	Node();
	~Node() {}
	void setWord(int boo) {this->word = boo;} 
	bool isWord() {return this->word;}
	void setChar(char ch) {this->c = ch;}
	char getChar() const {return this->c;}
};

#endif