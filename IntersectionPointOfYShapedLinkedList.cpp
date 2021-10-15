// Intersection Point in Y Shapped Linked Lists 
// https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1 

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int n = 0, m = 0;
Node *h1 = head1, *h2 = head2;
while(h1 != NULL){
n++;
h1 = h1->next;
}
while(h2 != NULL){
m++;
h2 = h2->next;
}

h1 = head1;
h2 = head2;

if(n > m){
int k = n-m;
while(k--){
h1 = h1->next;
}
}
else if(n < m){
int k = m-n;
while(k--){
h2 = h2->next;
}
}


while(h1 != NULL && h2 != NULL){
if(h1 == h2){
return (h1->data);
}
h1 = h1->next;
h2 = h2->next;
}
return -1;

}