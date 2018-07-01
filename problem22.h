#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include <map>
#include <iterator> 
#include <exception>
#include <cstddef>
#include <stdexcept>

#define COMMA ','
#define QUOTE '"'

using namespace std; 

std::map<char,int> alpha_score;
std::map<std::string, int> final_score;
std::vector<std::string> names_unordered;
std::vector<std::string> names_ordered;

void print_elements(std::vector<std::string> nums);
void init_score_map(); 
void write_file_to_output1(std::string infile, std::string outfile); 
void write_file_to_output2(std::string outfile); 

std::string split_words(std::string word); 
std::vector<std::string> sort_names(std::vector<std::string> &names); 
int words_total(std::string word); 


/* write_file_to_output1: reads a file passed in and uses a quotes delimeter 
*/
void write_file_to_output1(std::string infile, std::string outfile) {
    std::string line;
    fstream file; 
    ifstream names_file(infile);
    ofstream out_file(outfile);
    
    if (names_file.is_open()) {
        while (getline(names_file, line,'"')) { 
            // here we want to write to file 
            out_file << line;          
        }
        out_file.close();
        names_file.close();  
    }
    else {
        cout << "Unable to open file" << endl; 
    }
}


/* write_file_to_output2: reads the output file without quotes, remove the commas, and adds each name
* to a vector 
*/
void write_file_to_output2(std::string outfile) {
    std::string line;
    ifstream names_file(outfile); 

    if (names_file.is_open()) {
        while(getline(names_file, line, ',')) {

            names_unordered.push_back(line);
        }
        names_file.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }
    
}

/* sort_names:  sorts the names in the vector of names 
 */
std::vector<std::string> sort_names(std::vector<std::string> &names) { 
   // std::vector<std::string> name = std::sort(names.begin(), names.end()); 
    return names;
}

/* print_elements:  prints all the elements in a vector
*/
void print_elements(std::vector<std::string> nums) {
    for (std::vector<std::string>::iterator it = nums.begin() ; it != nums.end(); ++it) {
         std::cout << ' ' << *it;
    }
}


/* init_score_map: sets up map with values for each char
*/
void init_score_map() {
    std::map<char,int> alpha_score;
    alpha_score['a'] = 1; 
    alpha_score['b'] = 2;
    alpha_score['c'] = 3; 
    alpha_score['d'] = 4;
    alpha_score['e'] = 5; 
    alpha_score['f'] = 6;
    alpha_score['g'] = 7; 
    alpha_score['h'] = 8;
    alpha_score['i'] = 9; 
    alpha_score['j'] = 10;
    alpha_score['k'] = 11; 
    alpha_score['l'] = 12;
    alpha_score['m'] = 13; 
    alpha_score['n'] = 14;
    alpha_score['o'] = 15; 
    alpha_score['p'] = 16;
    alpha_score['q'] = 17; 
    alpha_score['r'] = 18;
    alpha_score['s'] = 19; 
    alpha_score['t'] = 20;
    alpha_score['u'] = 21; 
    alpha_score['v'] = 22;
    alpha_score['w'] = 23;
    alpha_score['x'] = 24; 
    alpha_score['y'] = 25;
    alpha_score['z'] = 26; 
}


