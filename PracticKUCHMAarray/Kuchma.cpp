//Шаблон проэкта С++
#include <iostream>
 template<typename T>

 void clear_arr(T arr[], const int length, int n)
 {
	 for (int i = 0; i < length; i++) 
	 { 
		if (arr[i] == n)
			 arr[i] = arr[i] * 0;
	 }
 }

 template<typename T>

 void show_arr(T arr[], const int length) 
 {
	 for (int i = 0; i < length; i++)
	 {
		 std::cout << arr[i] << ' ';
	 }
 std::cout << "\b.\n";
 } 

 int index_sum(int arr1[], int arr2[], const int size1, const int size2, int n)
 {
	 if (n >= size1 || n >= size2 || n < 0)
		 return 0;
	 return arr1[n] + arr2[n];
 }


 int mean_arr(int arr3[], const int size3)
 {   int min = arr3[0];
	 int max = arr3[0];
	 for (int i = 1; i < size3; i++)
	 {
		 min = arr3[i] < min ? arr3[i] : min;
		 max = arr3[i] > max ? arr3[i] : max;
	 }
	 return (min + max) / 2;
 }

 void prime_range(int a, int b)
 {
	 for (int i = a; i <= b; i++)
	 {
		 int count = 1;
		 for (int j = 2; j <= b ; j++)

			 if (i % j == 0)
				 count++;
		 if (count == 2)
			 std::cout << i << " ";
	 }
		 std::cout << "\n";
 }
int main() 
{
	setlocale(LC_ALL, "Russian");
		
	
		int n, m;
		const int size = 8;
		int arr[size]{ 2,4,6,6,9,6,4,6 };
		clear_arr(arr, size, 6);
		show_arr(arr, size);
		
		
		const int size1 = 5;
		int arr1[size1]{ 4,1,3,4,5 };
		const int size2 = 5;
		int arr2[size2]{ 4,1,3,4,5 };
		std::cout << "\n"<<index_sum(arr1, arr2, size1, size2, 2);
		
		
		const int size3 = 5;
		int arr3[size3]{ 1,2,3,4,5 };
		std::cout <<"\n\n"<< mean_arr(arr3, size3)<<"\n\n";

		
		prime_range(2, 100);

		
		return 0;
}