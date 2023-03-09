#include<iostream>
#include<string>

int main(){
	
	std::string a="Merhaba String";
	std::cout<<a.empty(); // a boşsa 1 değilse 0 yazar 
	std::cout<<a.insert(8,"nasilsin"); //insert kaçıncıdan sonra yazacaksın şeklinde yazılır
	return 0;
}
