//Tyler Evans
// Key projects
//these are projects that shows understanding of a subject
//thanks to Think Geek and also Hacker for providing the exsample programs
//in java
#include <iostream>
#include <string>
#include <cstring>
//I use namespace std for the function
using namespace std;
//here are the defined helper functions
//
//this function prints out items in an array
void print(int a[], int b);
//
//this is the function that peforms the bubble sort
//on the array
// it is accending in its order
void decarrsort(int a[], int b);
//
//here is the main function
int main(){
    const int size = 8;
    int ar[size] = {55, 29, 75, 39, 44, 89, 44, 23};
    cout << "This will sort out these values" << endl;
    print(ar, size);
    cout << endl;
    cout << "The values sorted" << endl;
    decarrsort(ar, 8);
    print(ar, size);
    cout << endl;
    cout << "Done." << endl;
    cout << endl;
    cout << "press enter to exit" << endl;
    cin.get();
    return 0;
    
}
//prints all the items in array...
void print(int a[], int b){
cout << "\n";
for (int i =0; i < b; i++){
    cout << a[i] << "\t";
}
}
//here is the bubble sort function
    void decarrsort(int a[], int _b){
        //here this functions is for arrays
        //there are the diffrences of having
        for(size_t i = 0; i < _b; i++){
            //differnce is right here it goes though the index of array
            //it counts from zero to the given size of the array
            //since it is not a vector you must make sure to not go out of range
            //or you will get a great programming blessing
            //nonsense
            for (size_t j = 0; (i-j) < _b; j++){
                if(a[j] > a[i]){
                    int _v;
                    _v = a[j];
                    a[j] = a[i];
                    a[i] = _v;
                    }
            }
        }
    }



