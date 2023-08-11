#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
char base[97]={'\n','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','`','~','!','@','#','$','%','^','&','(',')','[',']','{','}','\\','|',';',':','\'','"',',','.','<','>','?','+','-','*','/','=','_',' ','\n'};
int  numb[97]={  96,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,  78, 79, 80, 81,  82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,  96};
map<char,int>m;
string Enc,Enc_Key;
void init_map()
{
	for(int i=1;i<=96;i++)
	{
		m[base[i]]=numb[i];
	}
}
string scan()
{
    string res="";
    int ch;
    while(1)
    {
        ch=getchar();
        if(ch==EOF)
        {
        	res.erase(res.size()-1,1);
        	return res;
		}
        res+=char(ch);
    }
    return res;
}
void rgb_init()
{
	HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwInMode, dwOutMode;
	GetConsoleMode(hIn, &dwInMode);
	GetConsoleMode(hOut, &dwOutMode);
	dwInMode |= 0x0200;
	dwOutMode |= 0x0004;
	SetConsoleMode(hIn, dwInMode);
	SetConsoleMode(hOut, dwOutMode);
}
void rgb_set(int wr,int wg,int wb)
{
	printf("\033[38;2;%d;%d;%dm",wr,wg,wb);
}
void rgb_set(int wr,int wg,int wb,int br,int bg,int bb)
{
	printf("\033[38;2;%d;%d;%dm\033[48;2;%d;%d;%dm",wr,wg,wb,br,bg,bb);
}
int main()
{
	//base test
//	for(int i=1;i<=94;i++)
//	{
//		cout<<base[i];
//	}

	//Initialize(forgotten)
	init_map();
	rgb_init(); 
	
	//Encode
	rgb_set(255,255,255);
	cout<<"Encrypt Str(Ctrl+Z to stop)=\n";
	Enc=scan();
	
	rgb_set(82,196,26);
	cout<<"[Notice]:Encrypt String Captured!\n";
	rgb_set(255,255,255);
	
	cout<<"Encrypt Key(Ctrl+Z to stop)=\n";
	Enc_Key=scan();
	
	rgb_set(82,196,26);
	cout<<"[Notice]:Encrypt Key Captured!\n";
	rgb_set(255,255,255);
	
	int len1=Enc.size();
	int len2=Enc_Key.size();
	int Keypos=0;
	
	rgb_set(241,196,15);
	cout<<"[Notice]:Encrypting......\n";
	Sleep(1000);
	rgb_set(82,196,26);
	cout<<"[Notice]:Encrypt Succeeded!\n";
	rgb_set(255,255,255);
	
	cout<<"Encrypted String:\n";
	rgb_set(255,255,255,142,68,173);
	for(int i=0;i<len1;i++)
	{
		int Enccode=m[Enc[i]];
		int Keycode=m[Enc_Key[Keypos]];
		cout<<base[(Enccode+Keycode)%96];
//		cout<<"Debug:"<<Enccode<<' '<<Keycode<<' '<<(Enccode+Keycode)%96<<' '<<base[(Enccode+Keycode)%96]<<'\n';
		Keypos++;
		Keypos%=len2;
	}
	
	rgb_set(255,255,255,0,0,0);
 	return 0;
}

