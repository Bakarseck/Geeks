package main

import "os"

/*
	Doop consiste à prendre en arguments une chaine de caractère bien formaté dans ce format
	[nbr1] operateur [nbr2]
	Effectuer le calcul si l'operateur est bon
	Afficher le résultat dans la sortie standard
	Etapes :
	1. Recupérer les arguments
	2. Vérifier si les arguments sont bons sinon on affiche rien et on quitte le programme
	3. On fait un Atoi pour transformer les nombres en int
	4. On effectue les calculs
	5. On fait un Itoa pour pouvoir utiliser la fonction os.Stdout.WriteString() qui doit prendre un string et après on l'affiche dans la sortie standard
*/

func main() {
	// On récupère les arguments
	arguments := os.Args[1:]

	// Si le nombre d'arguments est different de 3, on quitte
	if len(arguments) != 3 {
		return
	}

	nbr1 := Atoi(arguments[0])
	operateur := arguments[1]
	nbr2 := Atoi(arguments[2])

	resultat := 0

	if operateur == "+" {
		resultat = nbr1 + nbr2
	} else if operateur == "-" {
		resultat = nbr1 - nbr2
	} else if operateur == "*" {
		resultat = nbr1 * nbr2
	} else if operateur == "/" {
		if nbr2 == 0 {
			os.Stdout.WriteString("Impossible")
			return
		} else {
			resultat = nbr1 / nbr2
		}
	}

	os.Stdout.WriteString(Itoa(resultat))

}

/*
	La fonction Atoi prend en entrée une chaîne de caractère et après retourne un int
*/

func Atoi(str string) int {
	signe := 1
	resultat := 0

	// Si le premier caractère est -
	if str[0] == '-' {
		// alors str prend tous les autres caractères sauf s[0]
		str = str[1:]
	}

	// On parcourt la chaine tout en vérifiant si tous les caractères sont bons

	for i:=0; i < len(str); i++ {
		// On vérifie si str[i] est compris entre 0 et 9
		if str[i] >= '0' && str[i] <= '9' {
			// On insere l'element et après on multiplie le résultat par 10 pour decaler un peu à gauche
			resultat = int(str[i] - '0') + resultat*10
		} else {
			return 0
		}
	}

	return resultat * signe
}

/*
	La fonction Itoa prend en entrée un int et après retourne un string
*/

func Itoa(n int) string {
	signe := ""
	resultat := ""

	// Si le nombre est négatif
	if n < 0 {
		n = -n
		signe = "-"
	}

	for n != 0 {
		// On insere le premier element et a chaque fois on ajoute le résultat devant
		resultat = string(n%10 + '0') + resultat
		n /= 10
	}

	// On concatène signe + resultat
	return signe + resultat
}