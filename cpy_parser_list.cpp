/*
 * filename : cpy_parser_list.cpp
 * function : copy the most recently updated product list from parser
 * 
 * Result File  : parser_cpy.csv
 */

#include <uistream>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/fstream.hpp>

RESULT_FILE = "parser_cpy.csv";

void get_data{
  //get parser data
  return item_list;
}

void mk_cpy(){
  //copy item_list to copy_list
}

int main(){
 std::string function;
 std::string input;
  
 if(boost::filesystem::exists(RESULT_FILE)){
   if(!boost::filesystem::remove(RESULT_FILE)){
     //remove error handle
   }
 }
  
}

