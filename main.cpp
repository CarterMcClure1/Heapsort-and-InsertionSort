
#include <iostream>
#include <string>
#include <cmath>
#include <random>
#include <vector>
#include "InsertionSort.cpp"
#include "heapsort.cpp"
#include <time.h>

using namespace std;



int main() {



    long arraySize;
    vector<long> randomArray;
    vector<long> sortedArray;
    




cout << "Enter size of array \n";
cin >> arraySize;

random_device rd;
mt19937 gen(rd());                                          //generate seed and random number between 0 and input given
uniform_int_distribution<long int> dis(0, arraySize);       //this was needed because rand() only generates numbers up to 32767 and RAND_MAX cant be changed

    
    

    

randomArray.resize(arraySize);                              //resize randomArray

    

    for(int i = 0; i < randomArray.size(); i++) {
        long int randomNumber = dis(gen);                   //generate randomNumber and fill array
        randomArray[i] = randomNumber;
                      
    }

    //for(int i = 0; i < randomArray.size(); i++) {
    //    cout << randomArray[i] << " "; }                  //writes out randomArrray


cout << endl;

sortedArray.resize(arraySize);
for(int i = 0; i < sortedArray.size(); i++)            // resize and fill sortedArray with ordered numbers
           sortedArray[i] = i;

//for(int i = 0; i < sortedArray.size(); i++) {
       // cout << sortedArray[i] << " "; }              //writes out sortedArray

cout << endl;
InsertionSort firstTry(randomArray, arraySize);
clock_t start = clock();
firstTry.sort();   
clock_t end = clock();                                     //insertion sort
firstTry.printArray();

cout << endl;                                           //if you want to change array to sort, replace array in first parameter
                                                        //if you want to check time, move clock start and end so the sort call between them

heapsort secondTry(sortedArray, arraySize);
secondTry.sort();                                 //heapsort
secondTry.printArray();


cout <<"\nworked";
double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;            //time display
cout << "\n Time taken by function: " << duration << " seconds";


                                                    

return 0;
}



