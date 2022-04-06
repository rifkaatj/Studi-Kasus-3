#include<iostream>
#include<fstream>
#include"../library/proses.h"
using namespace std;

int main(){
  process proses;
  proses.cetak();
  proses.getData();
  proses.toFile();
  return 0;
}