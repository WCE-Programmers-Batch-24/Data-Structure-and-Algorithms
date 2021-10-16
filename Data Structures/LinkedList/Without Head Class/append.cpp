// To insert a node at the end of Linked List
void append(Node* &root, int n)
{
	Node *temp = new Node();
	// Another pointer for traversing
	Node *p = root;
	temp->data = n;
	temp->link=NULL;
	if(root==NULL)
	{
		root = temp;
		return;
	}
		while(p->link!=NULL)
		{
			p = p->link;
		}
		p->link=temp;
}