#include <iostream>

void takeNumber(int* ptr, int size);
void doubleIt(int* ptr, int size);
void find(int* ptr, int size, int& max, int& min);
void swap(int* ptr, int size, int& max, int& min);
void show(int* ptr, int size);
int main()
{
   //Ask the user for the size of the dataset and dynamically allocate an array on the heap using new.
    int size;
    std:: cout << " what should be the size of the array : ";
    std:: cin >> size;
    int* ptr = new int[size];
    //Initialize the array by asking the user to enter each element.
    takeNumber(ptr,size);
    show(ptr,size);
    //Double all values in the array using a function that accepts the array by pointer and its size.
    doubleIt(ptr,size);
    show(ptr,size);
    //Find the minimum and maximum values in the array, using a function that accepts two reference parameters to return the results.
    // we find a index cus we need it for later qustion 
    int min {0};
    int max {0};
    find(ptr,size,max,min);
    std:: cout << "the maxmium value is : " << ptr[max] << "\n"; 
    std:: cout << "the minimum value is : " << ptr[min] << "\n"; 
    //Swap the minimum and maximum values in the array using a function that swaps two integers by reference.
    swap(ptr,size,ptr[max],ptr[min]);
    //Print the final state of the array after swapping.
    show(ptr,size);
    delete[] ptr;
}
void takeNumber(int* ptr, int size)
{
    for(int i = 0; i < size; i++){
        std:: cout << "enter number : ";
        std:: cin >> ptr[i];
    }
}
void doubleIt(int* ptr, int size){
    for(int i = 0; i < size; i++){
        ptr[i] *= 2;
    }
}
void find(int* ptr, int size, int& max, int& min){
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] > max) {max = i;}  
        if(ptr[i] < min){min = i;} 
    }
}
void swap(int* ptr, int size, int& max, int& min){
    int temp = min;
    min = max;
    max = temp;
}
void show(int* ptr, int size){
    for (int i = 0; i < size; i++)
    {
        std:: cout << ptr[i] << " ";
    }  std:: cout << '\n';
}



