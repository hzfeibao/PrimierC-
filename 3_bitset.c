#include<iostream>
#include<bitset>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::bitset;


void init()
{
    bitset<32> bit;//default 0
    bitset<16> bit1(0xffff);
    bitset<32> bit2(0xffff);
    bitset<64> bit3(0xffff);
    bitset<8> bit4(0xffff);
}

void initWithStr()
{
    string str("1010010001");
    bitset<32> bit1(str);
    
    string str2("1111111100000000");
    bitset<32> bit2(str2, 5, 4);

    string str3("1001000");
    bitset<32> bit3(str3, 2);

    cout<<bit1<<endl;
    cout<<bit2<<endl;
    cout<<bit3<<endl;
    cout<<"bit1:"<<endl;
    for(int i = 0; i< 32; i++){
	cout<<i<<":"<<bit1[i]<<" ";
    }
    cout<<endl;
}

void func()
{
    bitset<32> bit(0x000f);
    cout<<"any():"<<bit.any()<<endl;
    size_t count = bit.count();
    cout<<"count():"<<count<<endl;
    size_t size = bit.size();
    cout<<"size():"<<size<<endl;
    
    cout<<"test(0):"<<bit.test(0)<<" 0:"<<bit[0]<<endl;
    bit.set();
    cout<<"set():"<<bit<<endl;
    bit.set(0);
    cout<<"set(0):"<<bit<<endl;
    bit.reset();
    cout<<"reset():"<<bit<<endl;
    bit.reset(0);
    cout<<"reset(0):"<<bit<<endl;
    bit.flip();
    cout<<"flip():"<<bit<<endl;
    bit.flip(0);
    cout<<"flip(0):"<<bit<<endl;

}

int main()
{

    initWithStr();
    func();
    return 0;
}
