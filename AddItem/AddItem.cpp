// *************************************************
// Author : Freeman
// email  : 
// Desc   : This file contains the 'main' function. 
//          Program execution begins and ends there.
// Date   : 20231028
// *************************************************
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <chrono>
#include "md5.h"
#include "factorial.h"
#include "sha256.h"

using namespace std;

int main(){
    string filename = "C:/Users/flo1/httpd.conf";
    string data = "";
    string csum = "";
    std::ifstream afile; 
    afile.open(filename);
    auto start = chrono::high_resolution_clock::now();
    if (afile.is_open()) {
        while (afile.good()) {
            afile >> data;
        }
      csum = hashing::sha256::sha256(data);
       cout << "*" << csum << "    " << filename << endl;
    }
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    cout << duration.count()<< endl;

    // cin.get();
    return 0;
}