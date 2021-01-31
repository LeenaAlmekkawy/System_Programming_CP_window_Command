# include "../include/my-cp.h"
int copy (int argc, char** argv)
{
	 if(argc <3){

		return 1;
	}

	FILE* srcFilePtr=fopen(argv[1], "rb");
	if(srcFilePtr==NULL){
		return 2;
	}

	FILE* dstFilePtr=fopen(argv[2], "wb");
	if(dstFilePtr==NULL){
		return 3;
	}

     char buff[1];
     while(fread(buff, sizeof(char), 1, srcFilePtr) > 0){
     	 fwrite(buff, sizeof(char), 1, dstFilePtr);
     }

     fclose(srcFilePtr);
     fclose(dstFilePtr);
}