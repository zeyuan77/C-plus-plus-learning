//#include<iostream>
//using namespace std;
////二分查找
//bool isGreen(int arr[], int mid, int target)
//{
//	return arr[mid] >= target;
//}
//int findMinGreenIndex(int arr[], int len, int target)
//{
//	int left = -1, right = len;
//	while (left + 1 < right)
//	{
//		int mid = left + (right - left) / 2;
//		if (isGreen(arr, mid, target))
//		{
//			right = mid;
//		}
//		else
//		{
//			left = mid;
//		}
//	}
//	return right;
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int index=findMinGreenIndex(a, 10, 3);
//	cout << a[index] << " " << index << endl;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
////选择排序 O(n**2)
//void selectSort(vector<int>& v)
//{
//	for (int i = 0; i < v.size() - 1; ++i)
//	{
//		int minindex = i;
//		for (int j = i + 1; j < v.size(); ++j)
//		{
//			if (v[j] < v[minindex])
//			{
//				minindex = j;
//			}
//		}
//		swap(v[i], v[minindex]);
//	}
//}
//int main()
//{ 
//	vector<int> v;
//	v = { 5,4,3,1,2 };
//	selectSort(v);
//	for (int i = 0; i < v.size(); ++i)
//	{
//		cout << v.at(i) << " ";
//	}
//	cout << endl;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
////冒泡排序 O(n**2)
//void bubbleSort(vector<int>& v)
//{
//	for (int i = 1; i < v.size(); ++i)
//	{
//		int flag = 1;
//		for (int j = 0; j < v.size() - i; ++j)
//		{
//			if (v[j] > v[j + 1])
//			{
//				swap(v[j], v[j + 1]);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;//若第一轮发现有序则提前退出循环
//		}
//	}
//}
//int main()
//{
//	vector<int> v;
//	v = { 1,4,5,6,7};
//	bubbleSort(v);
//	for (int i = 0; i < v.size(); ++i)
//	{
//		cout << v.at(i) << " ";
//	}
//	cout << endl;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
////插入排序O(n**2)
//void insertionSort(vector<int>& v)
//{
//	for (int i = 1; i < v.size() ;++i)
//	{
//		int key = v[i];
//		int j = i - 1;
//		while (j>=0&& v[j] > key)
//		{
//			v[j + 1] = v[j];
//			j--;
//		}
//		v[j + 1] = key;
//	}
//}
//int main()
//{
//	vector<int> v;
//	v = {1,2,3,4,5};
//	insertionSort(v);
//	for (int i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
////计数排序 时间复杂度O(n+m) 空间复杂度O(k)
//void countingSort(vector<int>& v, int m)
//{
//	//m为值域[0,1,2,3,...m]
//	int n = v.size();
//	int* count = new int[m + 1];
//	memset(count, 0, (size_t)sizeof(int) * (m + 1));//初始化计数数组
//	for (int i = 0; i < n; ++i)
//	{
//		count[v[i]]++;
//	}
//	int index = 0;
//	for (int j = 0; j <= m; j++)
//	{
//		while (count[j]-- > 0)
//		{
//			v[index++] = j;
//
//		}
//	}
//}
//int main()
//{
//	vector<int> v;
//	v = { 0,0,0,2,1,1,3,3,4,4 };
//	countingSort(v, 4);
//	for (int i = 0; i < v.size(); ++i)
//	{
//		cout << v.at(i) << " ";
//	}
//	return 0;
//}