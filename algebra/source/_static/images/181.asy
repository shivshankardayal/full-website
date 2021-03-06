settings.outformat="pdf";
unitsize(1.5cm);

draw(circle((0, 0), 2.0));
dot((0,0));
label("$O$", (0, -.1), S);
draw((1.414, 1.414) -- (-1.414, 1.414)^^(-1.414, 1.414) -- (-1.414, -1.414)^^(-1.414, -1.414) -- (1.414, -1.414) ^^ (1.414, -1.414) -- (1.414, 1.414));
draw((1.414, 1.414) -- (-1.414, -1.414));
draw((-1.414, 1.414) -- (1.414, -1.414));
label("$A$", (1.414, 1.414), NE);
label("$B$", (-1.414, 1.414), NW);
label("$C$", (-1.414, -1.414), SW);
label("$D$", (1.414, -1.414), SE);
