// Template_Temp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
template <class T>

void Bubble(T* array,int size)
{
	T temp;
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-i;j++)
		{
			if(*(array+j)>*(array+j+1))//½»»»
			{
                temp=*(array+j);
				*(array+j)=*(array+j+1);
				*(array+j+1)=temp;
			}
			
		}
	}
	for(int k=0;k<10;k++)
	{
		cout<<" "<<array[k] << endl; 
	}

	
}
int main(int argc, char* argv[])
{
	int a[10]={1,-2,3,-5,6,7,8,9,0,100};
	double array[10] = {1.1,2.2,3.3,6.5,7.8,11,9,-8.3,-9.5};
	Bubble(array,10);
	Bubble(a,10);
	return 0;
}

