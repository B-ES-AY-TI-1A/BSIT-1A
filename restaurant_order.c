#include <stdio.h>
int main()
{

	int available_milktea= 5;
	int available_burger= 5;
	int available_fries= 5;
	float milktea = /*Php*/50;
	float burger = /*Php*/25;
	float fries = /*Php*/25;
	char ans;
	int i;
	float balance;

do{
	int orderNum;
	float amount=0;
	int quantity;
	float item;
	int available_item;
	
	printf("Welcome to our Restaurant\n");
	sleep(1);
	printf("\nHere are our Menu:\n");
	for(i=1;i<=40;i++){
		printf("%c",'_');
	}
	printf("\n");
	printf("%c%6c%12c%21c\n",'|','|','|','|');
	printf("%c%3s%3c%5s%7c%8s%13c\n",'|',"NO",'|',"ITEM",'|',"PRICE",'|');
	
	for(i=1;i<=40;i++){
		if(i==1 || i==7 || i==19 || i==40){printf("%c",'|');}
		else {printf("%c",'_');}
	}
	printf("\n");
	
	printf("%c%6c%12c%21c\n",'|','|','|','|');
	printf("%c%2c%d%c%2c%5s%4s%3c%5s%6.2f%10c\n",'|','|',1,'|','|',"Milk","Tea",'|',"Php",milktea,'|');
	printf("%c%2c%d%c%2c%7s%5c%5s%6.2f%10c\n",'|','|',2,'|','|',"Burger",'|',"Php",burger,'|');
	printf("%c%2c%d%c%2c%6s%6c%5s%6.2f%10c\n",'|','|',3,'|','|',"Fries",'|',"Php",fries,'|');
	
	for(i=1;i<=40;i++){
		if(i==1 || i==7 || i==19 || i==40){printf("%c",'|');}
		else {printf("%c",'_');}
	}
	printf("\n");

	sleep(1);
	
	printf("\nChoose your order.\n");
	sleep(1);
	
	if(available_milktea==0){
		printf("Milktea not available: Try other menu.\n");
		printf("You may choose your order by entering\nthe number before each item.\n");
		do{
			scanf("%d", &orderNum);
			if(!(orderNum==2 || orderNum==3 )){
				printf("Re enter valid value: ");
			}
		}
		while(!(orderNum==2 || orderNum==3));
	}
	else if(available_burger==0){
		printf("Burger not available: Try other menu.\n");
		printf("You may choose your order by entering\nthe number before each item.\n");
		do{
			scanf("%d", &orderNum);
			if(!(orderNum==1 || orderNum==3 )){
				printf("Re enter valid value: ");
			}
		}
		while(!(orderNum==1 || orderNum==3));
	}
	else if(available_fries==0){
		printf("Fries not available: Try other menu.\n");
		printf("You may choose your order by entering\nthe number before each item.\n");
			do{
				scanf("%d", &orderNum);
				if(!(orderNum==2 || orderNum==3 )){
					printf("Re enter valid value: ");
				}
			}
			while(!(orderNum==2 || orderNum==3));
	}
	else
		printf("You may choose your order by entering\nthe number before each item.\n");
			do{
				scanf("%d", &orderNum);
				if(!(orderNum==1 || orderNum==2 || orderNum==3)){
					printf("Re enter valid value: ");
				}
			}
			while(!(orderNum==1 || orderNum==2 || orderNum==3));
	
	sleep(1);
	
	if (orderNum==1){
		printf("\nYou are about to order Milk Tea.\n");
		item=milktea;
		available_item=available_milktea;
		}
	else if (orderNum==2){
		printf("\nYou are about to order Burger.\n");
		item=burger;
		available_item=available_burger;
		}
	else if (orderNum==3){
		printf("\nYou are about to order Fries.\n");
		item=fries;
		available_item=available_fries;
		}
	
	printf("Quantity: \t");
	do{
		scanf("%d", &quantity);
		if(quantity>available_item)
			printf("Your entered quantity exceeds the maximum \nnumber of orders available.\nPlease enter valid value:\t");
		if(quantity<1){
			printf("Re-nter valid value:\t");
		}
	}
	while(quantity<1 || quantity>available_item);
	if(orderNum==1){
		available_milktea-=quantity;
	}
	if(orderNum==2){
		available_burger-=quantity;
	}
	if(orderNum==3){
		available_fries-=quantity;
	}
	
	printf("Enter your payment amount:\tPhp ");
	do{
		scanf("%f",&amount);
		if(amount<quantity*item){
			printf("Ohh,it seems that your payment did not \nmet the minimum amount. \nRe-nter valid amount:\t");
		}
	}
	while(amount<quantity*item);	
	sleep(1);
	printf("Payment Confirmed.\n");
	sleep(1);
	
	for(i=1;i<=40;i++){
		printf("%c",'_');
	}
	printf("\n");
	printf("Transaction Summary\n");
	printf("Order: ");
	if (orderNum==1){
		printf("Milk Tea\n");}
	if (orderNum==2){
		printf("Burger\n");}
	if (orderNum==3){
		printf("Fries\n");}
	printf("Quantity: %d\n", quantity);
	printf("Price:  Php %.2f\n", item*quantity);
	printf("Cash:  Php %.2f\n", amount);
	balance=amount-item*quantity;
	printf("Change: Php %.2f\n",balance);
	for(i=1;i<=40;i++){
		printf("%c",'_');
	}
	printf("\n");
	sleep(1);
	printf("\nTHANK YOU FOR ORDER!\nDo you want to buy again? Press Y.\n");
	scanf("%c",&ans);
	}
	
	while(ans == 'y' || ans == 'Y');
	
	// reveal stocks
	if(ans=='*')
		printf("Remaining stocks:\nMilk Tea: %d\nBurger: %d\nFries: %d\n", available_milktea, available_burger,available_fries);
	return 0;
}
