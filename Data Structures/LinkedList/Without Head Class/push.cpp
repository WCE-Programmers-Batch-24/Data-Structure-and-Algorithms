// To insert a node at beginning
void push(Node* &root,int n)
{
	// New Node
	Node *temp = new Node();
	temp->data = n;
	temp->link=root;
	root=temp;
}