//Manages a list of top ten hyperlinks
#include <string>
#include<iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;
using std::endl;

TopTenList::TopTenList()
{
	_list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
	_list.at(index - 1) = link;
}

Hyperlink TopTenList::get(int index)
{
	return _list.at(index);
}

void TopTenList::display_forward(){
	for(int i = 1; i <= (int)_list.size(); i++){
		cout << i  << ": " << _list.at(i-1).text << endl;
	}
	cout << endl;
}

void TopTenList::display_backward(){
	for(int i = (int)_list.size(); i >= 1; i--){
		cout << i << ": " << _list.at(i-1).text << endl;
	}
	cout << endl;
}
