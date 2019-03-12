# Télécom SudParis - Projet Cassiopée 84
Description du projet, de l'architecture générale, et préambules théoriques sur le fonctionnement des composants.

## Configuration du switch PISCES
Le switch PISCES est à installer sur le Raspberry Pi 3 (modèle B).

Commençons par cloner notre environnement de test, puis installons les dépendances de PISCES.

```bash
$ cd
$ git clone https://github.com/Johnao/cassiopee.git
$ cd cassiopee/simple-test/p4-hlir/
$ sudo python setup.py install
$ cd ../p4c-behavioral/
$ sudo python setup.py install
$ cd ..
```

## Notes personnelles

Open vSwitch v2.4.0 (modifiée)
DPDK 19.02 cross-compilé depuis un Fedora 29 pour une architecture ARMv8.


-- En cours de rédaction --

