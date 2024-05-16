#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node {
    //creating a node to store the actual data and the address of its next adjacent node using pointers
    int info;
    struct node *next; //creating a reference link of the next pointer
};
*start, *last, *fresh; 

struct node *create() {
    struct node *newnode;
    newnode = (struct node*)malloc (sizeof(struct node)); //created a newnode which will return a pointer whose data type would be struct node
    //sizeof asked the size we want to assign into node explictly
    //abhi yahan sirf memory block ki dynamic allocation hui hai , no values assigned , will ask from the user 
    printf("Enter the value:");
    scanf ("%d", &newnode->info); //note:- we can`t directly access the member functions so using *pointers -> or newnode  ki address ab info named int var ko mil gyi 
    newnode ->next = NULL;
    return (newnode);
}
/*algo is: if newnode has no next value means the newnode itself is the lastly entered val and the firstly as well then return the ptr itself
otherwise if its exists then move ahead for traversal*/
void add_begining() {
    fresh = create();//calling the create function to create a newnode 
    if(start == NULL) {
        start= fresh;
        last=fresh;
    }
    else {
     fresh->next= start;
        start= fresh;
    }
}
void add_last() {
    fresh= create(); 
    if(start==NULL) {
        start = fresh;
        last = fresh;
    }
    else {
        last->next= fresh;
        last = fresh;

    }
}
 