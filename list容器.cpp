#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> num;
	cout<<"请输入五个整数："<<endl;
	for(int i=0;i<5;i++)
	{
		int temp=0;
		cin>>temp; 
		num.push_back(temp);
	}
	for(list<int>::reverse_iterator i=num.rbegin();i!=num.rend();i++)
	{
		cout<<*i<<" ";
	}
	return 0;
}
