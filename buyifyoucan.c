#include <stdio.h>
#include <stdlib.h>
int main()
{
    setbuf(stdout, NULL);
    int con;
    con = 0;
    int account_balance = 1100;
    while(con == 0){
        
        printf("Welcome to the Mall\n");
        printf("We sell costly & dummy items \n");

        printf("\n1. Check Account Balance\n");
        printf("\n2. Buy items\n");
        printf("\n3. Exit\n");
        int menu;
        printf("\n Enter a menu selection\n");
        fflush(stdin);
        scanf("%d", &menu);
        if(menu == 1){
            printf("\n\n\n Balance: %d \n\n\n", account_balance);
        }
        else if(menu == 2){
            printf("Currently for sale\n");
            printf("1. Do you want to by dummy items\n");
            printf("2. Elite items only\n");
            int auction_choice;
            fflush(stdin);
            scanf("%d", &auction_choice);
            if(auction_choice == 1){
                printf("These dummy items cost 900 each, enter desired quantity\n");
                
                int number_items = 0;
                fflush(stdin);
                scanf("%d", &number_items);
                if(number_items > 0){
                    int total_cost = 0;
                    total_cost = 900*number_items;
                    printf("\nThe final cost is: %d\n", total_cost);
                    if(total_cost <= account_balance){
                        account_balance = account_balance - total_cost;
                        printf("\nYour current balance after transaction: %d\n\n", account_balance);
                    }
                    else{
                        printf("Not enough funds to complete purchase\n");
                    }
                                    
                    
                }
                    
                    
                    
                
            }
            else if(auction_choice == 2){
                printf("Elite items cost 100000 dollars, and we only have 1 in stock\n");
                printf("Enter 1 to buy one");
                int bid = 0;
                fflush(stdin);
                scanf("%d", &bid);
                
                if(bid == 1){
                    
                    if(account_balance > 100000){
                      
                        
                        char buf[64]= "Nailed it";
                      
                        printf("YOUR FLAG IS: %s\n", buf);
                        exit(0);
                        }
                    
                    else{
                        printf("\nNot enough funds for transaction\n\n\n");
                    }}

            }
        }
        else{
            con = 1;
        }

    }
    return 0;
}
