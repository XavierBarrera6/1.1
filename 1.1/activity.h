
#ifndef ACTIVITY_H
#define ACTIVITY_H


unsigned int sumaIterativa(unsigned int n) {
  int suma = 0;
  for (int i = 0; i <= n; i++) {
    suma = suma + i;
  }
  return suma;
}


unsigned int sumaRecursiva(unsigned int n) {
  if (n <= 1)
    return 1;
  return n + sumaRecursiva(n - 1);
}

unsigned int sumaDirecta(unsigned int n) {
  int suma = (n * (n + 1)) / 2;
  return suma;
}

#endif 
