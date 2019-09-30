#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

tydef pair<int, int> Pair;

class node_t
{
  private:
    int name_;                  //identificador del nodo
    vector<Pair> next_nodes_;    //vector de nodos siguientes con su coste
}
