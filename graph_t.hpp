#pragma once

#include "node_t.hpp"

class grafo_t
{
  private:
    vector<node_t> grafo_vect;    //vector con los nodos
    int size_;                    //número de nodos

  public:
    grafo_t(void);
    grafo_t(int size);

    void set_size(int size);
    int get_size(void);
    
}
