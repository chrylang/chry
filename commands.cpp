#include <iostream>
#include <fstream>

using namespace std;

int echo() {
  string echoout;
  ifstream input("input.cy");
  while (getline (input, echoout)); {
    cout << echoout;
  }
  input.close();
  return 0;
