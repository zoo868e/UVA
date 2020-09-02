# If you want to use this macro/
# echo "source macro.sh" > ~/.bashrc

mk(){
	mkdir -p "$1"
	cd "$1"
	cp ~/Desktop/UVA/main.c main.c
	cp ~/Desktop/UVA/makefile makefile
}
