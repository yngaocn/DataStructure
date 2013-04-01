// DataStructure.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Sort.h"
using namespace std;

void PrintArray(int a[], int n)
{
	int i=0;
	for (i=0;i<n-1;++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[i]<<endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a[4]={0,3,1,2};
	Sort::HeapSort(a,3);
	PrintArray(a,4);
	system("pause");
	return 0;
}

