/* 
 *  We have to declare these headers because the functions are declared 
 *  out of order.   The firmware was originally written using the Arduino
 *  IDE which doesn't care about the order functions are declared.
 */
void process_string(char instruction[],int size);
int scan_float(char *str,float *valp,unsigned int *seen,unsigned int flag);
int scan_long(char *str,long *valp,unsigned int *seen,unsigned int flag);
int scan_int(char *str,int *valp,unsigned int *seen,unsigned int flag);
void FlushSerialRequestResend();
