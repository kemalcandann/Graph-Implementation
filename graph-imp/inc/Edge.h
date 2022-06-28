#ifndef EDGE_H
#define EDGE_H

#include<vector>
#include<utility>
#include<iostream>

/*     */
class Edge;
class Vertex;

class Edge {
public:
	Edge();
	Edge(Vertex*, int);

	void set_weight(int);
	
	int get_weight() const;
	int get_dest_number() const;
private:
	int weight{0};
	Vertex* destination_vertex;
};

class Vertex {
public:
	Vertex() = default;
	Vertex(int vertex_number)
	{
		this->vertex_number = vertex_number;
	}
    
	void add_vertex_by_weight(Vertex *v, int e)
	{
		Edge edge(v, e);
		neigboor_vertexs.push_back(edge);
	}

	void print()
	{
		for (int i = 0; i < neigboor_vertexs.size(); ++i)
		{
		    std::cout << vertex_number << ": ";
			std::cout << neigboor_vertexs.at(i).get_dest_number() << " ";
            std::cout << "weight:" << neigboor_vertexs.at(i).get_weight() << "\n";
		}
		std::cout << "\n";
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