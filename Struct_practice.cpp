#include <iostream>
#include <string>
using namespace std;

struct Wine//Practice 1
{
	int WineID;
	int age;
	string name;
	string country;
	int price;
};

struct Customer
{
	int quantity;
	int ClientId;
	int WineID;
};

void printWineInformation(Wine object)
{
	cout << "Age of wine: " << object.age << endl;
	cout << "Name of wine: " << object.name << endl;
	cout << "Country of wine: " << object.country << endl;
	cout << endl;
}
void printCustomerInformation(Customer object)
{
	cout << "Quantity is " << object.quantity << endl;
	cout << "ClientID is " << object.ClientId << endl;
	cout << "WineID is " << object.WineID << endl;
	cout << endl;
}


Wine getNewSurpriseWine()
{
	Wine temp = { 50, 20,"champagne", "Spain", 560 };
	return temp;
}

Customer luckyCustomer(Customer object)
{

	if (object.quantity >= 2)
	{
		Wine luckyWine = getNewSurpriseWine();
		cout << "You are lucky Client! You won a wine" << endl;
		printWineInformation(luckyWine);
		return object;
	}
	else
	{
		cout << "Please buy 2 and more bottles to receive the third surprise Wine" << endl;
	}

}
struct Advert//Practice 2
{
	int count;
	int percent;
	int price;

};

void printAdInfo(Advert object)
{
	cout << "Count is " << object.count << endl;
	cout << "Perscent is " << object.percent << endl;
	cout << "Price is " << object.price << endl;
	int total = object.count * object.percent / 100 * object.price;
	cout << "You earned in total:" << total << endl;
}
struct Fraction//Practice 3
{
	double numerator;
	double denumerator;
};
double mutiplyFractions(Fraction obj1, Fraction obj2)
{
	return (obj1.numerator * obj2.numerator) / (obj1.denumerator * obj2.denumerator);
}

int main()
{

	Wine brut{ 1, 15, "barbaresco", "Italy",670 };//Practice 1
	Wine red;
	red.WineID = 2;
	red.age = 5;
	red.name = "barollo";
	red.country = "France";
	red.price = 700;
	Wine rose = { 3,3, "rosanda", "Ukraine",120 };
	printWineInformation(brut);
	printWineInformation(red);
	printWineInformation(rose);
	Customer one{ 2, 1,2 };
	Customer two{ 3, 2, 3 };
	Customer three{ 1, 3, 1 };
	printCustomerInformation(one);
	printCustomerInformation(two);
	printCustomerInformation(three);
	luckyCustomer(two);

	Advert advert1;//Practice 2
	cout << "Enter count, percent, price:" << endl;
	cin >> advert1.count >> advert1.percent >> advert1.price;
	printAdInfo(advert1);

	Fraction frac1;//Practice 3
	cin >> frac1.numerator >> frac1.denumerator;
	Fraction frac2;
	cin >> frac2.numerator >> frac2.denumerator;
	cout << mutiplyFractions(frac1, frac2);

	return 0;

}
