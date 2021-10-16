// To insert a node at a praticular location in Linked List
void addafter(Node* &root , int n , int loc)
{
	Node *temp = new Node();
	temp->data = n;
	temp->link=NULL;
	if(loc==1)
	{
		temp->link=root;
		root = temp;
		return;
	}
	// Pointer Pointing to Required Node
	Node *p= root;
	// Pointer Pointing To Previous Node
	Node *q;
	while(loc>1)
	{
		q=p;
		p=p->link;
		loc--;
	}
	temp->link=p;
	q->link = temp;
}