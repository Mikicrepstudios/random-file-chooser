main:
	g++ main.cpp -o random-file-chooser

install:
	sudo cp random-file-chooser /bin/random-file-chooser

uninstall:
	sudo rm /bin/random-file-chooser

clean:
	rm random-file-chooser

