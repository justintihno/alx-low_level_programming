#include <unistd.h>

int main(int argc, char *argv[])

{
	const char *msg = "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, msg, sizeof(msg));
	return 1;

}
