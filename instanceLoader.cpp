#include <fstream>
#include <string>
#include <iostream>
#include <string>
#include <format>

using namespace std;

int main() {
  cout << "Comecou\n";
  string file;

  // std::string fileName = "n10m2_A.txt";
  // std::string path = std::format("./intancias/{}", fileName);
  // std::string path0 = "./instancias/n10m2_A.txt";

  // string path0 = "./instancias/teste.txt";
  string path0 = "teste.txt";
  cout << "Definiu path\n";

  // ifstream instance(path0);
  ifstream instance ("./teste.txt", ifstream::in);
  cout << "Leu ifstream\n";
  // instance.open(path0);

  char c = instance.get();
  while (instance.good()) {
    cout << c;
    c = instance.get();
  }
  
  // cout << "Vai entrar no loop\n";
  // while (getline(instance, file)) {
  //   cout << "Entrou loop\n";
  //   cout << file;
  // }

  instance.close();

  return 0;

  // cout << "Abriu\n";
  // if (instance.is_open()) {
  //   cout << "entrou";
  //   char number;
  //   while (instance) {
  //     number = instance.get();
  //     cout << number;
  //   }
  // }
}
