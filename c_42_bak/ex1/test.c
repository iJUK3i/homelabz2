#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <pwd.h>

int main(int argc, char *argv[]) {
	uid_t	uid;
	struct passwd *pwd;

	uid = getuid();
	printf("User's UID is %d.\n", (int)uid);
	if (!(pwd = getpwuid(uid))) {
		printf("nope, cant get it! \n");
		endpwent();
		return 1;
	}
	printf("user home directory is %s\n", pwd->pw_dir);
	endpwent();

	return 0;
}
