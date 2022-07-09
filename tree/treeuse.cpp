#include<iostream>
#include<vector>
#include "treeclass.h"
using namespace std;
void printtree(treeNode<int> *root){
	cout << root->data <<"  "<<endl;
	for(unsigned i=0;i<root->child.size();i++){
		printtree(root->child[i]);
	}

}
treeNode* takeinput(){
	cout<< "enter the root data";
	int num;
	cin>>num;
	treeNode<int>* root=new treeNode<int>(num);
	
}
int main(){
	treeNode<int> *root =new treeNode<int>(3);
	treeNode<int> *s2 =new treeNode<int>(5);
	treeNode<int> *s3 =new treeNode<int>(4);
	root->child.push_back(s2);
	root->child.push_back(s3);
	printtree(root);
}
	