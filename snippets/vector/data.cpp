/*
    Author : Devesh Katoch
    Date : 26/10/2019
    Time : 02:20
    Description : data() 
*/
#include <bits/stdc++.h> 
using namespace std; 
  
int main() { 
    // initialising vector 
    std::vector<int> vec = { 1, 2, 3, 4, 5}; 
  
    // memory pointer pointing to the first element 
    int* pos = vec.data(); 
  
    // printing the vector 
    cout << "Vector elements : "; 
    for (int i = 0; i < vec.size(); ++i){
        cout << *pos++ << " "; 
    }
  
    return 0; 
} 