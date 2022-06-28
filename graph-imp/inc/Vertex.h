#ifndef VERTEX_H
#define VERTEX_H

#include<vector>
#include<utility>
#include<iostream>
#include "Edge.h"

class Vertex {
public:
	Vertex() = default;
	Vertex(int vertex_number)
	{
		this->vertex_number = vertex_number;
	}

	int get_vertex_number() const
	{
		return vertex_number;
	}
    
private:
	std::vector<Edge> neigboor_vertexs;
	int vertex_number{ 0 };
};


#endif