#include "problem22.h"

using namespace std; 

// What is the total of all the name scores in the file?

int main() {

   
    std::map<char,int> alpha_score;
    alpha_score['A'] = 1; 
    alpha_score['B'] = 2;
    alpha_score['C'] = 3; 
    alpha_score['D'] = 4;
    alpha_score['E'] = 5; 
    alpha_score['F'] = 6;
    alpha_score['G'] = 7; 
    alpha_score['H'] = 8;
    alpha_score['I'] = 9; 
    alpha_score['J'] = 10;
    alpha_score['K'] = 11; 
    alpha_score['L'] = 12;
    alpha_score['M'] = 13; 
    alpha_score['N'] = 14;
    alpha_score['O'] = 15; 
    alpha_score['P'] = 16;
    alpha_score['Q'] = 17; 
    alpha_score['R'] = 18;
    alpha_score['S'] = 19; 
    alpha_score['T'] = 20;
    alpha_score['U'] = 21; 
    alpha_score['V'] = 22;
    alpha_score['W'] = 23;
    alpha_score['X'] = 24; 
    alpha_score['Y'] = 25;
    alpha_score['Z'] = 26; 

    // remove all the quotes in the original file
    write_file_to_output1("sp22_infile.txt","sp22_outfile.txt");

    // remove all the commas, replace them with spaces, and add every element into the 
    write_file_to_output2("sp22_outfile.txt");  

    // names are now ordered 
    sort_names(names_unordered);

    //print_map(alpha_score);

    parse_name_char(names_unordered, alpha_score);

   

    return 0;

}












