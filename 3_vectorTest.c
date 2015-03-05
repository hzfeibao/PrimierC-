#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

void init()
{
    vector<int> ivec1;
    vector<int> ivec2(ivec1);
    vector<int> ivec3(10);
    vector<int> ivec4(7, 37);
    vector<string> svec1(3, "hello ");
    vector<string>::size_type  s1len = svec1.size();
    cout<<s1len<<endl;
    
    if(ivec1.empty()){
	cout<<"ivec1 is empty"<<endl;
    }

    string str;
    cin>>str;
    while(str != "end"){
	cin>>str;
	svec1.push_back(str);
    }

    if(svec1.empty()){
	cout<<"svec1 is empty"<<endl;
    }else{
	cout<<"svec1:"<<endl;
	/**
	for(vector<string>::size_type len = 0; len < svec1.size(); len++){
	    cout<<svec1[len]<<endl;
	}
	*/
	
	for(vector<string>::iterator it = svec1.begin(); it != svec1.end(); it++){
	    cout<<*it<<endl;
	}
	
	cout<<"svec1 end"<<endl;
    }
    
    for(vector<int>::iterator iter = ivec4.begin(); iter != ivec4.end(); iter++)
    {
	cout<<*iter<<endl;
    }

}

int main()
{
    init();

    return 0;
}
