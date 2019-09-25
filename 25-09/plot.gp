
set term pdf
set output "sumatoria.pdf"
set xlabel "N"
set ylabel "Delta"
plot "datosuma.txt" u 1:2 w l, "" u 1:3 w p