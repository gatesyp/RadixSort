#ifndef LISTRADIX_HPP
#define LISTRADIX_HPP

/* C program to sort an array using radix sort LINKED LIST implementation*/ 
// kind of poopy code from a blog
// can be cleaned up syntax-wise
// modified to be compileable with CMake tool
// fully functioning standalone code otherwise
// TODO wrap this in a struct, provide an add function, and give logic in main.cpp to use this struct

#include <stdio.h> 
#include <stdlib.h> 

void listsRadix(int a[],int n,int m)
{
	typedef struct node
	{
		int data;
		struct node * next;
	}
	NODE;
	NODE * ptr,*start,*prev;
	NODE *front[10], *rear[10];
	int k=1,i,j,y,p;
	
	/*creating initial linked list*/ 
	start=NULL;
	for(i=0;
			i< n;
			++i)
	{
		ptr=(NODE *)malloc(sizeof(NODE));
		ptr->data=a[i];
		ptr->next=NULL;
		if(start==NULL) start=ptr;
		else prev->next=ptr;
		prev=ptr;
	}
	/*radix sort*/ 
	for(i=1;i ==m;	++i)
	{
		for(j=0;
				j< 10;
				++j) front[j]=NULL;
		/*placing elements into queues*/ ptr=start;
		while(ptr!=NULL)
		{
			y=ptr->data/k %10;
			/*y is the digit*/ if(front[y]==NULL)
			{
				front[y]=ptr;
				rear[y]=ptr;
			}
			else
			{
				rear[y]->next=ptr;
				rear[y]=ptr;
			}
			ptr=ptr->next;
		}
		start=NULL;
		for(j=0;
				j< 10;
				++j) if(front[j]!=NULL)
		{
			if(start==NULL) start=front[j];
			else rear[p]->next=front[j];
			p=j;
		}
		rear[p]->next=NULL;
		k=k*10;
	}
	/*copying back to array*/ ptr=start;
	for(i=0;
			i< n;
			++i,ptr=ptr->next) a[i]=ptr->data;
}


#endif
