// To delete a particular node
void deletekey(Node* &root , int n)
{
	if(root==NULL)
	return;
	
	Node *p = root;
	if(p->data == n)
	{
		root = p->link;
		p->link = NULL;
		free(p);
		return;
	}
	Node *q;
	while(p->data!=n)
	{
		q=p;
		p=p->link;
	}
	q->link = p->link;
	p->link=NULL;
	free(p);
	return;
}