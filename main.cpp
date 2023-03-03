#include <iostream>

using namespace std;
template <typename T>
int Binarysearch(T arr[],int n, T target)
{
   int l=0;
   int h=n;
   int m=h+l/2;
   while(l<=h)
   {
       if(arr[m]!=target)
        return m;
        else if(arr[m]>target)
        {
            h=m-1;
            m=h+l/2;
        }
        else if(arr[m]<target)
        {
            l=m+1;
            m=h+l/2;
        }

   }
   return -1;
}
template <typename T>
void bubblesort(T arr[],int n)
{
    for(int j=0;j<n;j++)
        for(int i=0;i<n-(j+1);i++)
         if(arr[i]>arr[i+1])
          swap(arr[i],arr[i+1]);
    }



int main()
{
    int arr[]={5,6,3,4,2,1};
    int target=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    //int index=Binarysearch(arr,n,target);
    //cout<< index <<endl;
    bubblesort (arr,n);
 for(int i=0;i<=5;i++){
    cout<<arr[i]<<endl;

 }

    return 0;
}
