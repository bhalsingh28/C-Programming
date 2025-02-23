#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void BubbleSort(vector<int>& vec) {
    for(int i=0;i<vec.size()-1;i++) {
        for(int j=0;j<vec.size()-1;j++) {
            if(vec[j]>vec[j+1]) {
                swap(vec[j], vec[j+1]);
            }
        }
    }
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
    vector <int> vec1 = {1, 2,4,5,5,8,9,64,3,2,1,4,24,24,5,5,6,7,8,9, 2, 3};
    vector <int> vec2 = {5,7,2,6,0,6,3,8};

    // BUBBLE SORT : Choose element one by one and take them to their position
    // TIME COMPLEXITY : O(n^2)
    BubbleSort(vec1);
    BubbleSort(vec2);




    for(auto i:vec1) cout << i << "  ";
    cout << endl;
    for(auto i:vec2) cout << i << "  ";
    return 0;
}