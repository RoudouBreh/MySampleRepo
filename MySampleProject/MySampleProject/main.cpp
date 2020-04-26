//
//  main.cpp
//  MySampleProject
//
//  Created by Roman Philip on 26/04/2020.
//  Copyright © 2020 Roman Philip. All rights reserved.
//

#include <iostream>

int main() {
    
    int a;
    
    std::cout<< "Quel entier ?" << std::endl;
    std::cin>>a;
    
    while(a < 0)
    {
        std::cout<< "Votre entier n'est pas bon, veuillez ressaisir svp" << std::endl;
        std::cin>> a;
    }
    
    std::cout<< "je fais des mofis inchallah ca marche" << std::endl;
    
    return 0;
}
