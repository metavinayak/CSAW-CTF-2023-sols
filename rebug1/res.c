#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00101020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void EVP_MD_CTX_new(void)

{
  EVP_MD_CTX_new();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int EVP_DigestUpdate(EVP_MD_CTX *ctx,void *d,size_t cnt)

{
  int iVar1;
  
  iVar1 = EVP_DigestUpdate(ctx,d,cnt);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

EVP_MD * EVP_md5(void)

{
  EVP_MD *pEVar1;
  
  pEVar1 = EVP_md5();
  return pEVar1;
}



void EVP_MD_CTX_free(void)

{
  EVP_MD_CTX_free();
  return;
}



void __isoc99_scanf(void)

{
  __isoc99_scanf();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int EVP_DigestInit_ex(EVP_MD_CTX *ctx,EVP_MD *type,ENGINE *impl)

{
  int iVar1;
  
  iVar1 = EVP_DigestInit_ex(ctx,type,impl);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int EVP_DigestFinal_ex(EVP_MD_CTX *ctx,uchar *md,uint *s)

{
  int iVar1;
  
  iVar1 = EVP_DigestFinal_ex(ctx,md,s);
  return iVar1;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00101123)
// WARNING: Removing unreachable block (ram,0x0010112f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101164)
// WARNING: Removing unreachable block (ram,0x00101170)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined8 main(void)

{
  EVP_MD *type;
  char str [44];
  uint local_41c;
  byte bvar [16];
  char local_408 [1008];
  EVP_MD_CTX *local_18;
  int i;
  int j;
  
  printf("Enter the String: ");
  __isoc99_scanf(&DAT_00102017,local_408);
  for (j = 0; local_408[j] != '\0'; j = j + 1) {
  }
  if (j == 12) {
    puts("that\'s correct!");
    local_18 = (EVP_MD_CTX *)EVP_MD_CTX_new();
    type = EVP_md5();
    EVP_DigestInit_ex(local_18,type,(ENGINE *)0x0);
    EVP_DigestUpdate(local_18,&DAT_0010202a,2);
    local_41c = 16;
    EVP_DigestFinal_ex(local_18,bvar,&local_41c);
    EVP_MD_CTX_free(local_18);
    for (i = 0; i < 16; i = i + 1) {
      sprintf(str + i * 2,"%02x",(ulong)bvar[i]);
    }
    printf("csawctf{%s}\n",str);
  }
  else {
    printf("that isn\'t correct, im sorry!");
  }
  return 0;
}



void _fini(void)

{
  return;
}



