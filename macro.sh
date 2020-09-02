# If you want to use this macro/
# echo "source macro.sh" > ~/.bashrc

mk(){
	mkdir -p "$1"
	cd "$1"
	cp ~/UVA/main.c main.c
	cp ~/UVA/makefile makefile
}
