#include <iostream>


using namespace std;

struct Node
{
	int data; //????????? ?????
	Node* adressNext; //????? ?????????? ?????? ?? ????????
};
int main()
{
	Node* head;
	Node* newItem;
	head = new Node;
	head->data = 1;
	head->adressNext = nullptr;
	newItem = new Node;
	newItem->data = 2;
	newItem->adressNext=nullptr;
	head->adressNext = newItem;
	newItem = new Node;
	newItem->data = 3;
	newItem->adressNext = nullptr;
	head->adressNext->adressNext = newItem;
	newItem = new Node;
	newItem->data = 4;
	newItem->adressNext = nullptr;
	head->adressNext->adressNext->adressNext = newItem;
	Node* current = head;
	while (current->adressNext!=nullptr)
	{
		cout << current->data<<endl;
		current = current->adressNext;
	}






}


