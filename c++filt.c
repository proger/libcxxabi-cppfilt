
#include <stdio.h>

// http://libcxxabi.llvm.org/spec.html
// http://gcc.gnu.org/onlinedocs/libstdc++/libstdc++-html-USERS-4.3/a01696.html
extern char* __cxa_demangle(const char* mangled_name, char* output_buffer, size_t* length, int* status);

int
main(int argc, char **argv)
{
	if (argc != 2) return 1;

	size_t len = 0;
	char *buf = NULL;
	int status;

	buf = __cxa_demangle(argv[1], buf, &len, &status);
	printf("%d: %s\n", status, buf);

	return status;
}
