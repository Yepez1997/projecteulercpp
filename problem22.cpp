#include "problem22.h"

using namespace std; 

int main() {

   
    // remove all the quotes in the original file
    write_file_to_output1("sp22_infile.txt","sp22_outfile.txt");

    // remove all the commas, replace them with spaces, and add every element into the 
    write_file_to_output2("sp22_outfile.txt");  

    // names are now ordered 
    sort_names(names_unordered);

    std::vector<std::string> names_ordered = names_unordered;
    
    // get the sum for each name 
    //name_sums(names_ordered);
    print_elements(names_unordered);

   
    //init_score_map();

    return 0;

}












