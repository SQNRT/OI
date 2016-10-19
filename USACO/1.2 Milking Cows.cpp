/*
ID: fx.yoyo1
LANG: C++ 
TASK: milk2
*/
#include<iostream>
#include<cstdio>
using namespace std;
struct list
{
	long int l,r;
	list *p,*q;
};
list *head=NULL;
void create(list *p=NULL)
{
	list *q=NULL;
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
void cal()
{
	list *p=head;
	FILE *out=fopen("milk2.out","w");
	long int max1=0,max0=0;
	while(p!=NULL)
	{
		if(p->r-p->l>max1)
			max1=p->r-p->l;
		if(p->q!=NULL&&p->q->l-p->r>max0)
			max0=p->q->l-p->r;
		p=p->q;
	}
	fprintf(out,"%ld %ld\n",max1,max0);
	fclose(out);
	return;
}
int main()
{
	int n;
	FILE *in;
	in=fopen("milk2.in","r");
	fscanf(in,"%d",&n);
	for(int i=0;i<n;i++)
	{
		list *t=NULL;
		t=new list;
		fscanf(in,"%ld%ld",&t->l,&t->r);
		create(t);
	}
	cal();
	fclose(in);
	return 0;
}
