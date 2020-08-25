#include <iostream>
#include <conio.h>





namespace gir{
	
		void Yazdir();
}

void gir::Yazdir(){
	
	int a;
	std::cout<<"bir sayi giriniz:"<<std::endl;
		std::cin>>a;
		std::cout<<"Girmis oldugunuz sayi:"<<a <<std::endl;
	}



	int main(){
	gir::Yazdir();
	getch();
	return 0;
	
	}
