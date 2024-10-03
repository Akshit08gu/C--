#include<iostream>
#include<ctime>  // Include the ctime header for clock()
using namespace std;

void Insertionsort(int arr[], int n, int i)
{
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > temp)
    {
        arr[j + 1] = arr[j]; 
        j = j - 1;
    }
    arr[j + 1] = temp;
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {12, 11, 2, 5, 9, 1};
    int n = 6;

    // Start the clock
    clock_t start_time = clock();

    for (int i = 0; i < n; i++)
        Insertionsort(arr, n, i);

    // Stop the clock
    clock_t end_time = clock();

    // Print sorted array
    print(arr, n);

    // Calculate and print the time taken
    double time_taken = double(end_time - start_time) / CLOCKS_PER_SEC;
    cout << "\nTime taken by Insertionsort: " << time_taken << " seconds" << endl;

    return 0;
}
