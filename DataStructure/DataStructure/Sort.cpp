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
		//�ݴ�a[i]
		temp=a[i];
		for (j=i; j>0&&temp<a[j-1]; --j)
		{
			a[j]=a[j-1];
		}
		//��λ��j����temp
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
		temp = data[i];             // ����������Ԫ��

		// ��data[low..high]���۰������������λ��
		while (low < high)
		{
			mid = (low + high) / 2; // �۰�
			if( temp < data[mid])
				high = mid-1;       // ������ڵͰ���
			else
				low = mid+1;        // ������ڸ߰���
		}

		//low����Ԫ�غ���
		for(j = i-1; j >= low; --j)
			data[j+1] = data[j];

		//���뵽lowλ��
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
	for(i = n/2; i >= 1; --i) //�ӵ�����һ����Ҷ�ӽ�㣬���¶��϶ѻ�
		HeapAdjust(a, i, n);
	for(i = n; i > 1; --i)
	{ //����A[1]�����Ԫ��A[i]��i=n, ..., 1��, �ٶѻ�
		temp = a[1];
		a[1] = a[i];
		a[i] = temp;
		HeapAdjust(a, 1, i-1);
	}
}