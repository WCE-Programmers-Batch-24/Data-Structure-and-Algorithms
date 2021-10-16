// Traversing Or Printing The LinkedList
void printList(Node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<" -> ";
		p=p->link;
	}
}