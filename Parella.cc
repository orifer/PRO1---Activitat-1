

Parella:Parella() {
	/* Pre: cert */
	/* Post: el resultat es un cami buit (de longitud 0) */
	this->nmembres = 0;
    this->parelles = vector<Parella>(MAX_MEMRES);
}

Parella:Parella(int id) {
	/* Pre: cert */
	/* Post: el resultat es un cami buit (de longitud 0) */
	this->nmembres = 0;
    this->parelles = vector<Parella>(MAX_MEMRES);
    this->id = id;
}

Parella:Parella(int id, Membre &membre1, Membre &membre2) {
	/* Pre: cert */
	/* Post: el resultat es un cami buit (de longitud 0) */
	this->nmembres = 0;
    this->parelles = vector<Parella>(MAX_MEMRES);
    this->id = id;
    this->membres[0] = membre1;
    this->membres[1] = membre2;
}

Parella::~Parella(){
}

void Parella::afegeixMembre(const Membre &membre) {

}


Membre Parella::consultaMembre(const string &dni) {
	Membre mem;
	return mem;
}

int Parella::consultaIdentificador() {

}