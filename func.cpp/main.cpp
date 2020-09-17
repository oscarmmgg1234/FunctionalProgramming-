//
//  main.cpp
//  func.cpp
//
//  Created by Oscar Maldonado on 9/28/18.
//  Copyright © 2018 Oscar Maldonado. All rights reserved.
//

#include <iostream>
#include <functional>



void printVal(int value)
{
    std::cout << value << std::endl;
}

int main() {
  
    std::function<void(int)> print = printVal;
    
    print(12);
    int a = 13;
    std::function<void(int)> t = [a](int) { std::cout << a << std::endl;};
    
    t(a);
    
    
    
}
