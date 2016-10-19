#include<iostream>
#include<cstdio>
using namespace std;
struct list
{
	int l,r;
	list *p,*q;
};
list *head=NULL;
void create()
{
	list *p=NULL;
	list *q=NULL;
	int l,r;
	p=new list;
	cin>>p->l>>p->r;
	if(head==NULL)
	{
		head=p;
		p->p=NULL;
		p->q=NULL;
	}
	else
	{
		q=head;
		while(q!=NULL)
		{
			if(p->r<q->l)
			{
				if(q==head)
				{
					head=p;
					p->p=NULL;
					p->q=q;
					q->p=p;
				}
				else
				{
					p->p=q->p;
					p->q=q;
					q->p->q=p;
					q->p=p;
				}
				break;
			}
			else if(p->l<q->l&&p->r>=q->l&&p->r<=q->r)
			{
				q->l=p->l;
				delete p;
				break;
			}
			else if(p->l<q->l&&p->r>q->r)
			{
				list *pp=p;
				q->l=p->l;
				q->r=p->r;
				p=q->q;
				delete pp;
				while(p!=NULL)
				{
					if(q->r<p->l)
					{
						p->p=q;
						q->q=p;
						break;
					}
					else if(q->r<=p->r)
					{
						q->r=p->r;
						if(p->q!=NULL)
							p->q->p=q;
						q->q=p->q;
						delete p;
						break;
					}	
					else
					{
						list *r=p;
						p=p->q;
						q->q=p;
						delete r;
					}
				}
				break;
			}
			else if(p->l>=q->l&&p->r<=q->r)
			{
				delete p;
				break;
			}
			else if(p->l>=q->l&&p->l<=q->r&&p->r>q->r&&q->q==NULL)
			{
				q->r=p->r;
				delete p;
				break;
			}
			else if(p->l>=q->l&&p->l<=q->r&&p->r>q->r&&q->q->l>p->r)
			{
				q->r=p->r;
				delete p;
				break;
			}
			else if(p->l>=q->l&&p->l<=q->r&&p->r>q->r&&q->q->l<=p->r)
			{
				list *pp=p;
				q->r=p->r;
				p=q->q;
				delete pp;
				while(p!=NULL)
				{
					if(q->r<p->l)
					{
						p->p=q;
						q->q=p;
						break;
					}
					else if(q->r<=p->r)
					{
						q->r=p->r;
						if(p->q!=NULL)
							p->q->p=q;
						q->q=p->q;
						delete p;
						break;
					}	
					else
					{
						list *r=p;
						p=p->q;
						q->q=p;
						delete r;
					}
				}
				break;
			}
			else if(p->l>q->r&&q->q==NULL)
			{
				p->p=q;
				p->q=q->q;
				q->q=p;
				break;
			}
			else
				q=q->q;
		}
	}
	return;
}
int cal()
{
	list *p=head;
	int c=0;
	while(p!=NULL)
	{
		c+=p->r-p->l+1;
		p=p->q;
	}
	return c;
}
int main()
{
	int l,m;
	int c=0;
	cin>>l>>m;
	for(int i=0;i<m;i++)
		create();
	c=l+1-cal();
	cout<<c<<endl;
	return 0;
}
