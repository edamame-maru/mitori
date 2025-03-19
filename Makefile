mitori: mitori.c
	gcc mitori.c -Wall -Wextra -pedantic -Werror -o mitori

install: mitori
	cp mitori /usr/local/bin/mitori

uninstall:
	rm /usr/local/bin/mitori

clean:
	rm mitori
