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
  
  std::cout << "Input math expression, with numbers and, -, +, * /" << "example: 3 + 4" << std::endl;
  
  std::cin >> expressNum;
  

  for(int i = 0; i < expressNum; ++i){ //loads userinput numbers
    std::cin >> userIn1;
    userInputArray.push_back(userIn1);

    std::cin >> mathType;
  if (mathType == "-" || mathType == "+" || mathType == "*" || mathType == "/")
  {
    mathTypeArray.push_back(mathType);
  }
 
  
  }

  for(int i = 0; i < userInputArray.size()-1; ++i){
    std::cout << userInputArray.at(i) << " ";
    if (mathTypeArray.size()-1 == expressNum){// need to figure out how to equate mathTypeArray position to expressnum
        std::cout << mathTypeArray.at(i);
        //std::cout << "=";
    }
    else{
        std::cout << mathTypeArray.at(i) << " ";
    }
  }

}
