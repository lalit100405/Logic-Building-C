#include<stdio.h>
int main()
{
    int firstNumber = 0;
    int secNumber = 0;
    int Result = 0;
    char choice; // युझरची पसंती (A किंवा S) साठवण्यासाठी

    printf("Enter First Number: ");
    scanf("%d", &firstNumber);

    printf("Enter Second Number: ");
    scanf("%d", &secNumber);

    // युझरला विचारूया काय करायचे आहे
    printf("Enter 'A' for Addition or 'S' for Subtraction: ");
    scanf(" %c", &choice); // %c च्या आधी एक स्पेस दिली आहे जेणेकरून एक्स्ट्रा एंटर की (Enter key) स्किप होईल

    // कम्प्युटर इथे निर्णय घेईल
    if(choice == 'A' || choice == 'a') 
    {
        Result = firstNumber + secNumber;
        printf("Addition = %d\n", Result);
    }
    else if(choice == 'S' || choice == 's') 
    {
        Result = firstNumber - secNumber;
        printf("Subtraction = %d\n", Result);
    }
    else 
    {
        printf("Wrong Choice! Please enter A or S.\n");
    }

    return 0;
}
