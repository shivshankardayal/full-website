settings.outformat="pdf";
unitsize(1.7cm);

draw(circle((2, -2), 1));
dot((2, -2));
label(("$C$"), (2, -2.1), SW);
draw((-.1, 0) -- (3, 0), arrow=Arrow());
draw((0, .1) -- (0, -3), arrow=Arrow());
draw((-.1, .1) -- (3.2, -3.2));
label("$P$", (2 - 1/sqrt(2), -2 + 1/sqrt(2)), N);
dot((2 - 1/sqrt(2), -2 + 1/sqrt(2)));
label("$O$", (0, 0), NE);
label("$x$", (3, 0), E);
label("$y$", (0, -3), S);
