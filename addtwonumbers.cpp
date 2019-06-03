#include<iostream>
using namespace std;


struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL){}
};


ListNode* addTwoNumbers(ListNode *l1, ListNode *l2)
{
	ListNode *result = new ListNode(-1);
	ListNode *curr = result;
	int carry = 0;
	while(l1 || l2)
	{
		int x = (l1 != NULL) ? l1->val : 0;
		int y = (l2 != NULL) ? l2->val : 0;
		int sum = x + y + carry;
		carry = sum / 10;
		ListNode * onenode = new ListNode(sum%10);
		curr->next = onenode;
		curr = onenode;
		if(l1)
			l1 = l1->next;
		if(l2)
			l2 = l2->next;
	}
	if(carry)
	{
		ListNode *tail = new ListNode(1);
		curr->next = tail;
	}
	return result->next;
}