# Télécom SudParis - Projet Cassiopée 84
Description du projet, de l'architecture générale, et préambules théoriques sur le fonctionnement des composants.

# Configuration du switch PISCES
Le switch PISCES est à installer sur le Raspberry Pi 3 (modèle B).

Dans un premier temps, nous testerons simplement le fonctionnement du switch avec l'environnement de test proposé par les développeurs de PISCES. Clonez le repository `vagrant` du projet `P4-vSwitch` (qui est l'autre nom donné à PISCES) :
```bash
$ cd
$ git clone https://github.com/P4-vSwitch/vagrant.git
$ cd vagrant/
```

Notre programme P4 définit les nouveaux parsers, champs, et actions qui seront utilisables par l'Open vSwitch (OVS). Pour ce faire, il sera compilé en langage C afin qu'il remplace les bouts de code correspondants dans le code source d'OVS. Le compilateur que nous utiliserons est p4c-behavioral. Installez `p4c-behavioral` ainsi que sa dépendance `p4-hlir` :
```bash
$ git clone https://github.com/p4lang/p4-hlir.git
$ cd p4-hlir/
$ sudo python setup.py install
```
```bash
$ cd ..
$ git clone https://github.com/P4-vSwitch/p4c-behavioral.git
$ cd p4c-behavioral/
$ git checkout ovs
$ sudo python setup.py install
```

Nous pouvons désormais installer Open vSwitch 2.4.0 (version utilisée par PISCES). Son code source ayant été modifié par les développeurs de PISCES afin de lui permettre d'implémenter le comportement de n'importe quel programme P4, suivez scrupuleusement les instructions suivantes pour le clonage :
```bash
$ cd ..
$ git clone https://github.com/Johnao/cassiopee.git
```


-- En cours de rédaction --

