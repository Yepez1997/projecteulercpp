#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>

#define COMMA ','
#define QUOTE '"'

using namespace std; 
std::vector<std::string> names_unordered;
std::vector<std::string> names_ordered;

std::vector<std::string> remove_quotes(std::vector<std::string> vector);

// replace quotes with spaces 
std::vector<std::string> remove_quotes(std::vector<std::string> vector) {
    return vector; 
}

int main() {

    string line;
    ifstream names_file("p22_file.txt");

    if (names_file.is_open()) {
        while (getline(names_file, line,',')) { 
        
            cout << line << endl;
            names_unordered.push_back(line);
            
        }
        names_file.close(); 

        //std::vector<std::string> removed_quotes_vector = remove_quotes(names_unordered); 
    }
    else {
        cout << "Unable to open file" << endl; 
    }

    return 0;
}












