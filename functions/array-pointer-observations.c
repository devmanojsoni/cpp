int A[5]={2,4,6,8,10};
int *p=A;
6422300 --Address of the Array A
&A --returns address of the Array
6422296 --Address of the pointer varible
&p --returns the address of the pointer variable
p = 6422300, &p[0] = 6422300
p --returns the address of the zeroth index

-----------Dereferencing Section Starts---------------------
*p = 2, *A = 2

*(A+i) and *(p+i) are all same thing and gives VALUES at indices of an array
*(p+0) = 2, *(A+0) = 2
*(p+1) = 4, *(A+1) = 4
*(p+2) = 6, *(A+2) = 6
*(p+3) = 8, *(A+3) = 8
*(p+4) = 10, *(A+4) = 10

-----------Dereferencing Section Ends---------------------

-----------Address Section Starts---------------------
p = 6422300, A = 6422300

(A+i) and (p+i) are all same thing and gives ADDRESS at indices of an array
(p+0) = 6422300, (A+0) = 6422300
(p+1) = 6422304, (A+1) = 6422304
(p+2) = 6422308, (A+2) = 6422308
(p+3) = 6422312, (A+3) = 6422312
(p+4) = 6422316, (A+4) = 6422316

-----------Address Section Ends---------------------

A[i], i[A], p[i], i[p] are all same thing and gives VALUES at indices of an array
A[0] = 2, 0[A] = 2, p[0] = 2, 0[p] = 2
A[1] = 4, 1[A] = 4, p[1] = 4, 1[p] = 4
A[2] = 6, 2[A] = 6, p[2] = 6, 2[p] = 6
A[3] = 8, 3[A] = 8, p[3] = 8, 3[p] = 8
A[4] = 10, 4[A] = 10, p[4] = 10, 4[p] = 10

p[i] returns value at i th index, whereas &p[i] returns address at that index
p[0] = 2, &p[0] = 6422300
p[1] = 4, &p[1] = 6422304
p[2] = 6, &p[2] = 6422308
p[3] = 8, &p[3] = 6422312
p[4] = 10, &p[4] = 6422316