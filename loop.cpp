#include <iostream>
#include <string>
#include <vector>

int main(){
  double userIn1 = 0;
  int expressNum = 0;
  double answerOut = 0;
  
  std::vector <double> userInputArray;
  std::vector <std::string> mathTypeArray;
  std::vector <double> expressionArray;
  std::string mathType;
  int counter = 0;
  
  std::cout << "Input math expression, with numbers and, -, +, * /" << "example: 3 + 4" << std::endl;
  
  std::cin >> expressNum;
  

  for(int i = 0; i < expressNum; ++i){ //loads userinput numbers
    std::cin >> userIn1;
    userInputArray.push_back(userIn1);

    std::cin >> mathType;
  if (mathType == "-" || mathType == "+" || mathType == "*" || mathType == "/")
  {
    mathTypeArray.push_back(mathType);
    counter = counter + 1;
  }
 
  
  }

  for(int i = 0; i < userInputArray.size()-1; ++i){
    std::cout << userInputArray.at(i) << " ";
    if (counter == expressNum){ // not solution always true need to find a mechanism to show position number so i can relate the if
       
      std::cout << "=";
    }
    else{
        std::cout << mathTypeArray.at(i) << " ";
    }
  }

}
