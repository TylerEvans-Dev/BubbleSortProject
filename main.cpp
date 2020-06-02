//Tyler Evans
//2/6/2020
//this is the bubble sort project
//credit to ThinkGeek for help in the idea of the project
//credit to HackerRank for exsample of how to do the bubble sort
//I did not copy from anybody but used some of the code from above as an exsample for my own
//This code is reusable just creative commons are on this code
#include <iostream>
#include <vector>
#include <string>
//these are the basic needed libs
//I use the namespace for this
using namespace std;
//the bubble sort algorithum for all the stuff
//from greatest to least
void acebubsort(vector<double>& _a);
// same algorithum but decending order
//from least to greatest
void decbubsort(vector<double>& _a);

//here is a print function that prints all the stuff inside the vector
void print(vector<double>& _a);

//main function that excutes everything
int main() {
    //vector of random values unorgnized
    vector <double> AERO = {14, 254, 30, 205 ,100};
    //here is the bubble sort project
    cout <<"these are the values I intend to sort" << endl;
    print(AERO);
    cout  << "here is the values sorted" << endl;
    acebubsort(AERO);
    cout << "From greatest to least" << endl;
    print(AERO);
    cout << "from least to greatest" << endl;
    decbubsort(AERO);
    print(AERO);
    cout << "Press enter to exit" << endl;
    cin.get();
    return 0;
}
void acebubsort(vector<double>& _a){
    for (size_t a = 0; a < _a.size(); a++){
        //goes though the entire set
        //subtracts the prevous item
        for(size_t b = 0; (b - a) > _a.size(); b++){
            //grabs the item right next to it
            if(_a[a] > _a[b]){
                //compares the value
                double value = 0;
                //sets a extra value so thing is not lost
                value = _a[b];
                //sets the value that is less then to the last position
                _a[b] = _a[a];
                //makes the item behind it set to the value of that
                _a[a] = value;
            }//repeats again unitl this is greater then the size of a
        }
    }
}
void decbubsort(vector<double>& _a){
    for (size_t a = 0; a < _a.size(); a++){
        //goes though the entire set
        //subtracts the prevous item
        for(size_t b = 0; (b - a) > _a.size(); b++){
            //grabs the item right next to it
            if(_a[a] < _a[b]){
                //compares the value
                double value = 0;
                //sets a extra value so thing is not lost
                value = _a[b];
                //sets the value that is less then to the last position
                _a[b] = _a[a];
                //makes the item behind it set to the value of that
                _a[a] = value;
            }//repeats again unitl this is greater then the size of a
        }
    }
}
void print(vector<double>& _a){
    //prints out the items in the set
    cout << "\n";
    for(size_t i = 0; i < _a.size(); i++){
        cout << _a[i] << "\t";
    }
    cout << "\n";
}
