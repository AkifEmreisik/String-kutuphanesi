#include<iostream>
#include<string>

int main(){
	
	std::string a="Merhaba String";
	std::cout<<a.empty(); // a bo�sa 1 de�ilse 0 yazar 
	std::cout<<a.insert(8,"nasilsin"); //insert ka��nc�dan sonra yazacaks�n �eklinde yaz�l�r
	return 0;
}
