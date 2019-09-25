all: sumatoria.x datosuma.txt sumatoria.pdf   

sumatoria.x  : sumatoria.cpp
	g++ $< -o $@           #sumatoria.cpp -o sumatoria.x

datosuma.txt : sumatoria.x 
	./sumatoria.x > datosuma.txt   #./$< >$@ #

sumatoria.pdf : plot.gp datosuma.txt
	gnuplot plot.gp    #gnuplot $<

.PHONY: clean
clean:
	rm -f sumatoria.x datosuma.txt sumatoria.pdf 
