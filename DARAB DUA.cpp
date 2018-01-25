#include <iostream> 
using namespace std;

class csifirdua
{
	int x;
	int y;
     public:
	 void set_val(int,int);
	 int hasilDarabdua()
	 {
	 	return x*y;
	 } 	
};
void csifirdua::set_val(int a,int b)
{
	cout << "NOMBOR DARAB DUA" << endl;

	x=a;
	y=b;
	cout <<" Nom. Pertama : " << endl;
	cin>>x;
	cout << "Nom. Kedua :" << endl;
	cin>>y;
}

 int main()

{
   csifirdua oA1;
   oA1.set_val(5,6);
   cout<<"Hasil Darab Dua   :"<<oA1.hasilDarabdua()<<endl;
}
