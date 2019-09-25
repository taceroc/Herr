CXXFLAGS=-O2 -Wall #activar optimizacion nivel 2




all: sumatoria.x datosuma.txt sumatoria.pdf   

sumatoria.x  : sumatoria.cpp
	g++ $(CXXFLAGS) $< -o $@           #sumatoria.cpp -o sumatoria.x

datosuma.txt : sumatoria.x 
	./sumatoria.x > datosuma.txt   #./$< >$@ #

sumatoria.pdf : plot.gp datosuma.txt
	gnuplot plot.gp    #gnuplot $<

.PHONY: clean
clean:
	rm -f sumatoria.x datosuma.txt sumatoria.pdf 
