#include <iostream.h>
#include <conio.h>
int main()
{    char shape;
     int length,breath,radius;
     float pi,area;
     cout<<"for rectangle enter= r "<<endl<<"for square enter= s "<<endl<<" for triangle enter= t "<<endl<<" for circle enter= c "<<endl;
     cout<<"enter your shape=";
     cin>>shape;
     if (shape == 'r'){
	 cout<<"length = " ;
	 cin>>length;
	 cout<<"breath = " ;
	 cin>>breath;
	 area=length*breath;
	 cout<<area<<endl;
	 }
     else if (shape == 's'){
	 cout<<"length = ";
	 cin>>length;
	 cout<<"breath = " ;
	 cin>>breath;
	 area = length*breath;
	 cout<<area<<endl;
	 }
	 else if (shape == 't'){
	 cout<<"height = ";
	 cin>>length;
     cout<<"base = " ;
     cin>>breath;
	 area =(0.5)*length*breath;
	 cout<<area<<endl;
	 }
	 else if  (shape == 'c' ){
	 cout << "radius = " ;
	 cin>>radius;
	 cout<<"pi= ";
     cin>>pi;
	 area= pi*radius*radius ;
	 cout<<area<<endl;
	}

getch() ;
return 0 ;
}

