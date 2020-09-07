main: make_subdirs
	@echo Make current directory
	g++ main.cpp -o main -L./Logger/lib/ -llogger

make_subdirs:
	@echo Make subdirectories
	$(MAKE) -C ./Logger

clean: clean_subdirs
	@echo Cleaning current directories
	rm -f main

clean_subdirs:
	@echo Cleaning subdirectories
	$(MAKE) -C ./Logger clean


