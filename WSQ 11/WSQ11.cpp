#include <iostream>
#include <fstream>
using namespace std;

int Banana_lines (string lines)
{

   int x=0;
   int Counter_banana_line=0;

   for(int i=0; i<lines.length(); i++)
   {
     lines[i]=tolower(lines[i]);
   }
   cout<<lines<<endl;
   while (1)
   {
     int foundtop = lines.find("banana", x);

     x=foundtop+1;

     if(foundtop!=-1)
     {
     Counter_banana_line++;
     }

     else
     {
      cout<<"Counter: "<<Counter_banana_line<<endl; //In

      break;
     }
   }

   return Counter_banana_line;
}

int Find_bananas (const char *filename)
{
cout<<filename<<endl;

ifstream file(filename);
cout<<endl;

int Final_counter=0;

string lines;

if(file.is_open())
{
    while(getline(file,lines))
    {
      Final_counter = Final_counter + Banana_lines(lines);

      cout << "Final counter: " << Final_counter << endl;
    }

return Final_counter;
}
}

int main ()
{
string filename = "TextFile2.txt";

int Result;

Result = Find_bananas(filename.c_str());

cout << "Banana was found: " << Result << " times" << endl;

return 0;
}
