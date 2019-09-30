#include "graph_t.hpp"

graph_t::graph_t(void)
{

}

graph_t::graph_t(int size, vector<Pair> nodos)
{
  if(size > 0)        //comprobar que hay nodos que leer
    set_size(size);

  grafo_vect.resize(get_size());

  for(int i = 0; i < nodos.size())
}

void graph_t::set_size(int size)
{
  size_ = size;
}

int graph_t::get_size(void)
{
  return size_;
}
