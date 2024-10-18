main:
	g++ -fstack-protector main.cpp -o random-file-chooser -Wl,-z,relro -Wl,-z,now

install:
	sudo cp random-file-chooser /bin/random-file-chooser

uninstall:
	sudo rm /bin/random-file-chooser

clean:
	rm random-file-chooser

