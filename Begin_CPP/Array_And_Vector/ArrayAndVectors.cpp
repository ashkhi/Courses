#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // arrays and vectors are compound data types
    // array has fixed size
    // array elements are all of same type
    // elements of array are stored in continuous memory locations
    // arrays are accessed using index
    // array elements start at index 0 and end at index size-1
    // array do not have any mechanism to detect 'out of bound'
    // always initialize the array
    // very efficient C++ construct
    // iteration / looping is used to process the array

    // array declaration
    // type array_name [size];
    int arr1 [5];

    // array initialization
    int arr2 [5] {1,2,3,4,5};
    int arr3 [5] {1,2}; // remaining elements are zero
    int arr4 [5] {0}; // all elements are 0
    int arr5 [] {1,2,3,4,5}; // no specific size, calculated from init list
    int arr6 [] {};
    cout << "arr6 size is : " << sizeof(arr6) << endl;

    // array access
    cout << "first and last element of arr2 are : " << arr2[0] << ", " << arr2[4] << endl;
    cout << "start of the arr2 is : " << arr2 << endl;
 
    // multi dimentional array
    // type array_name [#rows][#columns];
    int arr7 [2][3] {{1,2,3},{4,5,6}};
    cout << "arr7's 1st row 1st element is : " << arr7[0][0] << endl;

    // vectors
    // vectors are kind of dynamic arrays
    // part of C++ STL
    // vector graows and shrinks at run time
    // stored in continuous memory locations
    // using indexing -> no bound check (similar to array)
    // there is bound check functionality
    // vector also have sort, reverse kind of functionality inbuilt
    // vector <type> vector_name (size);
    // size is optional
    vector <char> vect0; // empty vector
    vector <char> vect1 (5); // declaration, init to 0
    vector <char> vect2 {'a', 'e', 'i', 'o', 'u'}; // init using list
    vector <int> vect3 {1,2,3,4,5}; // init using list

    // vector access
    // index start at 0
    cout << "first element of vect2 is : " << vect2[0] << endl; // like array
    cout << "last element of vect2 is : " << vect2.at(4) << endl; // bounds checked

    // adding to vector
    // at runtime
    // not possible for array
    vect3.push_back(6);
    cout << "last element of vect3 is : " << vect3.at(5) << endl;
    cout << "elements in the vect3 are : " << vect3.size() << endl;

    // multi dimentional vector
    vector <vector <int>> mat {{1,2,3},{4,5,6}};
    cout << "first element of the vector is : " << mat.at(0).at(0) << endl;

    return 0;
}