settings.outformat="pdf";
unitsize(1cm);

draw((-2, 0) -- (2, 0)^^(-2, 0)--(0, 2)^^(0, 2) -- (2,0));
label("$A(z_1)$", (-2, 0), S);
label("$B(z_2)$", (2, 0), S);
label("$C(z_3)$", (0, 2), N);
draw((-2, -3) -- (2, -3)^^(-2, -3)--(0, -1)^^(0, -1) -- (2,-3));
label("$P({z^\prime}_1)$", (-2, -3), S);
label("$Q({z^\prime}_2)$", (2, -3), S);
label("$R({z^\prime}_3)$", (0, -1), N);
