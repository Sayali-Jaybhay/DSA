# include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    int i,j,min;

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
    }
    if(min!=i)
    {
        swap(arr[min],arr[i]);

    }
}

void printarr(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
}

int main()
{
    int n=6;
    int arr[]={23,67,45,12,89,30};
    selection_sort(arr,n);
    printarr(arr,n);
    
}