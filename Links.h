#ifndef Links_h
#define Links_h

#include <string>
#include <iostream>

class Links
{
private:
   std::string userName;
   int userNumber;
   Links* nextNodePtr;
public:
   Links(std::string name = "", int number = 0, Links* pointer = nullptr);
};

#endif