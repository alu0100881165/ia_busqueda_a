#pragma once

#include "node_t.hpp"

class grafo_t
{
  private:
    vector<node_t> grafo_vect;    //vector con los nodos
    int size_;                    //número de nodos

  public:
    grafo_t();
    grafo_t(vector<vector<int>> vector_formateado, int size);

    void set_size(int size);
    int get_size(void);

    void set_grafo_vect_size(void);
    void insert_grafo_vect_pos(vector<Pair> to_insert, int pos);

    ostream& write(ostream& os);
};
