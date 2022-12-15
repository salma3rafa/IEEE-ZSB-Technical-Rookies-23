#include<iostream>
#include<list>
using namespace std;
struct node {
	int data;
	node* next;
	node(int x) :  data(x), next(NULL) {}
};
class Solution {
public:
	node* mergeTwoLists(node* l1, node* l2) {
		node dummy(0);
		node* tmp = &dummy;

		while (l1 && l2)
		{
			if (l1->data <= l2->data)
			{
				tmp->next = l1;
				l1 = l1->next;
			}
			else
			{
				tmp->next = l2;
				l2 = l2->next;
			}
			tmp = tmp->next;
		}
		tmp->next = (l1 ? l1 : l2);
		return dummy.next;
	}
};
class Solution {
public:
    node* mergeTwoLists(node* l1, node* l2) {
       
        if(!l1||!l2) return l1?l1:l2;        
        if(l1->data<=l2->data)
        {
             l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }           
        else
        {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        } 
    }
};