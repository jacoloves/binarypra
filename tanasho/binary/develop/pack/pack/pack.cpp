// pack.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <Windows.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
	if (argc < 2) {
		fprintf(stderr, "$packed.exe <password>\n");
		return 1;
	}
	if (IsDebuggerPresent()) {
		printf("on debugger\n");
		return -1;
	}
	else {
		if (strcmp(argv[1], "xxxxxxxx") == 0) {
			printf("correct!\n");
		}
		else {
			printf("auth error\n");
			return -1;
		}
	}
	getchar();
    return 0;
}

