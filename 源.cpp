#include <iostream>

#include "标头.h"
#include "标头2.h"
#include "标头1.h"

#include "inline.h"

using namespace std;

void show() {
  cout << "源" << endl;
  showin();
}

int main ()
{
  show();
  show1();
  show2();
  showin();
  aa1 struct_aa1 = {20};
  aaa1 class_aaa1;
  class_aaa1.aaa_show();

  system ("pause");
  return 1;
}