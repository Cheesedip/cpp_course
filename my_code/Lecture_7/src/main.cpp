#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ifstream inFile;

  string inputFileName = "text.txt";
  inFile.open(inputFileName);

  if(inFile.is_open()){
    string line;
    while(inFile){
      getline(inFile, line);
      cout << line << endl;
    }
    inFile.close();
  }
  else {
    cout << "Could not create file: " << inputFileName << endl;
  }

  return 0;
}
