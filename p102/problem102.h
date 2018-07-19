#include <deque>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <map>

/*
 Pseudocode:
 1. Read numbers from files 
 2. Put numbers/verticies, hence coordinates, into a data structure .. map or struct
 * For each verticie
 3. Find the slope for all three verticies in the triangle
 4. Find the x and y intercepts for each slope
 5. Create a list from the differnce of x and y intercepts from lines 
*/

// Create a vector, once a certain count is reached 
// reset the vector to null 
// keep track of count 
using namespace std; 

void read_numbers(std::string file);
void x_cordinate(int slope);
void y_cordinate(int slope);
void slope();
void x_list_range(int x1, int x2);
void y_list_range(int y1, int y2);
void iterate_deque(std::deque<std::vector<std::string> > triangles);

std::vector<std::string> verticie_points;
std::deque<std::vector<std::string> > triangles_2;
// holds x and y for coordinates 
std::map<int,int> coordinates; 

struct verticie {
    int x;
    int y;
};

struct triangle { 
    // want to have three verticies 
    verticie a;
    verticie b;
    verticie c;
};

// vector of triangles with structs 
std::vector<triangle> triangles; 

/* read_numbers: gets each line from 
*/
void read_numbers(std::string file_name) { 
    int count;
    std::string line;
    ifstream numbers_file(file_name);  

    if (numbers_file.is_open()) {
        count = 0; 
        while(getline(numbers_file, line,',')) {
            cout << line  << endl;
            
            // pushes all the points into a vector 
            //verticie_points.push_back(line);
        }
        numbers_file.close();
       
    }
    else {
        cout << "Unable to open file" << endl;

    }
}


void instert_verticie_to_triangles(std::vector<std::string> verticies){ 
    int count = 0; 
   for(std::vector<std::string>::iterator it = verticies.begin(); it != verticies.end(); it++) {
       cout << *it << endl; 

     }
}


//set one side to 0 to get x cordinate 
void x_cordinate(int slope) { 
    
}

//set one side to 0 to get y cordinate 
void y_cordinate(int slope) { 

}

void slope(){

}

void x_list_range(int x1, int x2) { 


}

void y_list_range(int y1, int y2) { 


}


void v1_v2() {

}

void v2_v3() {

}

void v3_v1() {

}

bool check_origin(){ 
    return false;
}
