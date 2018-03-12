#include <iostream>
#include <fstream>

using namespace std;


#pragma pack(push, 1)

struct Person {
  char name[50];
  int age;
  double height;
};

#pragma pop()


int main() {
  string fileName = "test.bin";
  ofstream outFile;

  Person someone = {"Frodo", 220, 0.8};

  outFile.open(fileName, ios::binary);

  if(outFile.is_open()) {
    
    outFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

    outFile.close();
  }
  else {
    cout << "Couldnt write to file: " << fileName << endl;
  }
  Person someoneElse = {};
  ifstream inFile;

  inFile.open(fileName, ios::binary);

  if(inFile.is_open()) {
    
    inFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

    inFile.close();
  }
  else {
    cout << "Couldnt read file: " << fileName << endl;
  }

  cout <<someoneElse.name << endl;
  cout <<someoneElse.age << endl;
  cout <<someoneElse.height << endl;
  return 0;
}
