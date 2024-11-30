# FIlRougeV4_GD3

J'ai essayé de faire de mon mieux.
J'ai reçu de l'aide de la part de Claire pour le C++, je n'aurais pas réussie sans elle. 
Malgré tout, il est possible que git fasse sauter des trucs alors je préfère fournir également un backup en .zip.

Problèmes de sûr:

Il faut refabriquer les nodes "get score" dans les blueprints ItemBonus et ItemMalus. Possible que cela annule l'entière totalité du level design vu que les itembonus et itemmalus seront reset à la position 0 :(. Je n'ai pas trouvé de solutions à ce problème.

J'ai eu l'impression que les cases reculs ont cessés de fonctionner pendant que je m'occupais du LD ? J'ai essayé de recréer une fonction "nombre de cases en moins" mais ça n'a rien fait, je n'arrive pas à voir la différence entre la cell avance et la cell recul qui causerait ce problème.

Pendant que je faisais le LD du plateau, j'ai dû faire une bêtise par ce que quand on lance le jeu de collecte et que l'on revient sur le plateau à la fin du timer, tous les players sont destroyed ? Je ne sais pas ce qui cause ça et ça ne le faisait pas avant.