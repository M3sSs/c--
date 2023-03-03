

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int> &arr,int left,int mid,int right){
        // Calculate the start and sizes of two halves.
        int start1 = left;
        int start2 = mid + 1;
        int n1 = mid - left + 1;
        int n2 = right - mid;
        
        // Initialize temporary vector with appropriate size
        vector<int> tempArr(n1 + n2);

        // Copy elements of both halves into a temporary array.
        for (int i = 0; i < n1; i++) {
            tempArr[i] = arr[start1 + i];
        }
        for (int i = 0; i < n2; i++) {
            tempArr[n1 + i] = arr[start2 + i];
        }

        // Merge the sub-arrays 'in tempArray' back into the original array 'arr' in sorted order.
        int i = 0, j = n1, k = left;
        while (i < n1 && j < n1 + n2) {
            if (tempArr[i] <= tempArr[j]) {
                arr[k] = tempArr[i];
                i += 1;
            } else {
                arr[k] = tempArr[j];
                j += 1;
            }
            k += 1;
        }

        // Copy remaining elements
        while (i < n1) {
            arr[k] = tempArr[i];
            i += 1;
            k += 1;
        }
        while (j < n1 + n2) {
            arr[k] = tempArr[j];
            j += 1;
            k += 1;
        }
    }
    void merge_sort(vector<int>& nums,long int f,long int l){
        if(f<l){
            int mid=f+(l-f)/2;
            merge_sort(nums,f,mid);
            merge_sort(nums,mid+1,l);
            merge(nums,f,mid,l);
        }
    }
    vector<int> sortArray(vector<int>& nums) {

        long int l=nums.size();
        merge_sort(nums,0,l-1);
        return nums;
    }
};
int main()
{
    cout<<"enter size of list";
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cout<<"enter a number\n";
        cin>>nums[i];
    }
    vector<int> temp;
    Solution ob;
    temp=ob.sortArray(nums);
    for(int i=0;i<6;i++){
        cout<<temp[i]<<"  ";
    }

    return 0;
}
