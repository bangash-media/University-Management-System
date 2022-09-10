#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

// globaly defined variables used oonly for game
char table[9]={'1','2','3','4','5','6','7','8','9'};
bool draw=false;
char turn='X';


using namespace std;
//main functios
void portal();
void cafet();
void game();
//functions for teachers portal
void beepe();
void bebme();
void bemtsa();
void bemtsb();
//function for cafeteria
void cafe();
//functions for gaming zone
void display_table();
void player_turn();
bool gameover();  

void grades(float total);

int main()
 
{
	int choice,check1=0;
	char check;
	do{
	check1=0;	
	
	cout<<"\n\n\t\t **********A I R   U N I V E R S I T Y   M A N A G E M E N T   S Y S T E M********** \n\n\n";
	cout<<"press 1 to Enter into Teachers Portal  "<<endl;
	cout<<"press 2 to Enter into Cafeteria  "<<endl;
	cout<<"press 3 to Enter into Gaming Zone  "<<endl; cin>>choice;
    switch (choice)
	{
	case 1:
	portal();
	break;
	case 2:
    cafet();
    break;
    case 3:
    game();
    break;
    default:
    cout<<"Invalid Entry\n";
}
    cout<<"\n\nPress \"Y\" to Enter again into Air University Management System or Press N: "; cin>>check;
	if (check=='y'||check=='Y')
	check1=1;
}while (check1==1);

	
}
void portal()
{
	//int main for portals
    int class_num,check1=0;
	char check;
    cout<<"\n\n\n\t\t\t      AIR UNIVERSITY Teachers Portals\n\n\t\t\t******************************************\n\n\n";
    do{
	check1=0;
	cout<<"press 1 for CE-112L BEEP 2A  "<<endl;
	cout<<"press 2 for CE-112L BEBME A  "<<endl;
	cout<<"press 3 for CE-112L MTS 2A  "<<endl;
	cout<<"press 4 for CE-115L MTS 2B  "<<endl; cin>>class_num;
	
	switch(class_num)
	{
		case 1:
	beepe();
	break;
	case 2:  
	bebme();
	break;
	case 3:
	bemtsa();
	break;
	case 4:
	bemtsb();
	break;
    default :
	cout<<"Invalid Entry\n\n";
	break;
	}
	cout<<"\n\nPress \"Y\" to Enter again into Any Section or Press N: "; cin>>check;
	if (check=='y'||check=='Y')
	check1=1;
}while (check1==1);
	cafet();
		
}
void beepe()
{
	int size=23;
string name[size];
int rollnum[size];
float lab1perf[size];float lab2perf[size];float lab3perf[size];float lab4perf[size];float lab5perf[size];
float lab6perf[size];float lab7perf[size];float lab8perf[size];float lab9perf[size];float lab10perf[size];
float lab11perf[size];float lab12perf[size];float lab13perf[size];float lab14perf[size];

float lab1rprt[size];float lab2rprt[size];float lab3rprt[size];float lab4rprt[size];float lab5rprt[size];
float lab6rprt[size];float lab7rprt[size];float lab8rprt[size];float lab9rprt[size];float lab10rprt[size];
float lab11rprt[size];float lab12rprt[size];float lab13rprt[size];float lab14rprt[size];

float mid[size];float project[size];float final[size];float sum_of_labrprts[size];float sum_of_labperfs[size];
   
int wtsum,wtlab_rprt,wtlab_prf,wtmid,wtproject,wtfinal,roll_num;
   
string line;
ifstream file3("test2.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab7perf[i];
    getline(iss, rand, ',');
    iss >>  lab8perf[i];
    getline(iss, rand, ',');
    iss >>  lab9perf[i];
    getline(iss, rand, ',');
    iss >>  lab10perf[i];
    getline(iss, rand, ',');
    iss >>  lab11perf[i];
    getline(iss, rand, ',');
    iss >>  lab12perf[i];
    getline(iss, rand, ',');
    iss >>  lab13perf[i];
    getline(iss, rand, ',');
    iss >>  lab14perf[i];
    getline(iss, rand, ',');
    iss >> lab1rprt[i];
    getline(iss, rand, ',');
    iss >> lab2rprt[i];
    getline(iss, rand, ',');
    iss >> lab3rprt[i];
    getline(iss, rand, ',');
    iss >> lab4rprt[i];
    getline(iss, rand, ',');
    iss >> lab5rprt[i];
    getline(iss, rand, ',');
    iss >> lab6rprt[i];
    getline(iss, rand, ',');
    iss >> lab7rprt[i];
    getline(iss, rand, ',');
    iss >> lab8rprt[i];
    getline(iss, rand, ',');
    iss >> lab9rprt[i];
    getline(iss, rand, ',');
    iss >> lab10rprt[i];
    getline(iss, rand, ',');
    iss >> lab11rprt[i];
    getline(iss, rand, ',');
    iss >> lab12rprt[i];
    getline(iss, rand, ',');
    iss >> lab13rprt[i];
    getline(iss, rand, ',');
    iss >> lab14rprt[i];
	getline (iss,rand,',');
	iss>>mid[i];
	getline (iss,rand,',');
	iss>>project[i];
	getline (iss,rand,',');
	iss>>final[i];
	getline (iss,rand,','); 				   
    i++;
}
	for (int i=0;i<size;i++)
	{
		sum_of_labrprts[i]=(lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+
		lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]);
		
		sum_of_labperfs[i]=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+
		lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]);
	}
	char check;
	do{
		
	
	cout<<"\n\n\nEnter The Roll Number Of Student: "; cin>>roll_num;
	
	do{
		
	
	cout<<"\nEnter The Weightage Of Lab Reports: "; cin>>wtlab_rprt;
	cout<<"\nEnter The Weightage Of Lab Performances: "; cin>>wtlab_prf;
	cout<<"\nEnter The Weightage Of Mids: "; cin>>wtmid;
	cout<<"\nEnter The Weightage Of Project: "; cin>>wtproject;
	cout<<"\nEnter The Weightage Of Finals: "; cin>>wtfinal;

	wtsum=(wtlab_rprt+wtlab_prf+wtmid+wtproject+wtfinal);
	if (wtsum!=100)
	cout<<"\n\nThe Percentage of Totall Marks is not equal to 100... Please Enter Again The Weightages: \n";
	
	
}while (wtsum!=100);
	for(int i=0;i<size;i++)
	{
		char check1,check2;
		float total;
		if (roll_num==rollnum[i])
		{
		        
		
			char check;
			sum_of_labrprts[i]=(sum_of_labrprts[i] / 210)*wtlab_rprt;
			sum_of_labperfs[i]= (sum_of_labperfs[i] / 210)*wtlab_prf;
			mid[i]=(mid[i] / 55)*wtmid;
			project[i]=(project[i] / 20)*wtproject;
			final[i]=(final[i] / 50)*wtfinal;
			cout<<"\n\n	Roll Number Of Student: "<<rollnum[i]<<endl;
			cout<<"	Name Of Student: "<<name[i]<<endl;
			cout<<"	Lab Performance Marks: "<<sum_of_labperfs[i]<<" / "<<wtlab_prf<<endl;
			cout<<"	Lab Reports Marks: "<<sum_of_labrprts[i]<<" / "<<wtlab_rprt<<endl;
			cout<<"	Mids Marks: "<<mid[i]<<" / "<<wtmid<<endl;
			cout<<"	Project Marks: "<<project[i]<<" / "<<wtproject<<endl;
			cout<<"	Finals Marks: "<<final[i]<<" / "<<wtfinal<<endl<<endl<<endl;
			
			cout<<"Press \"Y\" to generate Totall Marks OR Press\"N\": "; cin>>check1;
			if (check1=='Y' || check1=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				cout<<"\n\nTotall Marks Out Of 100 = "<<total<<endl<<endl<<endl;
			}
			
			cout<<"Press \"Y\" to generate Grade OR Press\"N\": "; cin>>check2;
			if (check2=='Y' || check2=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				total=(total/wtsum)*100;
				grades(total);
			}
	}
	}
	cout<<"\n\n\nPress \"Y\" to Check Data of Another Student OR Press\"N\": "; cin>>check;
	
	
	}while (check=='y'||check=='Y');
	
	
	
	
	
	
//	for(int i=0;i<size;i++)
//	{
//		cout<<sum_of_labrprts[i]<<"  "<<sum_of_labperfs[i]<<endl<<endl;
//	}
//	











//for(int i=0;i<size;i++)
//cout<<name[i]<<setw(10)<<rollnum[i]<<setw(10)<<lab1perf[i]<<setw(10)<<lab2perf[i]<<setw(10)<<lab3perf[i]<<setw(10)<<lab4perf[i]<<setw(10)<<lab5perf[i]<<setw(10)<<lab6perf[i]<<setw(10)<<lab7perf[i]
//<<setw(10)<<lab8perf[i]<<setw(10)<<lab9perf[i]<<setw(10)<<lab10perf[i]<<setw(10)<<lab11perf[i]<<setw(10)<<lab12perf[i]<<setw(10)<<lab13perf[i]<<setw(10)<<lab14perf[i]<<setw(10)<<lab1rprt[i]
//<<setw(10)<<lab2rprt[i]<<setw(10)<<lab3rprt[i]<<setw(10)<<lab4rprt[i]<<setw(10)<<lab5rprt[i]<<setw(10)<<lab6rprt[i]<<setw(10)<<lab7rprt[i]<<setw(10)<<lab8rprt[i]<<setw(10)<<lab9rprt[i]<<setw(10)<<lab10rprt[i]
//<<setw(10)<<lab11rprt[i]<<setw(10)<<lab12rprt[i]<<setw(10)<<lab13rprt[i]<<setw(10)<<lab14rprt[i]<<setw(10)<<mid[i]<<setw(10)<<project[i]<<setw(10)<<final[i]<<endl<<endl;

}
void bebme()
{
	int size=30;
string name[size];
int rollnum[size];
float lab1perf[size];float lab2perf[size];float lab3perf[size];float lab4perf[size];float lab5perf[size];
float lab6perf[size];float lab7perf[size];float lab8perf[size];float lab9perf[size];float lab10perf[size];
float lab11perf[size];float lab12perf[size];float lab13perf[size];float lab14perf[size];

float lab1rprt[size];float lab2rprt[size];float lab3rprt[size];float lab4rprt[size];float lab5rprt[size];
float lab6rprt[size];float lab7rprt[size];float lab8rprt[size];float lab9rprt[size];float lab10rprt[size];
float lab11rprt[size];float lab12rprt[size];float lab13rprt[size];float lab14rprt[size];

float mid[size];float project[size];float final[size];float sum_of_labrprts[size];float sum_of_labperfs[size];
   
int wtsum,wtlab_rprt,wtlab_prf,wtmid,wtproject,wtfinal,roll_num;
   
string line;
ifstream file3("test3.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab7perf[i];
    getline(iss, rand, ',');
    iss >>  lab8perf[i];
    getline(iss, rand, ',');
    iss >>  lab9perf[i];
    getline(iss, rand, ',');
    iss >>  lab10perf[i];
    getline(iss, rand, ',');
    iss >>  lab11perf[i];
    getline(iss, rand, ',');
    iss >>  lab12perf[i];
    getline(iss, rand, ',');
    iss >>  lab13perf[i];
    getline(iss, rand, ',');
    iss >>  lab14perf[i];
    getline(iss, rand, ',');
    iss >> lab1rprt[i];
    getline(iss, rand, ',');
    iss >> lab2rprt[i];
    getline(iss, rand, ',');
    iss >> lab3rprt[i];
    getline(iss, rand, ',');
    iss >> lab4rprt[i];
    getline(iss, rand, ',');
    iss >> lab5rprt[i];
    getline(iss, rand, ',');
    iss >> lab6rprt[i];
    getline(iss, rand, ',');
    iss >> lab7rprt[i];
    getline(iss, rand, ',');
    iss >> lab8rprt[i];
    getline(iss, rand, ',');
    iss >> lab9rprt[i];
    getline(iss, rand, ',');
    iss >> lab10rprt[i];
    getline(iss, rand, ',');
    iss >> lab11rprt[i];
    getline(iss, rand, ',');
    iss >> lab12rprt[i];
    getline(iss, rand, ',');
    iss >> lab13rprt[i];
    getline(iss, rand, ',');
    iss >> lab14rprt[i];
	getline (iss,rand,',');
	iss>>mid[i];
	getline (iss,rand,',');
	iss>>project[i];
	getline (iss,rand,',');
	iss>>final[i];
	getline (iss,rand,','); 				   
    i++;
}
	for (int i=0;i<size;i++)
	{
		sum_of_labrprts[i]=(lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+
		lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]);
		
		sum_of_labperfs[i]=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+
		lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]);
	}
	char check;
	do{
	
	cout<<"\n\n\nEnter The Roll Number Of Student: "; cin>>roll_num;
	
	do{
	
	cout<<"\nEnter The Weightage Of Lab Reports: "; cin>>wtlab_rprt;
	cout<<"\nEnter The Weightage Of Lab Performances: "; cin>>wtlab_prf;
	cout<<"\nEnter The Weightage Of Mids: "; cin>>wtmid;
	cout<<"\nEnter The Weightage Of Project: "; cin>>wtproject;
	cout<<"\nEnter The Weightage Of Finals: "; cin>>wtfinal;

	wtsum=(wtlab_rprt+wtlab_prf+wtmid+wtproject+wtfinal);
	if (wtsum!=100)
	cout<<"\n\nThe Percentage of Totall Marks is not equal to 100... Please Enter Again The Weightages: \n";
	
}while(wtsum!=100);
	
	for(int i=0;i<size;i++)
	{
		char check1,check2;
		float total;
		if (roll_num==rollnum[i])
		{
		
		
			char check;
			sum_of_labrprts[i]=(sum_of_labrprts[i] / 210)*wtlab_rprt;
			sum_of_labperfs[i]= (sum_of_labperfs[i] / 210)*wtlab_prf;
			mid[i]=(mid[i] / 55)*wtmid;
			project[i]=(project[i] / 20)*wtproject;
			final[i]=(final[i] / 50)*wtfinal;
			cout<<"\n\n	Roll Number Of Student: "<<rollnum[i]<<endl;
			cout<<"	Name Of Student: "<<name[i]<<endl;
			cout<<"	Lab Performance Marks: "<<sum_of_labperfs[i]<<" / "<<wtlab_prf<<endl;
			cout<<"	Lab Reports Marks: "<<sum_of_labrprts[i]<<" / "<<wtlab_rprt<<endl;
			cout<<"	Mids Marks: "<<mid[i]<<" / "<<wtmid<<endl;
			cout<<"	Project Marks: "<<project[i]<<" / "<<wtproject<<endl;
			cout<<"	Finals Marks: "<<final[i]<<" / "<<wtfinal<<endl<<endl<<endl;
			
			cout<<"Press \"Y\" to generate Totall Marks OR Press\"N\": "; cin>>check1;
			if (check1=='Y' || check1=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				cout<<"\n\nTotall Marks Out Of 100 = "<<total<<endl<<endl<<endl;
			}
			
			cout<<"Press \"Y\" to generate Grade OR Press\"N\": "; cin>>check2;
			if (check2=='Y' || check2=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				total=(total/wtsum)*100;
				grades(total);
			}
	}
	}
	
	cout<<"\n\n\nPress \"Y\" to Check Data of Another Student OR Press\"N\": "; cin>>check;
	
	}while (check=='y'||check=='Y');
	
	
	
	
	
	
//	for(int i=0;i<size;i++)
//	{
//		cout<<sum_of_labrprts[i]<<"  "<<sum_of_labperfs[i]<<endl<<endl;
//	}
//	











//for(int i=0;i<size;i++)
//{cout<<name[i]<<setw(10)<<rollnum[i]<<setw(10)<<lab1perf[i]<<setw(10)<<lab2perf[i]<<setw(10)<<lab3perf[i]<<setw(10)<<lab4perf[i]<<setw(10)<<lab5perf[i]<<setw(10)<<lab6perf[i]<<setw(10)<<lab7perf[i]
//<<setw(10)<<lab8perf[i]<<setw(10)<<lab9perf[i]<<setw(10)<<lab10perf[i]<<setw(10)<<lab11perf[i]<<setw(10)<<lab12perf[i]<<setw(10)<<lab13perf[i]<<setw(10)<<lab14perf[i]<<setw(10)<<lab1rprt[i]
//<<setw(10)<<lab2rprt[i]<<setw(10)<<lab3rprt[i]<<setw(10)<<lab4rprt[i]<<setw(10)<<lab5rprt[i]<<setw(10)<<lab6rprt[i]<<setw(10)<<lab7rprt[i]<<setw(10)<<lab8rprt[i]<<setw(10)<<lab9rprt[i]<<setw(10)<<lab10rprt[i]
//<<setw(10)<<lab11rprt[i]<<setw(10)<<lab12rprt[i]<<setw(10)<<lab13rprt[i]<<setw(10)<<lab14rprt[i]<<setw(10)<<mid[i]<<setw(10)<<project[i]<<setw(10)<<final[i]<<endl<<endl;
//}
}
void bemtsa()
{
	int size=42;
string name[size];
int rollnum[size];
float lab1perf[size];float lab2perf[size];float lab3perf[size];float lab4perf[size];float lab5perf[size];
float lab6perf[size];float lab7perf[size];float lab8perf[size];float lab9perf[size];float lab10perf[size];
float lab11perf[size];float lab12perf[size];float lab13perf[size];float lab14perf[size];

float lab1rprt[size];float lab2rprt[size];float lab3rprt[size];float lab4rprt[size];float lab5rprt[size];
float lab6rprt[size];float lab7rprt[size];float lab8rprt[size];float lab9rprt[size];float lab10rprt[size];
float lab11rprt[size];float lab12rprt[size];float lab13rprt[size];float lab14rprt[size];

float mid[size];float project[size];float final[size];float sum_of_labrprts[size];float sum_of_labperfs[size];
   
int wtsum,wtlab_rprt,wtlab_prf,wtmid,wtproject,wtfinal,roll_num;
   
string line;
ifstream file3("test1.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab7perf[i];
    getline(iss, rand, ',');
    iss >>  lab8perf[i];
    getline(iss, rand, ',');
    iss >>  lab9perf[i];
    getline(iss, rand, ',');
    iss >>  lab10perf[i];
    getline(iss, rand, ',');
    iss >>  lab11perf[i];
    getline(iss, rand, ',');
    iss >>  lab12perf[i];
    getline(iss, rand, ',');
    iss >>  lab13perf[i];
    getline(iss, rand, ',');
    iss >>  lab14perf[i];
    getline(iss, rand, ',');
    iss >> lab1rprt[i];
    getline(iss, rand, ',');
    iss >> lab2rprt[i];
    getline(iss, rand, ',');
    iss >> lab3rprt[i];
    getline(iss, rand, ',');
    iss >> lab4rprt[i];
    getline(iss, rand, ',');
    iss >> lab5rprt[i];
    getline(iss, rand, ',');
    iss >> lab6rprt[i];
    getline(iss, rand, ',');
    iss >> lab7rprt[i];
    getline(iss, rand, ',');
    iss >> lab8rprt[i];
    getline(iss, rand, ',');
    iss >> lab9rprt[i];
    getline(iss, rand, ',');
    iss >> lab10rprt[i];
    getline(iss, rand, ',');
    iss >> lab11rprt[i];
    getline(iss, rand, ',');
    iss >> lab12rprt[i];
    getline(iss, rand, ',');
    iss >> lab13rprt[i];
    getline(iss, rand, ',');
    iss >> lab14rprt[i];
	getline (iss,rand,',');
	iss>>mid[i];
	getline (iss,rand,',');
	iss>>project[i];
	getline (iss,rand,',');
	iss>>final[i];
	getline (iss,rand,','); 				   
    i++;
}
	for (int i=0;i<size;i++)
	{
		sum_of_labrprts[i]=(lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+
		lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]);
		
		sum_of_labperfs[i]=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+
		lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]);
	}
	char check;
	do{
	
	cout<<"\n\n\nEnter The Roll Number Of Student: "; cin>>roll_num;
	
	do{
	
	cout<<"\nEnter The Weightage Of Lab Reports: "; cin>>wtlab_rprt;
	cout<<"\nEnter The Weightage Of Lab Performances: "; cin>>wtlab_prf;
	cout<<"\nEnter The Weightage Of Mids: "; cin>>wtmid;
	cout<<"\nEnter The Weightage Of Project: "; cin>>wtproject;
	cout<<"\nEnter The Weightage Of Finals: "; cin>>wtfinal;

	wtsum=(wtlab_rprt+wtlab_prf+wtmid+wtproject+wtfinal);
	if (wtsum!=100)
	cout<<"\n\nThe Percentage of Totall Marks is not equal to 100... Please Enter Again The Weightages: \n";
	
}while(wtsum!=100);
	
	for(int i=0;i<size;i++)
	{
		char check1,check2;
		float total;
		if (roll_num==rollnum[i])
		{
		
		
			char check;
			sum_of_labrprts[i]=(sum_of_labrprts[i] / 210)*wtlab_rprt;
			sum_of_labperfs[i]= (sum_of_labperfs[i] / 210)*wtlab_prf;
			mid[i]=(mid[i] / 55)*wtmid;
			project[i]=(project[i] / 20)*wtproject;
			final[i]=(final[i] / 50)*wtfinal;
			cout<<"\n\n	Roll Number Of Student: "<<rollnum[i]<<endl;
			cout<<"	Name Of Student: "<<name[i]<<endl;
			cout<<"	Lab Performance Marks: "<<sum_of_labperfs[i]<<" / "<<wtlab_prf<<endl;
			cout<<"	Lab Reports Marks: "<<sum_of_labrprts[i]<<" / "<<wtlab_rprt<<endl;
			cout<<"	Mids Marks: "<<mid[i]<<" / "<<wtmid<<endl;
			cout<<"	Project Marks: "<<project[i]<<" / "<<wtproject<<endl;
			cout<<"	Finals Marks: "<<final[i]<<" / "<<wtfinal<<endl<<endl<<endl;
			
			cout<<"Press \"Y\" to generate Totall Marks OR Press\"N\": "; cin>>check1;
			if (check1=='Y' || check1=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				cout<<"\n\nTotall Marks Out Of 100 = "<<total<<endl<<endl<<endl;
			}
			
			cout<<"Press \"Y\" to generate Grade OR Press\"N\": "; cin>>check2;
			if (check2=='Y' || check2=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				total=(total/wtsum)*100;
				grades(total);
			}
	}
	}
	
	cout<<"\n\n\nPress \"Y\" to Check Data of Another Student OR Press\"N\": "; cin>>check;
	
	}while (check=='y'||check=='Y');
	
	
	
	
	
	
//	for(int i=0;i<size;i++)
//	{
//		cout<<sum_of_labrprts[i]<<"  "<<sum_of_labperfs[i]<<endl<<endl;
//	}
//	











//for(int i=0;i<size;i++)
//{cout<<name[i]<<setw(10)<<rollnum[i]<<setw(10)<<lab1perf[i]<<setw(10)<<lab2perf[i]<<setw(10)<<lab3perf[i]<<setw(10)<<lab4perf[i]<<setw(10)<<lab5perf[i]<<setw(10)<<lab6perf[i]<<setw(10)<<lab7perf[i]
//<<setw(10)<<lab8perf[i]<<setw(10)<<lab9perf[i]<<setw(10)<<lab10perf[i]<<setw(10)<<lab11perf[i]<<setw(10)<<lab12perf[i]<<setw(10)<<lab13perf[i]<<setw(10)<<lab14perf[i]<<setw(10)<<lab1rprt[i]
//<<setw(10)<<lab2rprt[i]<<setw(10)<<lab3rprt[i]<<setw(10)<<lab4rprt[i]<<setw(10)<<lab5rprt[i]<<setw(10)<<lab6rprt[i]<<setw(10)<<lab7rprt[i]<<setw(10)<<lab8rprt[i]<<setw(10)<<lab9rprt[i]<<setw(10)<<lab10rprt[i]
//<<setw(10)<<lab11rprt[i]<<setw(10)<<lab12rprt[i]<<setw(10)<<lab13rprt[i]<<setw(10)<<lab14rprt[i]<<setw(10)<<mid[i]<<setw(10)<<project[i]<<setw(10)<<final[i]<<endl<<endl;
//}
	
	
	
	
	
}
void bemtsb()
{
	int size=35;
string name[size];
int rollnum[size];
float lab1perf[size];float lab2perf[size];float lab3perf[size];float lab4perf[size];float lab5perf[size];
float lab6perf[size];float lab7perf[size];float lab8perf[size];float lab9perf[size];float lab10perf[size];
float lab11perf[size];float lab12perf[size];float lab13perf[size];float lab14perf[size];

float lab1rprt[size];float lab2rprt[size];float lab3rprt[size];float lab4rprt[size];float lab5rprt[size];
float lab6rprt[size];float lab7rprt[size];float lab8rprt[size];float lab9rprt[size];float lab10rprt[size];
float lab11rprt[size];float lab12rprt[size];float lab13rprt[size];float lab14rprt[size];

float mid[size];float project[size];float final[size];float sum_of_labrprts[size];float sum_of_labperfs[size];
   
int wtsum,wtlab_rprt,wtlab_prf,wtmid,wtproject,wtfinal,roll_num;
   
string line;
ifstream file3("test4.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab7perf[i];
    getline(iss, rand, ',');
    iss >>  lab8perf[i];
    getline(iss, rand, ',');
    iss >>  lab9perf[i];
    getline(iss, rand, ',');
    iss >>  lab10perf[i];
    getline(iss, rand, ',');
    iss >>  lab11perf[i];
    getline(iss, rand, ',');
    iss >>  lab12perf[i];
    getline(iss, rand, ',');
    iss >>  lab13perf[i];
    getline(iss, rand, ',');
    iss >>  lab14perf[i];
    getline(iss, rand, ',');
    iss >> lab1rprt[i];
    getline(iss, rand, ',');
    iss >> lab2rprt[i];
    getline(iss, rand, ',');
    iss >> lab3rprt[i];
    getline(iss, rand, ',');
    iss >> lab4rprt[i];
    getline(iss, rand, ',');
    iss >> lab5rprt[i];
    getline(iss, rand, ',');
    iss >> lab6rprt[i];
    getline(iss, rand, ',');
    iss >> lab7rprt[i];
    getline(iss, rand, ',');
    iss >> lab8rprt[i];
    getline(iss, rand, ',');
    iss >> lab9rprt[i];
    getline(iss, rand, ',');
    iss >> lab10rprt[i];
    getline(iss, rand, ',');
    iss >> lab11rprt[i];
    getline(iss, rand, ',');
    iss >> lab12rprt[i];
    getline(iss, rand, ',');
    iss >> lab13rprt[i];
    getline(iss, rand, ',');
    iss >> lab14rprt[i];
	getline (iss,rand,',');
	iss>>mid[i];
	getline (iss,rand,',');
	iss>>project[i];
	getline (iss,rand,',');
	iss>>final[i];
	getline (iss,rand,','); 				   
    i++;
}
	for (int i=0;i<size;i++)
	{
		sum_of_labrprts[i]=(lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+
		lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]);
		
		sum_of_labperfs[i]=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+
		lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]);
	}
	char check;
	do{
	
	cout<<"\n\n\nEnter The Roll Number Of Student: "; cin>>roll_num;
	
	do{
	
	cout<<"\nEnter The Weightage Of Lab Reports: "; cin>>wtlab_rprt;
	cout<<"\nEnter The Weightage Of Lab Performances: "; cin>>wtlab_prf;
	cout<<"\nEnter The Weightage Of Mids: "; cin>>wtmid;
	cout<<"\nEnter The Weightage Of Project: "; cin>>wtproject;
	cout<<"\nEnter The Weightage Of Finals: "; cin>>wtfinal;

	wtsum=(wtlab_rprt+wtlab_prf+wtmid+wtproject+wtfinal);
	if (wtsum!=100)
	cout<<"\n\nThe Percentage of Totall Marks is not equal to 100... Please Enter Again The Weightages: \n";
	
}while(wtsum!=100);
	
	for(int i=0;i<size;i++)
	{
		char check1,check2;
		float total;
		if (roll_num==rollnum[i])
		{
		
		
			char check;
			sum_of_labrprts[i]=(sum_of_labrprts[i] / 210)*wtlab_rprt;
			sum_of_labperfs[i]= (sum_of_labperfs[i] / 210)*wtlab_prf;
			mid[i]=(mid[i] / 55)*wtmid;
			project[i]=(project[i] / 20)*wtproject;
			final[i]=(final[i] / 50)*wtfinal;
			cout<<"\n\n	Roll Number Of Student: "<<rollnum[i]<<endl;
			cout<<"	Name Of Student: "<<name[i]<<endl;
			cout<<"	Lab Performance Marks: "<<sum_of_labperfs[i]<<" / "<<wtlab_prf<<endl;
			cout<<"	Lab Reports Marks: "<<sum_of_labrprts[i]<<" / "<<wtlab_rprt<<endl;
			cout<<"	Mids Marks: "<<mid[i]<<" / "<<wtmid<<endl;
			cout<<"	Project Marks: "<<project[i]<<" / "<<wtproject<<endl;
			cout<<"	Finals Marks: "<<final[i]<<" / "<<wtfinal<<endl<<endl<<endl;
			
			cout<<"Press \"Y\" to generate Totall Marks OR Press\"N\": "; cin>>check1;
			if (check1=='Y' || check1=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				cout<<"\n\nTotall Marks Out Of 100 = "<<total<<endl<<endl<<endl;
			}
			
			cout<<"Press \"Y\" to generate Grade OR Press\"N\": "; cin>>check2;
			if (check2=='Y' || check2=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				total=(total/wtsum)*100;
				grades(total);
			}
	}
	}
	
	cout<<"\n\n\nPress \"Y\" to Check Data of Another Student OR Press\"N\": "; cin>>check;
	
	}while (check=='y'||check=='Y');
	
	
	
	
	
	
//	for(int i=0;i<size;i++)
//	{
//		cout<<sum_of_labrprts[i]<<"  "<<sum_of_labperfs[i]<<endl<<endl;
//	}
//	











//for(int i=0;i<size;i++)
//{cout<<name[i]<<setw(10)<<rollnum[i]<<setw(10)<<lab1perf[i]<<setw(10)<<lab2perf[i]<<setw(10)<<lab3perf[i]<<setw(10)<<lab4perf[i]<<setw(10)<<lab5perf[i]<<setw(10)<<lab6perf[i]<<setw(10)<<lab7perf[i]
//<<setw(10)<<lab8perf[i]<<setw(10)<<lab9perf[i]<<setw(10)<<lab10perf[i]<<setw(10)<<lab11perf[i]<<setw(10)<<lab12perf[i]<<setw(10)<<lab13perf[i]<<setw(10)<<lab14perf[i]<<setw(10)<<lab1rprt[i]
//<<setw(10)<<lab2rprt[i]<<setw(10)<<lab3rprt[i]<<setw(10)<<lab4rprt[i]<<setw(10)<<lab5rprt[i]<<setw(10)<<lab6rprt[i]<<setw(10)<<lab7rprt[i]<<setw(10)<<lab8rprt[i]<<setw(10)<<lab9rprt[i]<<setw(10)<<lab10rprt[i]
//<<setw(10)<<lab11rprt[i]<<setw(10)<<lab12rprt[i]<<setw(10)<<lab13rprt[i]<<setw(10)<<lab14rprt[i]<<setw(10)<<mid[i]<<setw(10)<<project[i]<<setw(10)<<final[i]<<endl<<endl;
//}
	
	
	
}
void grades(float total)
{
	if (total>=90&&total<=100)
	{
	cout<<"\n\t\tAcquired Grade= A\n";
	}
	if (total>=80&&total<=89)
	{
		cout<<"\n\t\tAcquired Grade= B\n";
	}
	if (total>=70&&total<=79)
	{
		cout<<"\n\t\tAcquired Grade= B-\n";
	}
	if (total>=60&&total<=69)
	{
		cout<<"\n\t\tAcquired Grade= C\n";
	}
	if (total>=50&&total<=59)
	{
		cout<<"\n\t\tAcquired Grade= C-\n";
	}
	if (total>=40&&total<=49)
	{
		cout<<"\n\t\tAcquired Grade= D\n";
	}
	if (total>=0&&total<40)
	{
		cout<<"\n\t\tAcquired Grade= F\n";
	}
	
}







//****************************************************************************
void cafet()
{
	char response;
	cout<<"\n\n\n\t\t\t\tAIR UNIVERSITY CAFETERIA\n\n\t\t\t******************************************\n\n\n";
	cout<<"Do you want to enter into Cafe?\n\nIf YES then press Y/y and if NO then press N/n: ";
	cin>>response; 
	
	
	if (response=='Y' || response=='y')
	{
		cafe();
	}
	else
	{
		cout<<"\n\t\tIt seems like you are not a foodie!";
	}
	

	game();
	
}
void cafe ()
{
	char menu,response,check;
	int bill=0,order,check1=0;
	do{
	check1=0;
	
	cout<<"Press M/m to display Menu: ";
	cin>>menu;
	if (menu=='M'||menu=='m')
	{
		cout<<endl;
		cout<<"\tItems\t\t\tPrice\t\t\tItem Number"<<endl<<endl;
		cout<<"\tBiryani\t\t\tRs 100\t\t\t1\n\tSamosa\t\t\tRs 30\t\t\t2\n\tChicken Roll\t\tRs 30\t\t\t3\n\tShawarma\t\tRs 100\t\t\t4"<<endl;
		cout<<"\tJuice\t\t\tRs 20\t\t\t5\n\tBurger\t\t\tRs 150\t\t\t6\n\tSandwitch\t\tRs 150\t\t\t7\n\tLays\t\t\tRs 50\t\t\t8"<<endl;
		cout<<"\tPizza Slice\t\tRs 120\t\t\t9\n\tBrownie\t\t\tRs 80\t\t\t10";
		cout<<endl<<endl<<"Select the Item Number of the desired item to make your order."<<endl<<endl;
		do
		{
			cout<<"Make your Order: ";
			cin>>order;
			cout<<endl<<endl;
			switch (order)
			{	
				case 1:
					{
						cout<<"\tBiryani is of Rs 100";
						bill=bill+100;
						break;
					}
				case 2:
					{
						cout<<"\tSamosa is of Rs 30";
						bill=bill+30;
						break;
					}
				case 3:
					{
						cout<<"\tChicken Roll is of Rs 30";
						bill=bill+30;
						break;
					}
				case 4:
					{
						cout<<"\tShawarma is of Rs 100";
						bill=bill+100;
						break;
					}
				case 5:
					{
						cout<<"\tJuice is of Rs 20";
						bill=bill+20;
						break;
					}
				case 6:
					{
						cout<<"\tBurger is of Rs 150";
						bill=bill+150;
						break;
					}
				case 7:
					{
						cout<<"\tSandwitch is of Rs 150";
						bill=bill+150;
						break;
					}
				case 8:
					{
						cout<<"\tLays is of Rs 50";
						bill=bill+50;
						break;
					}
				case 9:
					{
						cout<<"\tPizza Slice is of Rs 120";
						bill=bill+120;
						break;
					}
				case 10:
					{
						cout<<"\tBrownie is of Rs 80";
						bill=bill+80;
						break;
					}
				default:
					{
						cout<<"\tYou entered wrong item number";
						break;
					}
			}
			cout<<endl<<endl<<"Do you want to choose something else?\n\nIf YES then press Y/y elsewise press N/n: ";
			cin>>response;
			cout<<endl;
		}
		while (response=='Y' || response=='y');
		if (response=='N' || response=='n')
		{
			cout<<endl<<"\tYour total bill is: "<<bill;
		}
	}
	else
	{
	
		cout<<"\n\tYou entered wrong character!\n\n";}
    cout<<"\n\nPress \"N\" to Exit or Press Y to Enter Again: "; cin>>check;
	if (check=='y'||check=='Y')
	check1=1;
}while (check1==1);
	
	
	
	game();
	
}

//****************************************************************************
void game()
{
	char response;
	cout<<"\n\n\n\t\t\t\tAIR UNIVERSITY GAMING ZONE\n\n\t\t\t******************************************\n\n\n";
	cout<<"\t\t\t    \"T I K   T A C   T O E   G A M E\""<<endl;
	cout<<"\n\nPress \"Y\" to Play The Game or Press N: "; cin>>response;
	if (response=='y'||response=='Y')
	{
	
	cout<<"Player1 [X]"<<endl<<"Player2 [O]\n\n\n";
	
	
	
	
    display_table();
    while(gameover())
	{
	player_turn();
	display_table();
	gameover();
	}
	
	if (turn=='X'&&draw==false)
	cout<<"Player2 [O] Has Won The GAME...";
	else if (turn=='O'&&draw==false)
	cout<<"Player1 [X] Has Won The GAME...";
	else
	cout<<"GAME DRAW...";
	//main();
}
else 
cout<<"\n\nSeems Like You have Work Load...";
//main();
}
void display_table()
{
	cout<<endl<<endl;
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<table[0]<<"  |  "<<table[1]<<"  |  "<<table[2]<<"  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<table[3]<<"  |  "<<table[4]<<"  |  "<<table[5]<<"  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<table[6]<<"  |  "<<table[7]<<"  |  "<<table[8]<<"  \n";
	cout<<"\t\t     |     |     \n";
	
	
}
void player_turn()
{
	
	int select,place;
	
	if (turn=='X')
	cout<<"\n\tPlayer1 [X] turn: ";
	if (turn=='O')
	cout<<"\n\tPlayer1 [O] turn: ";
	cin>>select;
	switch(select)
	{
		case 1:
			place=0;
			break;
		case 2:
			place=1;
			break;
		case 3:
			place=2;
			break;
		case 4:
			place=3;
			break;
		case 5:
			place=4;
			break;
		case 6:
			place=5;
			break;
		case 7:
			place=6;
			break;
		case 8:
			place=7;
			break;
		case 9:
			place=8;
			break;
		default:
		cout<<"INVLID OPTION";
		break;
	}
	
	if (turn=='X'&&table[place]!='X'&&table[place]!='O')
	{
	    table[place]='X';
		turn='O';	
		
	}
	else if (turn=='O'&&table[place]!='X'&&table[place]!='O')
	{
		table[place]='O';
		turn='X';	
	}
	else
	{
		cout<<"You Have Entered Input In Already Filled Space...\n	Play Again...!!!";
		 void player_turn();
	}
	
}

bool gameover()
{
	//conditions for wining the game
	if (table[0]==table[1]&&table[0]==table[2] || table[3]==table[4]&&table[3]==table[5]
	 || table[6]==table[7]&&table[6]==table[8] || table[0]==table[3]&&table[0]==table[6]
	 || table[1]==table[4]&&table[1]==table[7] || table[2]==table[5]&&table[2]==table[8]
	 || table[0]==table[4]&&table[0]==table[8] || table[2]==table[4]&&table[2]==table[6])
	return false;
	// this will run till no one has won, or no one
	for (int i=0;i<9;i++)
	if	(table[i]!='X' && table[i]!='O')
	return true;
	//draw
	draw=true;
	return false;
	}

