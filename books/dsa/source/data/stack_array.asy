import fontsize;
import animation;

animation a;

defaultpen(fontsize(16pt));
defaultpen(linewidth(1));

draw((-2.5cm, .5cm) -- (-1.5cm, .5cm) -- (-1.5cm, 1.5cm) -- (-2.5cm, 1.5cm));
a.add();

a.movie(BBox(0.0cm), loops=-1, delay=250);
