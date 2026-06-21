//INVENTORY MANANGEMENT SYSTEM
#include <stdio.h>

int main(){
    int item_id[10]={101,102,103,104,105,106,107,108,109,110};
    int quantity[10] ={5,10,15,20,25,30,35,40,45,50};
    float price[10] ={10.5,20.0,15.75,30.0,25.5,40.0,35.25,50.0,45.75,60.0};
    float discount[10] ={0.1,0.15,0.2,0.05,0.1,0.25,0.3,0.2,0.15,0.1};
    char size[10]= {'S','M','L','M','S','M','L','M','S','M'};
    int cart_id[100];
    int cart_quan[100];
    float cart_costs[100];
    int cc = 0;
    int choice, id, quan;
    float cost;

    while(1){
        printf("\n =========MENU=========");
        printf("\n 1.View inv stock");
        printf("\n 2.Purchase items");
        printf("\n 3.Checkout and exit");
        printf("\n Enter choice: ");
        scanf("%d", &choice);
        
        //INVALID CHOICE
        if(choice<1 || choice>3){
            printf("\n Invalid choice. Please try again.\n\n");
            continue;
        }

        //INVENTORY
        if(choice==1){
            printf("\n Item ID \t Quantity \t Price \t\t Discount \t Size");
            for(int i=0; i<10; i++){
                printf("\n %d \t\t %d \t\t %f \t %f \t %c", item_id[i], quantity[i], price[i], discount[i], size[i]);
            }
        }

        //PURCHASE
        else if (choice==2){
            int buy_id, qty;
            int found=0;
            printf("\n Enter item id to buy: ");
            scanf("%d",&buy_id);
            for(int i=0;i<10;i++){
                if(item_id[i]==buy_id){
                    found=1;
                    printf("Item available");
                    printf("\n Enter quantity: ");
                    scanf("%d",&qty);
                    if(qty<=quantity[i]){
                        quantity[i]-=qty;
                        cost=(qty*price[i])-(discount[i]*qty*price[i]);
                        cart_id[cc]=buy_id;
                        cart_quan[cc]=qty;
                        cart_costs[cc]=cost;
                        cc++;
                        printf("\nAdded to cart \nCost: %f", cost);
                    }
                    else{
                        printf("\nInsufficient stock \nAvailable quantity: %d", quantity[i]);
                    }
                    break;
                }
            }
            if (found==0){
                printf("\nInvalid Item ID. Please try again.\n");
            }
        
        }

        //CHECKOUT
        else if(choice==3){
            float total_cost=0;
            printf("\n Cart Summary:");
            printf("\n Item ID \t Quantity \t Cost");
            for(int i=0;i<cc;i++){
                printf("\n %d \t\t %d \t\t %f", cart_id[i], cart_quan[i], cart_costs[i]);
                total_cost+=cart_costs[i];
            }
            printf("\n Total Cost: %f", total_cost);
            printf("\n Thank you for shopping with us!!!\n");
            break;
        }
    
    }
}