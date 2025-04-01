#include <iostream>
#include <fstream>

using namespace std;

int echo() {
  string echoout;
  ifstream input("input.chy");
  while (getline (input, echoout)); {
    cout << echoout;
  }
  input.close();
  return 0;
