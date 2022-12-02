#include <iostream>
using namespace std;
/*Sorting 
is used to rearrange a given array or list of elements according to a comparison operator on the elements.
The comparison operator is used to decide the new order of elements in the respective data structure.
*/
/*A sorting algorithm is said to be stable if two objects with 
equal keys appear in the same order in sorted output as they appear in the input data set
therefore inserton sorting is stable 
as we will only swap the ordering of any two items if the item on the right is less than the item to its left
*/
void insertionSort(int arr[], int n)//time complexity O(n^2)
{
    int k, j;
    for (int i = 1; i < n; i++)
    {
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';
}
int main()
{
    int n;//size of array
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    insertionSort(a, n);
    print(a, n);
    
	return 0;
}