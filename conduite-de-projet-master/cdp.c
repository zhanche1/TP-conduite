
git init



spi2233@ic2s122-12:~/Bureau/conduite de projet$ git status
Sur la branche master

Validation initiale

Fichiers non suivis:
  (utilisez "git add <fichier>..." pour inclure dans ce qui sera validé)

	tp2.c
	tp3.c

aucune modification ajoutée à la validation mais des fichiers non suivis sont présents (utilisez "git add" pour les suivre)
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git log -1
fatal: votre branche actuelle 'master' ne contient encore aucun commit
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git status
Sur la branche master

Validation initiale

Fichiers non suivis:
  (utilisez "git add <fichier>..." pour inclure dans ce qui sera validé)

	tp2.c
	tp3.c

aucune modification ajoutée à la validation mais des fichiers non suivis sont présents (utilisez "git add" pour les suivre)
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git add tp2.c
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git add tp3.c
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git status
Sur la branche master

Validation initiale

Modifications qui seront validées :
  (utilisez "git rm --cached <fichier>..." pour désindexer)

	nouveau fichier : tp2.c
	nouveau fichier : tp3.c

spi2233@ic2s122-12:~/Bureau/conduite de projet$ git commit -m 'version initiale du projet'
[master (commit racine) 7db35fa] version initiale du projet
 Committer: qi zhang <spi2233@ic2s122-12.univ-lemans.fr>
Votre nom et votre adresse e-mail ont été configurés automatiquement en se
fondant sur votre nom d'utilisateur et le nom de votre machine. Veuillez 
vérifier qu'ils sont corrects. Vous pouvez supprimer ce message en les 
paramétrant explicitement. Lancez les commandes suivantes et suivez les
instruction dans votre éditeur pour éditer votre fichier de configuration :

    git config --global --edit

Après ceci, vous pouvez corriger l'identité utilisée pour cette validation avec :

    git commit --amend --reset-author

 2 files changed, 200 insertions(+)
 create mode 100644 tp2.c
 create mode 100644 tp3.c
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git clone /path/to/repository
fatal: le dépôt '/path/to/repository' n'existe pas
spi2233@ic2s122-12:~/Bureau/conduite de projet$ g edit
g : commande introuvable
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git edit
git : 'edit' n'est pas une commande git. Voir 'git --help'.

Vouliez-vous dire cela ?
	init
spi2233@ic2s122-12:~/Bureau/conduite de projet$ gedit

(gedit:19667): Gtk-WARNING **: Calling Inhibit failed: GDBus.Error:org.freedesktop.DBus.Error.ServiceUnknown: The name org.gnome.SessionManager was not provided by any .service files
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git add command.gedit
fatal: le chemin 'command.gedit' ne correspond à aucun fichier
spi2233@ic2s122-12:~/Bureau/conduite de projet$ command:gedit
command:gedit : commande introuvable
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git add command:gedit
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git status
Sur la branche master
Modifications qui seront validées :
  (utilisez "git reset HEAD <fichier>..." pour désindexer)

	nouveau fichier : command:gedit

spi2233@ic2s122-12:~/Bureau/conduite de projet$ git log
commit 7db35faad3b45e5e93918145057118ffb3c52733
Author: qi zhang <spi2233@ic2s122-12.univ-lemans.fr>
Date:   Thu Oct 13 14:11:37 2016 +0200

    version initiale du projet
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git clone /info/etu/l2spi/spi2233/Bureau/conduite de projet/
Trop d'arguments.

usage : git clone [<options>] [--] <dépôt> [<répertoire>]

    -v, --verbose         être plus verbeux
    -q, --quiet           être plus silencieux
    --progress            forcer l'affichage de l'état d'avancement
    -n, --no-checkout     ne pas créer d'extraction
    --bare                créer un dépôt nu
    --mirror              créer un dépôt miroir (implique dépôt nu)
    -l, --local           pour cloner depuis un dépôt local
    --no-hardlinks        ne pas utiliser de liens durs locaux, toujours copier
    -s, --shared          régler comme dépôt partagé
    --recursive           initialiser les sous-modules dans le clone
    --recurse-submodules  initialiser les sous-modules dans le clone
    --template <répertoire-modèle>
                          répertoire depuis lequel les modèles vont être utilisés
    --reference <dépôt>   dépôt de référence
    --dissociate          utiliser seulement --reference pour cloner
    -o, --origin <nom>    utiliser <nom> au lieu de 'origin' pour suivre la branche amont
    -b, --branch <branche>
                          extraire <branche> au lieu de la HEAD du répertoire distant
    -u, --upload-pack <chemin>
                          chemin vers git-upload-pack sur le serveur distant
    --depth <profondeur>  créer un clone superficiel de cette profondeur
    --single-branch       cloner seulement une branche, HEAD ou --branch
    --separate-git-dir <gitdir>
                          séparer le répertoire git de la copie de travail
    -c, --config <clé=valeur>
                          régler la configuration dans le nouveau dépôt

spi2233@ic2s122-12:~/Bureau/conduite de projet$ git clone Leavesholic@host:/info/etu/l2spi/spi2233/Bureau/conduite de projet/
Trop d'arguments.

usage : git clone [<options>] [--] <dépôt> [<répertoire>]

    -v, --verbose         être plus verbeux
    -q, --quiet           être plus silencieux
    --progress            forcer l'affichage de l'état d'avancement
    -n, --no-checkout     ne pas créer d'extraction
    --bare                créer un dépôt nu
    --mirror              créer un dépôt miroir (implique dépôt nu)
    -l, --local           pour cloner depuis un dépôt local
    --no-hardlinks        ne pas utiliser de liens durs locaux, toujours copier
    -s, --shared          régler comme dépôt partagé
    --recursive           initialiser les sous-modules dans le clone
    --recurse-submodules  initialiser les sous-modules dans le clone
    --template <répertoire-modèle>
                          répertoire depuis lequel les modèles vont être utilisés
    --reference <dépôt>   dépôt de référence
    --dissociate          utiliser seulement --reference pour cloner
    -o, --origin <nom>    utiliser <nom> au lieu de 'origin' pour suivre la branche amont
    -b, --branch <branche>
                          extraire <branche> au lieu de la HEAD du répertoire distant
    -u, --upload-pack <chemin>
                          chemin vers git-upload-pack sur le serveur distant
    --depth <profondeur>  créer un clone superficiel de cette profondeur
    --single-branch       cloner seulement une branche, HEAD ou --branch
    --separate-git-dir <gitdir>
                          séparer le répertoire git de la copie de travail
    -c, --config <clé=valeur>
                          régler la configuration dans le nouveau dépôt

spi2233@ic2s122-12:~/Bureau/conduite de projet$ git commit -m "first commit"
[master ff8fc87] first commit
 Committer: qi zhang <spi2233@ic2s122-12.univ-lemans.fr>
Votre nom et votre adresse e-mail ont été configurés automatiquement en se
fondant sur votre nom d'utilisateur et le nom de votre machine. Veuillez 
vérifier qu'ils sont corrects. Vous pouvez supprimer ce message en les 
paramétrant explicitement. Lancez les commandes suivantes et suivez les
instruction dans votre éditeur pour éditer votre fichier de configuration :

    git config --global --edit

Après ceci, vous pouvez corriger l'identité utilisée pour cette validation avec :

    git commit --amend --reset-author

 1 file changed, 1 insertion(+)
 create mode 100644 command:gedit
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git remote add origin https://github.com/Leavesholic/conduite-de-projet.git
spi2233@ic2s122-12:~/Bureau/conduite de projet$ Leavesholic
Leavesholic : commande introuvable
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git remote add origin https://github.com/Leavesholic/conduite-de-projet.git
fatal: la distante origin existe déjà.
spi2233@ic2s122-12:~/Bureau/conduite de projet$ git push -u origin master
Username for 'https://github.com': Leavesholic
Password for 'https://Leavesholic@github.com': 
Décompte des objets: 7, fait.
Delta compression using up to 4 threads.
Compression des objets: 100% (6/6), fait.
Écriture des objets: 100% (7/7), 2.17 KiB | 0 bytes/s, fait.
Total 7 (delta 0), reused 0 (delta 0)
To https://github.com/Leavesholic/conduite-de-projet.git
 * [new branch]      master -> master
La branche master est paramétrée pour suivre la branche distante master depuis origin.
spi2233@ic2s122-12:~/Bureau/conduite de projet$ 
