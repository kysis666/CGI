#include <iostream>
#include <fstream>
#include <queue>
using namespace std;
 
int main(int argc, char** argv) {
	
	cout << "Content-type: text/html\n\n<title>CGI FIFO</title>";
               
    queue <string> text;
        string get;
        fstream plik;

	plik.open("tekst.txt");  
	if(plik.good())  
		while(!plik.eof())  
    	{
        	getline(plik,get);
            text.push(get);

		    cout << "\n[{"<<get<<"}]\n";
        }
    plik.close();  

 return 0;
}
