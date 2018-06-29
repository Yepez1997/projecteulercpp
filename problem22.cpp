#include "problem22.h"

using namespace std; 

int main() {

    // here we remove all the quotes in the original file
    write_file_to_output1("p22_infile.txt","p22_outfile.txt");

    // here we remove all the commas and replace them with spaces 
    write_file_to_output2("p22_outfile.txt"); 


    std::vector<std::string> sorted_names = sort_names(names_unordered);

    init_score_map();

    return 0;

}












