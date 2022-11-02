
    #include <iostream>
    using namespace std;

    int binarySearch(int arr[], int lower_bound, int upper_bound, int num)
    {
        if (lower_bound <= upper_bound)
        {
            int mid_point = (lower_bound + upper_bound) / 2;
            if (arr[mid_point] == num)
                return mid_point;
            if (arr[mid_point] > num)
                return binarySearch(arr, lower_bound, mid_point - 1, num);
            if (arr[mid_point] < num)
                return binarySearch(arr, mid_point + 1, upper_bound, num);
        }
        return -1;
    }
int main(void) 
           {
    int arr[] = { 1, 3, 7, 15, 18, 20, 25, 33, 36, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout << "Enter the number to search: \n";
    cin >> num;
    int Bin_Sea_Method = binarySearch(arr, 0, n - 1, num);
    if (Bin_Sea_Method == -1) 
    {
        cout << num << " is not present in the array" << " " ;
    }
    else 
    {
        cout << num << " is present at index " << Bin_Sea_Method << " in the array" << " ";
    }
    return 0;
           }