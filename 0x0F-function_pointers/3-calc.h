#ifndef _HEADER_
#define _HEADER_
/**
<<<<<<< HEAD
 *struct op - ..
 * @op: ...
 * @f: ...
=======
 * struct op - Struct opi
 *
 * @op: The operator
 * @f: The function associated
>>>>>>> 430cf915ac2b835f03781d237a6008284442353b
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
