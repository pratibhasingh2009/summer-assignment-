#include<stdio.h>
int main(){
    int n;
    float balance,amount;
    printf("Enter balance : ");
    scanf("%f",&balance);
    while(n!=4){
        printf("\n ATM Menu \n");
        printf("1. Check balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter choice number : ");
        scanf("%d",&n);

        switch(n){
            case 1:
                    printf("Current Balance = %.2f\n",balance);
                    break;
        
            case 2: 
                    printf("Enter deposit amount : ");
                    scanf("%f",&amount);
                    balance+=amount;
                    printf("Updated Balance = %.2f\n",balance);
                    break;
            case 3:
                    printf("Enter withdrawal amount: ");
                    scanf("%f",&amount);
                    if(amount<=balance){
                       balance-=amount;
                       printf("Updated balance =%.2f\n",balance);
                    }
                    else{
                        printf("Insufficient Balance\n");
                    }
                    break;
            case 4:
                    printf("Thank You!\n");
                    break;
            default:
                    printf("Invalid choice\n");
    } 
  }
  
  return 0;
}