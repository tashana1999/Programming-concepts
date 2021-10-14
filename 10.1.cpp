using namespace std;
#include<iostream>
int main()
{
	FILE*filePointer;//variable pointer is pointer to type FILE
	char text[10000];
	filePointer=fopen("test.txt","w");
	cout<<"What do you want to print?";
	fgets(text,sizeof(text),stdin);
	fprintf(filePointer,"%s",text);
	fclose(filePointer);
	return 0;
}
