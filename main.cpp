#include "Links.h"
#include <iostream>
#include <string>

int main() {
   std::string userIn;
   int userNum;
   Links* head = nullptr;
   Links* curr = nullptr;
   Links* tail = nullptr;

   head = new Links();
   curr = new Links();
   tail = new Links();

   std::cout << "Welcome to the linked list practice program!" << std::endl;
   std::cout << "Please choose an action below." << std::endl;
   
   std::cout << "Add, or Remove" << std::endl;
   std::getline(std::cin, userIn);

   if (userIn == "Add") {
      std::cout << "What is the name?" << std::endl;
      std::getline(std::cin, userIn);
      std::cout << "What is the age?" << std::endl;
      std::cin >> userNum; 
      std::cin.ignore();

      


   }

   system("pause");
   return 0;
}