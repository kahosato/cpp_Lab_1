// Day2_ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Shop.h"
#include "DVD.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Shop shop;
	shop.AddBook("The Lovely Bones", 699, 217);
	shop.AddBook("The Boy In the Striped Pyjamas", 599, 187);
	shop.AddDVD("Enter the Dragon", 1499, 121, DVD::PAL);
	shop.AddDVD("Top Cat", 899, 47, DVD::NTSC);
	shop.AddCD("The Defamation of Strickland Banks", 1299, 90, 12);
	shop.AddCD("Bonkers", 1399, 82, 10);


	// Now show the taxed prices
	shop.ShowTaxedPrices();

	//SaleableItem saleableItem;
	//saleableItem.SetTitle("Lord Of The Flies");
	return 0;
}

