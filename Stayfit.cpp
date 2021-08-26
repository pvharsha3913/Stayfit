#include<iostream>
#include<windows.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
	int k=1;
	char b[10];
	cout<<"Enter your first name"<<endl;
	 cin>>b; 
	int hr=0,min=0,sec=0;
	
	int wkup,eb,el,ed,wkupm,ebm,elm,edm;
	cout<<"Enter when you have to wake up in hour, min"<<endl;
	cin>>wkup>>wkupm;
		while(wkup>24||wkupm>59){
			cout<<"you have entered wrong time"<<endl;
			cin>>wkup>>wkupm;
		}
		cout<<"Enter when you have to eat breakfast in hour, min"<<endl;
		cin>>eb>>ebm;
		while(eb>24||ebm>59){
			cout<<"you have entered wrong time please re enter it"<<endl;
			cin>>eb>>ebm;
		}
			cout<<"Enter when you have to eat lunch in hour, min"<<endl;
			cin>>el>>elm;
				while(el>24||elm>59){
			cout<<"you have entered wrong time please re enter it"<<endl;
			cin>>el>>elm;
		}
			cout<<"Enter when you have to eat dinner in hour, min"<<endl;
			cin>>ed>>edm;
				while(eb>24||ebm>59){
			cout<<"you have entered wrong time please re enter it"<<endl;
			cin>>ed>>edm;
		}
	system("cls");
	while(k){
	

	
	cout<<"Hi "<<b<<" Welcome to Stay fit"<<endl;
	
	cout<<"Enter current Time in 24hr format"<<endl;
	cout<<"Enter hour"<<endl;
	cin>>hr;
	cout<<"Enter mintues"<<endl;
	cin>>min;
	cout<<"Enter seconds"<<endl;
	cin>>sec;
	if((hr>23||hr<0)||(min>59||min<0)||(sec>59||sec<0)){
		system("cls");
	cout<<"You Have entered wrong time"<<endl;
	k=1;
}
else{
	k=0;
}

}
	
	while(1){
	
	system("cls");
	cout<<"Hi "<<b<<" Welcome to Stayfit"<<endl;
	//cout<<""hr<<":"<<min<<":"<<sec;
	printf("%02d:%02d:%02d",hr,min,sec);
	cout<<endl;
	if(hr%2==0&&hr>wkup&&hr<22&&min==0)
	cout<<"drink water"<<endl;
	if(hr==wkup&&min==wkupm)
	cout<<"wake up and do some excercise"<<endl;
	if(hr==eb&&min==ebm)
	cout<<"Eat break fast"<<endl;
	if(hr==el&&min==elm)
	cout<<"Eat lunch"<<endl;
	if(hr==18&&min==0)
	cout<<"Do some excercise or Stay in sunlight for 15 min"<<endl;
	if(hr==ed&&min==edm)
	cout<<"Eat dinner"<<endl;
	if(hr==22&&min==0)
	cout<<"Go to bed"<<endl;
    sleep(1);
	sec++;
	if(sec>59){
		sec=0;
		min++;
	}
	if(min>59){
		min=0;
		hr++;
	}
	if(hr==24){
		hr=0;
		
	}

}
}
