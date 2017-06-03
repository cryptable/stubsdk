//
// Created by David on 03/06/2017.
//

#ifndef STUBSDK_FUNCTIONS_H
#define STUBSDK_FUNCTIONS_H
#include <string>
#include <vector>

class Functions {
  void addFunction(std::string name);

private:
  std::vector<std::string> functions;
};

#endif //STUBSDK_FUNCTIONS_H
