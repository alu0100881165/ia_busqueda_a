#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

typedef pair<int, int> Pair;

class node_t
{
  private:
    int name_;                  //identificador del nodo
    vector<Pair> next_nodes_;    //vector de nodos siguientes con su coste

  public:
    node_t();
    node_t(int nombre, vector<Pair> nodos);

    int get_name(void);
    void set_name(int nombre);

    int set_next_nodes(vector<Pair> vector_sig);
    vector<Pair> get_next_nodes(void);
    Pair get_next_nodes_pos(int pos);

    ostream& write(ostream& os);

};
