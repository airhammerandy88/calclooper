#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <iomanip>

int main(){
    std::string userIn;
    double answerOut;
    double stringExpression;
    std::vector<double> firstValueArray;
    bool unsummon = false;


while (unsummon = false){
    std::cout << "    " << "input desired mathimatical expression to be solved" << endl;
    std::cout << "    " <<  "example (3 + 4) allow 1 space per character" << endl;
    std::cout << "     " << "type (unsummon) to quit program" << endl;
    std::cin >> unsummon;
    std::cout << "    " << "input math expression" << endl;
    std::cin >> userIn;

    size_t rhs = userIn.find(" ");
    std::string firstValue = userIn.substr(0, rhs);
    if (isdigit(firstValue)){
        double firstValueDec = std::stod(firstValue);
        firstValueArray.push_back(firstValueDec);
    }
    else if (ispunct(firstValue)){
        firstValueArray.push_back(firstValue);
    }
    else{
        std::cout << "invalid input" << endl;
    }

    size_t lhs = rhs + 1;
    rhs = userIn.find(" ", lhs);
    std::string nextValue = userIn.substr(lhs, rhs - lhs);
    if (isdigit(nextValue)){
        double secondValueDec = std::stod(nextValue);
        firstValueArray.push_back(secondValueDec);
    }
    else if (ispunct(nextValue)){
        firstValueArray.push_back(nextValue);
    }
    else{
        std::cout << "invalid input" << endl;
    }

    lhs = rhs + 1;
    rhs = userIn.find(" ", lhs);
    std::string Value = userIn.substr(lhs, rhs - lhs);
    if (isdigit(firstValue)){
        firstValue = std::stod(firstValue);
        firstValueArray.push_back(firstValue);
    }
    else if (ispunct(firstValue)){
        firstValueArray.push_back(firstValue);
    }
    else{
        std::cout << "invalid input" << endl;
    }
}


}
