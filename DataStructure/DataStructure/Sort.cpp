#include "StdAfx.h"
#include "Sort.h"

Sort::Sort(void)
{
}

Sort::~Sort(void)
{
}


void Sort::StraightInsertSort(int a[], int n)
{
	int i, j, temp;
	for (i=1; i<n; ++i)
	{
		//暂存a[i]
		temp=a[i];
		for (j=i; j>0&&temp<a[j-1]; --j)
		{
			a[j]=a[j-1];
		}
		//在位置j插入temp
		a[j]=temp;
	}
}

void Sort::BinInsertSort(int data[], int n)
{
	int temp;
	int i, j, mid, low, high;
	for (i = 1; i < n; i++)
	{
		low = 0;
		high = i;
		temp = data[i];             // 保存待插入的元素

		// 在data[low..high]中折半查找有序插入的位置
		while (low < high)
		{
			mid = (low + high) / 2; // 折半
			if( temp < data[mid])
				high = mid-1;       // 插入点在低半区
			else
				low = mid+1;        // 插入点在高半区
		}

		//low向后的元素后移
		for(j = i-1; j >= low; --j)
			data[j+1] = data[j];

		//插入到low位置
		data[low] = temp;
	}
}

void Sort::BubbleSort (int a[], int n) 
{
	int temp; 
	for (int i=0;i<n-1;++i)
	{
		for (int j=0;j<n-i-1;++j)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void Sort::HeapAdjust(int a[], int k, int m)
{
	int temp = a[k];
	for (int j = 2*k; j <= m; j *= 2)
	{
		if(j < m && (a[j] < a[j+1]))
			++j;
		if(temp>=a[j])
			break;
		a[k]=a[j];
		k=j;
	}

	a[k]=temp;
}

void Sort::HeapSort(int a[], int n)
{
	int i,temp;
	for(i = n/2; i >= 1; --i) //从倒数第一个非叶子结点，自下而上堆化
		HeapAdjust(a, i, n);
	for(i = n; i > 1; --i)
	{ //交换A[1]与最后元素A[i]（i=n, ..., 1）, 再堆化
		temp = a[1];
		a[1] = a[i];
		a[i] = temp;
		HeapAdjust(a, 1, i-1);
	}
}