#include<vector>
template<typename t>
class treeNode{
	public:
	t data;
	std:: vector<treeNode*> child;
	treeNode(t data){
		this->data=data;
	}
		
};
