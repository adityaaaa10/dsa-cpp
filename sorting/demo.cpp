#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int> &nums)
{ // selction sort
    for (int i = 0; i <= nums.size() - 2; i++)
    {
        int min = i;
        for (int j = i; j <= nums.size() - 1; j++)
        {
            if (nums[j] < nums[min])
                min = j;
        }
        int temp = nums[min];
        nums[min] = nums[i];
        nums[i] = temp;
    }
    return nums;
}

vector<int> bubbleSort(vector<int> &nums)
{ // bubble sort
    for (int i = nums.size() - 1; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
            }
        }
    }
    return nums;
}

vector<int> insertionSort(vector<int> &nums)
{ // insertion sort
    for (int i = 0; i <= nums.size() - 1; i++)
    {
        int j = i;
        while (j > 0 && nums[j - 1] > nums[j])
        {
            int temp = nums[j];
            nums[j] = nums[j - 1];
            nums[j - 1] = temp;
            j--;
        }
    }
    return nums;
}

void merge(vector<int> &nums, int low, int mid, int high)
{ // merge sort
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (nums[left] <= nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(nums[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(nums[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        nums[i] = temp[i - low];
    }
}
void mergeSortHelper(vector<int> &nums, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSortHelper(nums, low, mid);
    mergeSortHelper(nums, mid + 1, high);
    merge(nums, low, mid, high);
}
vector<int> mergeSort(vector<int> &nums)
{
    mergeSortHelper(nums, 0, nums.size() - 1);
    return nums;
}

int partition(vector<int> &nums, int low, int high)
{ // quick sort
    int pivot = nums[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (nums[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (nums[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(nums[i], nums[j]);
    }
    swap(nums[low], nums[j]);
    return j;
}
void quickSortHelper(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int p = partition(nums, low, high);
        quickSortHelper(nums, low, p - 1);
        quickSortHelper(nums, p + 1, high);
    }
}
vector<int> quickSort(vector<int> &nums)
{
    quickSortHelper(nums, 0, nums.size() - 1);
    return nums;
}