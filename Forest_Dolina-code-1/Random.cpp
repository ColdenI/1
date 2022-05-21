// подключить файлы в которых ииспользуются функции
#include "ForestDolina.h"
#include <ctime>
#include <cstdlib>  
#include <iostream>


int random  (int from, int before) {
	srand(time(NULL)*rand());
int a = 0;
int i = 0;

if (from > before) {
//erorr
	return 0;
	}

if (before > 32000) {
//erorr
	return 0;
}

while (i != 1) {
	a = 0;
	if (before <= 10) {
		a = rand() % 10;
	}
	else if (before <= 100) {
		a = rand() % 100;       
	}
	else if (before <= 1000) {
		a = rand() % 1000;
	}
	else if (before <= 10000) {
		a = rand() % 10000;
	}
	else {
		a = rand();
	}

	if (a >= from && a <= before) {
		return a;
	}
	else {
		i = 0;
	}
}
}
int random_ (int from, int before) {
	srand(time(NULL)*rand());
	int a = 0;
	int i = 0;

	if (from > before) {
//erorr
		return 0;
	}

	if (before > 32000) {
//erorr
		return 0;
	}

	while (i != 1) {
		a = 0;
		if (before < 10) {
			a = rand() % 10;
		}
		else if (before < 100) {
			a = rand() % 100;
		}
		else if (before < 1000) {
			a = rand() % 1000;
		}
		else if (before < 10000) {
			a = rand() % 10000;
		}
		else {
			a = rand();
		}

		if (a > from && a < before) {
			return a;
		}
		else {
			i = 0;
		}
	}
}
int random  (int from, int before, int iskl) {
	srand(time(NULL) * rand());
	int a = 0;
	int i = 0;

	if (from > before) {
//erorr
		return 0;
	}

	if (before > 32000) {
//erorr
		return 0;
	}

	while (i != 1) {
		a = 0;
		if (before <= 10) {
			a = rand() % 10;
		}
		else if (before <= 100) {
			a = rand() % 100;
		}
		else if (before <= 1000) {
			a = rand() % 1000;
		}
		else if (before <= 10000) {
			a = rand() % 10000;
		}
		else {
			a = rand();
		}

		if (a >= from && a <= before && a != iskl) {
			return a;
		}
		else {
			i = 0;
		}
	}
}
int random_ (int from, int before, int iskl) {
	srand(time(NULL) * rand());
	int a = 0;
	int i = 0;

	if (from > before) {
//erorr
		return 0;
	}

	if (before > 32000) {
//erorr
		return 0;
	}

	while (i != 1) {
		a = 0;
		if (before < 10) {
			a = rand() % 10;
		}
		else if (before < 100) {
			a = rand() % 100;
		}
		else if (before < 1000) {
			a = rand() % 1000;
		}
		else if (before < 10000) {
			a = rand() % 10000;
		}
		else {
			a = rand();
		}

		if (a > from && a < before && a != iskl) {
			return a;
		}
		else {
			i = 0;
		}
	}
}
int random() {
	srand(time(NULL) * rand());
	return rand();
}

int grab(int le_prot, int diffil) {
	switch (diffil){
		case 1:
			if (random(1, 30) == 1) {
				if (le_prot == 1) {
					if (random(1, 100) > 30) {
						return random(1, 80) * 10;
					}else return 0;
				}else if (le_prot == 2) {
					if (random(1, 100) > 40) {
						return random(1, 80) * 10;
					}
					else return 0;
				}else if (le_prot == 3) {
					if (random(1, 100) > 60) {
						return random(1, 80) * 10;
					}
					else return 0;
				}else if (le_prot == 4) {
					if (random(1, 100) > 70) {
						return random(1, 80) * 10;
					}
					else return 0;
				}return random(1, 80) * 10;
			}
			else return 0;
		break;
		case 2:
			if (random(1, 25) == 1) {
				if (le_prot == 1) {
					if (random(1, 100) > 30) {
						return random(10, 150) * 10;
					}
					else return 0;
				}
				else if (le_prot == 2) {
					if (random(1, 100) > 40) {
						return random(10, 150) * 10;
					}
					else return 0;
				}
				else if (le_prot == 3) {
					if (random(1, 100) > 60) {
						return random(10, 150) * 10;
					}
					else return 0;
				}
				else if (le_prot == 4) {
					if (random(1, 100) > 70) {
						return random(10, 200) * 10;
					}
					else return 0;
				}else return random(10, 150) * 10;
			}
			else return 0;
		break;
		case 3:
			if (random(1, 10) == 1) {
				if (le_prot == 1) {
					if (random(1, 100) > 30) {
						return random(25, 300) * 10;
					}
					else return 0;
				}
				else if (le_prot == 2) {
					if (random(1, 100) > 40) {
						return random(25, 300) * 10;
					}
					else return 0;
				}
				else if (le_prot == 3) {
					if (random(1, 100) > 60) {
						return random(25, 300) * 10;
					}
					else return 0;
				}
				else if (le_prot == 4) {
					if (random(1, 100) > 70) {
						return random(25, 300) * 10;
					}
					else return 0;
				}else return random(25, 300) * 10;
			}
			else return 0;
		break;
	}



}