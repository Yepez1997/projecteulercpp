#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include <map>
#include <iterator> 

#define COMMA ','
#define QUOTE '"'

using namespace std; 

std::map<char,int> alpha_score;
std::map<std::string, int> final_score;
std::vector<std::string> names_unordered;
std::vector<std::string> names_ordered;

void print_elements(std::vector<std::string> nums);
void init_score_map(); 
void read_file(std::string file); 
std::vector<std::string> remove_quotes(std::vector<std::string> vector);
std::string split_words(std::string word); 
int words_total(std::string word); 


/* read_file: reads a file passed in and uses a quotes delimeter 
*/
void read_file(std::string file) {
    std::string line;
    ifstream names_file(file);

    if (names_file.is_open()) {
        while (getline(names_file, line,'"')) { 
      
            cout << line << endl;
           
        }
        //std::vector<std::string> newlist = remove_quotes(names_unordered);
        names_file.close();  

    }
    else {
        cout << "Unable to open file" << endl; 
    }

}

/* print_elements:  prints all the elements in a vector
*/
void print_elements(std::vector<int> nums) {
    for (std::vector<int>::iterator it = nums.begin() ; it != nums.end(); ++it) {
         std::cout << ' ' << *it;
    }
}

/* remove_quotes: removes quotes after parsing, reading p22_file.txt  - without the commas 
*/ 
std::vector<std::string> remove_quotes(std::vector<std::string> vector) {
    return vector; 
}


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
