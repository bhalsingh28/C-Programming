#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void BubbleSort(vector<int> vec) {

};

void InsertionSort(vector<int> vec) {

};

void MergeSort(vector<int> vec) {

};

void QuickSort(vector<int> vec) {

};

void SelectionSort(vector<int> vec) {

};

int main() {
    vector <int> vec1 = {1,6,9,25,7,0,2};
    vector <int> vec2 = {5,7,2,6,0,6,3,8};

    // BUBBLE SORT : Choose element one by one and take them to their position
    // TIME COMPLEXITY : O(n^2)
    BubbleSort(vec1);
    BubbleSort(vec1);




    for(auto i:vec1) cout << i << "  ";
    cout << endl;
    for(auto i:vec2) cout << i << "  ";
 

    return 0;
}