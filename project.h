/*
This is a tool for the header file for 
the program's debug and exception handling,
which defines the debug macros and all the functions declared
*/

#ifndef PROJECT
#define PROJECT



char* crStruct(char*,char*,char*);
char* crMain(char*,char*,char*);
char* crTemp(char*,char*,char*,int);
char* getset(char*);
char* addpath(char*);
int crDir(const char*);

/*
This is a function that is used to handle errors and give hints, 
which returns an integer that indicates the error state
*/
int putError(int state){

	switch(state){
		case 0:
			printf("帮助信息：\n");
			break;
		case 1:
			printf("未加入指定的参数!：\n");
			break;
		case 2:
			printf("加入的参数错误!：\n");
			break;
		case 3:
			printf("加入的参数未知！");
			break;
		case 4:
			printf("加入的参数长度错误，不符合要求！\n");
			break;
		case 5:
			printf("内存分配错误，请清理内存并重试！\n");
			return 5;
		case 6:
			printf("创建文件指针失败!\n");
			return 6;
		default:
			printf("未知错误！");
			return 0;
	}
	// -t type<web,console> -m comment -M maven -E encoding -JRE

		printf("\n	用法： newproject -d <项目地址> -p <项目名称> -b <包名> -c <类名>\n\n 实例：\n    	在当前目录(.)下创建hello工程 com.test.demo 包\n");
		printf("\n	newproject -d . -p hello -bcom.test.demo -c Hello\n\n");
		printf(" 参数列表：\n\n");
		printf("	-p <项目名称>\n		这个参数为你设置项目名称。\n\n");
		printf("	-b <包名>\n		这个参数为你项目的初始包名，如果不设置将会创建com.default包。\n\n");
		printf("	-d <项目地址>\n		这个参数为你设置项目地址，如果不设置将会默认在当前目录。\n\n");
		printf("	-c <类名>\n		这个参数为你创建项目时包含的类，如果不设置将会默认为项目名称。\n\n");
		printf("	-h <-help>\n 		显示帮助信息\n\n");
		printf("	-debug\n		显示调试信息\n\n");
		return state;
}

#endif

#ifndef DEBUG_VAR
#define _f(x,y) x##y
#define f(x,y) _f(x,y)
#define _CON(x) ":"#x
#define CON(x,y) _CON(f(x,y)) 
#define DEBUG_VAR(a,b) if(dbg) printf(a _CON(b)"=%s\n",b)


#endif

#ifndef DEBUG_VARLIST
#define DEBUG_VARLIST if(dbg) printf("argv[%d]='%s'leng=%d\n",i,argv[i],(int)strlen(argv[i]))
#endif

#ifndef DEBUG_ARGLEN
#define DEBUG_ARGLEN if(dbg) printf("argc.leng=%d\n",argc)
#endif
