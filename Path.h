


struct node
	{   
		//not sure what is contain in the node.
		//this should come from the map class or 
		//global class. 
		//node *RRT_Node;
		//only need signle direction link. 
		//node *prev;
		node *next;
	};

	struct list
	{
		node *start;
		node *end;
	};

	
class Path
{
private:
	
	node *start_node;
	node *goal_node;
	list *path;
public:
	Path(node *object);
	~Path();
	void add_path(node *obj_node);
	void del_path(node *obj_node);
	*list get_path();
};