#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include<math.h>
#define j 4
using namespace std;
float converter(string s){
     string c;
     int k=0,l;
    for(int i=0;s[i]!='.';i++){
         if(s[i]==' '||s[i]=='"'||s[i]=='\n'){}
         else{
          c[k]=s[i];
          k++;
         }
         l=i-1;
    }
    string t;
    int count=0;
    for(int i=l+3;s[i]!='"';i++){
         t[i-l-3] = s[i]; 
         count++;
}
  int b=stoi(t);
  double y;
   y=(double)b/pow(10,count); 
    int a=stoi(c);
    float ans;
    ans=(double)a+y;
    return ans;
}
int main()
{
	string fname;
	cout<<"Enter the file name: ";
	cin>>fname;
    float SMA3[100],SMA5[100];
 
	vector<vector<string>> content;
	vector<string> row;
	string line, word;
 
	fstream file (fname, ios::in);
	if(file.is_open())
	{
		while(getline(file, line))
		{
			row.clear();
 
			stringstream str(line);
 
			while(getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);
		}
	}
	else
		cout<<"Could not open the file\n";
float a[content.size()];
    for(int i=1;i<content.size();i++){
	 a[i]=converter(content[i][4]);
     
    }

    cout<<"Simple Moving Avg for 3 days\tSimple moving Avg for 5 days"<<endl;
  for(int i=1;i<content.size()-4;i++){
           cout<<(a[i]+a[i+1]+a[i+2])/3<<"\t\t\t\t\t"<<(a[i]+a[i+1]+a[i+2]+a[i+3]+a[i+4])/5<<endl;
            
   }
   for(int i=content.size()-4;i<content.size()-2;i++){
       cout<<(a[i]+a[i+1]+a[i+2])/3<<endl;
   }
   
   
   
	return 0;
}




