#include<stdio.h>
#include<stdlib.h>


struct StructHoge
{
	int Value;
};
class Classhoge
{
public:
	int Value;
	void PrintHelloWorld();
};

void Classhoge::PrintHelloWorld()
{
	printf("HelloWorld\n");
}
int main()
{
	StructHoge struct_hoge;
	Classhoge class_hoge;
	struct_hoge.Value = 1;
	class_hoge.Value = 10;
	class_hoge.PrintHelloWorld();
	system("pause");
	return 0;
}