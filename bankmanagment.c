#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_ACCOUNT 100

struct Account {
    int id;
    char name[50];
    float balance;
};


struct Account accounts[MAX_ACCOUNT];
int accountcount = 0;


int findAccByID(int id){
    for(int i = 0;i < accountcount; i++){
        if(accounts[i].id == id){
            return i;
        }
    }
    return -1;
}   


void  createAccount(){
    
    if(accountcount>=MAX_ACCOUNT){
        printf("U have reach the limit of accounts!");
        return;

    }

    struct Account newAcc;
    
    printf("Enter the ID of the new account: ");
    scanf("%d",&newAcc.id);

    if(findAccByID(newAcc.id)!=-1){
        printf("Account with this ID already exist!\n");
        return;

    }

    printf("Eneter account holder name: \n");
    scanf(" %[^\n]",&newAcc.name);

    printf("Enter initial balance: ");
    scanf("%f", &newAcc.balance);

    if(newAcc.balance<0){
        printf("The balance cant be negative\n");
        return;
    }

    accounts[accountcount] = newAcc;
    accountcount ++;
    printf("Account is created successfully!!!!!");
}

void ShowAccount(){
    if(accountcount==0){
        printf("There is no accounts,please add one");
        return;
    }
    for(int i =0;i<accountcount;i++){
        printf("ID: %d\n",accounts[i].id);
        printf("The holder name: %s\n",accounts[i].name);
        printf("The account balance is: %.2f\n", accounts[i].balance);
    };
} 
void Depostit(){
    int id;
    float amount;

    printf("Enter the ID of the account\n");
    scanf("%d",&id);

    int index = findAccByID(id);
    if( index =-1){
        printf("Account is not found\n");
        return;
    }
    
    printf("Enter the amount u want to add to account\n");
    scanf("%f",&amount);
    
    if(amount<=0){
        printf("The amount u want to add is not valid\n");
        return;
    }
    
    accounts[index].balance += amount;

    printf("Deposit is successfully added!\n");
    printf("The new amount is %.2f",accounts[index].balance);

}
void Withdraw(){
    int id;
    int amount;

    printf("Enter the ID of the account\n");
    scanf("%d",&id);

    int index = findAccByID(id);

    if(index = -1){
        printf("Account is not found\n");
        return;
    }
    
    printf("Enter the amount u want to withdraw from account\n");
    scanf("%f",&amount);

    if(amount<=0){
        printf("The amount should be bigger then 0");
        return;
    }

    if(accounts[index].balance<amount){
        printf("There is not enought money in the account");
        return;
    }

    accounts[index].balance-=amount;

    printf("You successfully withdraw the money:The new balance is: %.2f\n ",accounts[index].balance);

}
void searchAccount(){
    int id;
    
    printf("Enter the ID of the account\n");
    scanf("%d",&id);

    int index = findAccByID(id);

    if(index == -1){
        printf("Account is not found\n");
        return;
    }
    printf("-------------------------------------------------------");
    printf("Account is found!!\n");
    printf("The ID is: %d",accounts[index].id);
    printf("The name of the holder is: %s",accounts[index].name);
    printf("The balance of the account is: %.2f",accounts[index].balance);
    printf("-------------------------------------------------------");
}


int main(){
    int choise;
    printf("Wellcome to the BOGOLIN BANK menu!!!\n");
    printf("-------------------------------------\n");
    printf("1.Create account\n");
    printf("2.Show accountt\n");
    printf("3.Depostit\n");
    printf("4. Withdraw\n");
    printf("5.Search account\n");
    printf("-------------------------------------\n");
    
    printf("Enter whitch opperation u will proseed: \n");
    scanf("%d",&choise);
    
    switch (choise)
    {
    case 1:
        createAccount();
        break;
    case 2:
        ShowAccount();
        break;
    case 3:
        Depostit();
        break;
    case 4:
        Withdraw();
        break;
    case 5:
        searchAccount();
        break;
    default:
        printf("Enter number from 1 to 5");
        break;
    }
    return 0;
}