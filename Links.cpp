#include "Links.h"

Links::Links(std::string name, int number, Links* pointer) : userName(name), userNumber(number), nextNodePtr(pointer) {}

