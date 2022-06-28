#include "../inc/Edge.h"

Edge::Edge()
{
}
Edge::Edge(Vertex* ver, int weight)
{
	this->weight = weight;
	this->destination_vertex = ver;
}

void Edge::set_weight(int weight)
{
	this->weight = weight;
}

int Edge::get_weight() const
{
	return weight;
}

int Edge::get_dest_number() const
{
	return destination_vertex->get_vertex_number();
}
