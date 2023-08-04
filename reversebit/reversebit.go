package main

func ReverseBits(oct byte) byte {

	var resultat byte

	// On fait une boucle sur 8 parce qu'un octet comporte 8 bit
	for i := 0; i < 8; i++ {
		// On fait un & binaire pour récupérer le dernier bit
		dernierBit := oct & 1
		// On fait un décalage à gauche de 1 du résultat pour garder le dernier bit
		// suivi d'un ou binaire pour l'inserer
		resultat = (resultat << 1) | dernierBit
		// On fait un décalage à droite de 1 sur l'octet initiale pour faire sortir le dernierBit
		oct = (oct >> 1)
	}

	return resultat
}
