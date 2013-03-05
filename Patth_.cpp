#include "Path.h"

// make Path class file
using namespace std;





Path::Path(node *start_obj,node *goal_obj){

	*goal_node=*goal_obj;
	*start_node=*start_obj;
	 path->end=*goal_obj;
	 path->start=NULL;
	 //use a start point and goal to generate a path,
	 //sign it intoo list
}

void add_path(node *obj_node){

	if (path->start==NULL)
	{
		obj_node->next=path->end;
		path->start=obj_node;

	}else {
		
		obj_node->next=path->start;
		path->start=obj_node;

	}

}

void del_path(node *obj_node){

	path->start=obj_node->next;
	//since all path was found by rrt, 
	//in .m file, it looks like we just need 
	//to use the parant object to back trace 
	//from goal to the start point, 
	//use cut the first node which 
	//or if we need bi-direction linked list. 
	//use below. (node need to use *prev)
	//------------------------------
	/*node *temp;
	
	if (obj_node!=path->start || obj_node!=path->end)
	{
		*temp=*obj_node;
		(obj_node->prev)->next=temp->next;
		(obj_node->next)->prev=temp->prev;
	}else if (obj_node==path->start)
	{
		*temp=*obj_node;
		(temp->next)->prev=NULL;
		path->start=temp->next;
	}else if (obj_node==path->end)
	{
		*temp=*obj_node;
		(temp->prev)->next=NULL;
		path->end=temp->prev;

	}
*/



}

*list get_path(){


	return path;
}