#pragma once
class Node
{
private:
	short value;
	Node* head;
	Node* next;
public:
	Node();
	int getValue();
	void setValue(short x);
	Node* nextNode();
};

