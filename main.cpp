//
//  main.cpp
//  taptinbatky2
//
//  Created by Hung Hoang on 5/4/19.
//  Copyright © 2019 Hung Hoang. All rights reserved.
//

#include <iostream>
#include "File.hpp"
#include "Folder.hpp"
#include "Driver.hpp"
using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    File file1("File 1", 1, "Noi dung file 1");
    File file2("File 2", 2, "Day la noi dung file 2");
    File file3("File 3", 3, "File 3 o day");
    File file4("File 4", 5, "Noi dung File 4");
    
    Folder folder1("Folder 1", 3);
    Folder folder2("Folder 2", 2);
    
    Driver driverC("driver C", 10);
    Driver driverD("driver D", 10);
    
    folder1.Add(&file1);
    folder1.Add(&file2);
    folder1.Add(&folder2);
    
    folder2.Add(&file3);
    
    driverC.Add(&file4);
    driverC.Add(&folder1);
    
    driverC.getInsideDriver();
    //cout << driverC.getSize();
    folder1.getInsideFolder();
    cout << folder1.getSize();
    cout << endl;
    return 0;
}

