main:
	g++ main.cpp -o out

install:
	sudo cp out /bin/random-file-chooser

clean:
	rm out

