#include <iostream>
using namespace std;
class MyClass
{
 public:
    void fun(int arr[], int len)
    {
        int minIndex = 0;
        for (int i = 1; i < len; i++)
        {
            if (arr[i] < arr[minIndex])
            {
                minIndex = i;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[len - 1];
        arr[len - 1] = temp;
    }
};
void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
   {
    cout << arr[i] << " ";
    }
cout << endl;
}
int main()
{
    int n;
    cout << "Please input array length: " << endl;
    cin >> n;
    int arr[100];
    cout <<"Please input array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before swap: ";
    printArray(arr, n);
     MyClass obj;
    obj.fun(arr, n);
    cout << "Array after swap:";
    printArray(arr, n);
    return 0;
}