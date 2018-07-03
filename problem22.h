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
#include <sstream>

#define COMMA ','
#define QUOTE '"'

using namespace std; 

//data structures 
std::map<char,int> alpha_score;
std::map<std::string, int> final_score;
std::vector<std::string> names_unordered;
std::vector<std::string> names_ordered;
std::vector<int> names_sum; 

//funtions
void print_elements(std::vector<std::string> nums);
void init_score_map(); 
void write_file_to_output1(std::string infile, std::string outfile); 
void write_file_to_output2(std::string outfile); 
std::map<std::string, int> name_sums(std::vector<std::string> &sorted_names, std::map<char,int> &alpha_score, std::map<std::string, int> &final_score);
std::map<std::string, int> multiples_name(std::map<std::string, int> &final_score,std::map<std::string, int> &final_score_2);
void sort_names(std::vector<std::string> &names); 
int words_total(std::string word); 
void parse_name_char(std::vector<std::string> &name, std::map<char,int> &alpha_score);
void print_map(std::map<char,int> alpha_score);
int total_sum(std::map<std::string,int> &final_score_2);




/* print_elements:  prints all the elements in a vector
*/
void print_elements(std::vector<std::string> nums) {
    for (std::vector<std::string>::iterator it = nums.begin() ; it != nums.end(); ++it) {
         std::cout << ' ' << *it;
    }
}

/* sort_names:  sorts the names in the vector of names 
 */
void sort_names(std::vector<std::string> &names) { 
    std::sort(names.begin(), names.end()); 
}

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


/* name_sums: tokenizes the name, outputs its score, and inserts 
*  score into a map with name and score
*/
std::map<std::string, int> name_sums(std::vector<std::string> &sorted_names, std::map<char,int> &alpha_score, std::map<std::string, int> &final_score) {
    for (std::vector<std::string>::iterator it = sorted_names.begin() ; it != sorted_names.end(); ++it) {
        int total_sum = 0; 
        std::istringstream ss(*it); 
        // iterate map to see if there is a match with the string stream
        while(ss) { 
            for (std::map<char,int>::iterator it = alpha_score.begin(); it != alpha_score.end(); ++it) {
                char peek = (char)ss.peek();
                if(it->first == peek) {
                    ss.get(); // remove off string stream 
                    total_sum += it->second; // add to total sum
                }
            }
        }
        //std::cout << *it <<  ": " << total_sum << endl;
        final_score[*it] = total_sum;  
    }
    return final_score;
}


/* mulptiples_name: gets the sum from names in final score and 
* multiplies by the appropriate position
*/ 
std::map<std::string, int> multiples_name(std::map<std::string, int> &final_score,std::map<std::string, int> &final_score_2) {
    // start position
    int start = 1; 
    for (std::map<std::string,int>:: iterator it = final_score.begin(); it !=final_score.end(); ++it) {
        int multiplied_sum = it->second * start; 
        final_score_2[it->first] = multiplied_sum;
        start +=1; 
    }
    return final_score_2;
}

/* total_sum: gets total sum from final_score_2 map
*/
int total_sum(std::map<std::string,int> &final_score_2) {
    int total_sumd = 0;
     for (std::map<std::string,int>:: iterator it = final_score_2.begin(); it !=final_score_2.end(); ++it) {
        total_sumd += it->second;
    }
    cout << "total: " << total_sumd << endl;
    return total_sumd;
}


/* Parses out one name to individual characters, use this for names_sums
*/
void parse_name_char(std::vector<std::string> &name, std::map<char,int> &alpha_score) { 
    for (std::vector<std::string>::iterator it = name.begin() ; it != name.end(); ++it) { 
        cout << *it  << endl;
        std::istringstream ss(*it);   
        int total_sum = 0;  
        while(ss) { 
             for (std::map<char,int>::iterator it = alpha_score.begin(); it != alpha_score.end(); ++it) {
                char peek = (char)ss.peek();
                if(it->first == peek) {
                    ss.get();
                    total_sum += it->second;
                }
            }
        }
        std::cout << total_sum << endl; 
    }
}


/* Prints out alpha score map 
 */
void print_map(std::map<char,int> alpha_score) {
    std::map<char, int>::iterator it = alpha_score.begin();
   
while (it != alpha_score.end()) {

        char alpha = it->first; 
        int score = it->second;
        std::cout << alpha << ":: " << score << std::endl;
     it++; 
    
    }
}



