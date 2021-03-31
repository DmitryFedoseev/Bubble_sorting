#include <iostream>
using namespace std;

int main()
{
	const int n = 10;
	int arr[n], f;
	std::cout << "Enter number to fill the array" << endl;

	for (int i = 0; i < n; i++)									 //Заполнение массива
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	for (int i = 0; i < n - 1; i++)								 //Сортировка пузырьком
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				f = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = f;
			}
		}
	}

	for (int i = 0; i < n; i++)									 //Вывод массива
		cout << arr[i] << " ";

	cout << endl;
	
	return 0;
}