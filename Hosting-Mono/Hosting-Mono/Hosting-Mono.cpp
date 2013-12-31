// Hosting-Mono.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <mono/jit/jit.h>
#include <mono/metadata/assembly.h>



int _tmain(int argc, _TCHAR* argv[])
{


	printf("hello mono");

	MonoDomain *domain;

	domain = mono_jit_init(domain_name);


	getchar();
	return 0;
}

