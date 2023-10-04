#pragma once
#include<iostream>
#include "Software.h"

using namespace std;

class NodoS{

 public:

 Software* _Software;
 NodoS* sgte;

 NodoS(Software* _soft){_Software=_soft; sgte=NULL;};



};


