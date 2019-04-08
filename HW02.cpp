#include <iostream> //載入標頭檔 
using namespace std;

int main() {
	int year, month, day;      //建立int變數year,month,day 

	cout << "請輸入出生年份"
		<< endl;
	cin >>  year;       //輸入year變數 
	cout << "請輸入出生月份"
		<< endl;
	cin >>  month;      //輸入month變數  
	cout << "請輸入出生日期"
		<< endl;
	cin >>  day;        //輸入day變數  
    cout << year << "年" << month << "月" << day << "日";
	
	system("pause");

	return 0;
}