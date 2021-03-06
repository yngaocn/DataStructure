#pragma once

class Sort
{
public:
	Sort(void);
	virtual ~Sort(void);

	///////////////////////////////////��������///////////////////////////////////////
	//ֱ�Ӳ�������
	//ƽ�����Ӷȣ�O(n2)
	//����Ӷȣ�O(n2)
	//���棺O(1)
	//�����ȶ�����
	static void StraightInsertSort(int a[], int n);
	
	//�۰��������
	//ƽ�����Ӷȣ�O(n2)
	//����Ӷȣ�O(n2)
	//���棺O(1)
	//�����ȶ�����
	static void BinInsertSort(int a[], int n);

	//ϣ������
	//ƽ�����Ӷȣ�O(nlogn)
	//����Ӷȣ�O(n^s),sΪ��ѡ����
	//���棺O(1)
	//�����ȶ�����

	///////////////////////////////////��������///////////////////////////////////////
	//ð�ݲ�������
	//ƽ�����Ӷȣ�O(n2)
	//����Ӷȣ�O(n2)
	//���棺O(1)
	//�����ȶ�����
	static void BubbleSort(int a[], int n);

	///////////////////////////////////ѡ������///////////////////////////////////////

	//������(ע�⣺����int a[5]�����0��Ԫ�ز��ã�����ʱ��HeapSort(a,4))
	//ƽ�����Ӷȣ�O(nlogn)
	//����Ӷȣ�O(nlogn)
	//���棺O(1)
	//���ڲ��ȶ�����
	static void HeapAdjust(int k[], int i, int n);
	static void HeapSort(int k[], int n);

	///////////////////////////////////�鲢����///////////////////////////////////////

	///////////////////////////////////��������///////////////////////////////////////

};
