#include "node_t.hpp"

node_t::node_t()
{

}

node_t::node_t(int nombre, vector<Pair> nodos)
{
  cout << "Entro nodo constructor." << endl;
  set_name(nombre);
  set_next_nodes(nodos);
}

int node_t::get_name(void)
{
  return name_;
}

void node_t::set_name(int nombre)
{
  cout << "Entro nodo set_name(1)." << endl;
  name_ = nombre;
}

int node_t::set_next_nodes(vector<Pair> vector_sig)
{
  cout << "Entro nodo set_next_nodes(1)." << endl;
  next_nodes_ = vector_sig;
}

vector<Pair> node_t::get_next_nodes(void)
{
  return next_nodes_;
}

Pair node_t::get_next_nodes_pos(int pos)
{
  return next_nodes_[pos];
}

ostream& node_t::write(ostream& os)
{
  cout << "Nodo llamado: " << name_ << ", puede llegar a: " << endl;
  for(int i = 0; i < next_nodes_.size(); i++)
  {
    cout << "\t" << next_nodes_[i].first << '|' << next_nodes_[i].second << endl;
  }
  cout << endl;
}
