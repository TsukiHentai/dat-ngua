#include <iostream>
#include <conio.h>
using namespace std;

int a[255];
int n;

//-----------------------------------------------------------------//
void inputArray() {
	cout << "Nhap vao so phan tu cua mang:";
	cin >> n;
	for (int i=0; i<n; i++) {
		cout << "A[" << i << "]=";
		cin >> a[i];
	}
}
//-----------------------------------------------------------------//
void inputArray1() {
	n = 10;
	
	a[0] = 5;
	a[1] = 8;
	a[2] = 2;
	a[3] = 10;
	a[4] = 5;
	a[5] = 12;
	a[6] = 8;
	a[7] = 1;
	a[8] = 15;
	a[9] = 4;	
}
//----------------------------------------------------------------//
void printArray() {
	for (int i=0; i<n; i++)
		cout << a[i] << " ";        
}
//----------------------------------------------------------------//
void swap(int *x, int *y) {
	int temp = *x;
    *x = *y;
    *y = temp;
}
//----------------------------------------------------------------// 
void selectionSort() {
	cout << "Selection Sort" << endl;
    int i, j, min_idx;
     // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        	if (a[j] < a[min_idx])
            	min_idx = j;
         		// Swap the found minimum element with the first element
        	swap(&a[min_idx], &a[i]);
    }
}
 //-------------------------------------------------------------------------//
void insertionSort() {
	cout << "Insertion Sort" << endl;
   	int i, key, j;
   	for (i = 1; i < n; i++) {
    	key = a[i];
       	j = i-1;
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       	while (j >= 0 && a[j] > key) {
        	a[j+1] = a[j];
        	j = j-1;
       	}
       	a[j+1] = key;
   }
}
//-------------------------------------------------------------------------//
void bubbleSort() {
	cout << "Bubble Sort" << endl;
   	int i, j;
   	for (i = 0; i < n-1; i++)      
        // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (a[j] > a[j+1])
              swap(&a[j], &a[j+1]);
}
//-----------------------------------------------------------------------------//
int partition(int arr[], int low, int high) 
{ 
    int pivot = arr[high];  // pivot 
    int i = (low - 1); 		// Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
//-----------------------------------------------------------------------------//
void quickSort(int arr[], int low, int high) 
{ 
	cout << "Quick Sort" << endl;
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
//-------------------------------------------------------------------------//
void heapify(int arr[], int n, int i) {
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
//-----------------------------------------------------------------------------//
// main function to do heap sort
void heapSort(int arr[], int n) {
	cout << "Heap Sort" << endl;
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
//-------------------------------------------------------------------------------//
int main() {
	int t;
	inputArray();
	cout << "Mang vua nhap vao la:" << endl;
	printArray();
	cout << endl;
	
	cout << "MENU - MOI BAN CHON KIEU SAP XEP" << endl;
	cout << "1 - Selection Sort" << endl;
	cout << "2 - Insertion Sort" << endl;
	cout << "3 - Bubble Sort" << endl;
	cout << "4 - Quick Sort" << endl;
	cout << "5 - Heap Sort" << endl;
	cout << "6 - Merge Sort" << endl;
	cout << "Ban chon 1, 2, 3, 4, 5 hay 6?" << endl;
	
	cin >> t;
	switch (t) {
		case 1: {
			selectionSort();
			cout << "Mang sap xep la:" << endl;
			printArray(); 
			break;
		}
		case 2: {
			insertionSort();
			cout << "Mang sap xep la:" << endl;
			printArray();
			break;
		} 
		case 3: {
			bubbleSort();
			cout << "Mang sap xep la:" << endl;
			printArray();
			break;
		}
		case 4: {
			quickSort(a, 0, n-1);
			printArray();
			break;
		}
		case 5: {
			heapSort(a, n);
			printArray();
			break;
		}
		case 6: {
			//Meger Sort
			//printArray();
			break;
		}
		default: {
			cout << "Lua chon cua ban khong dung";
			break;
		}
	}	
	getch();
	return 0;
}

