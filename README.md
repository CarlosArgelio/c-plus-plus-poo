# Dockerfile

Para usar este Dockerfile, cree un archivo llamado Dockerfile en la raíz de su proyecto. Luego, ejecute el siguiente comando para crear la imagen:

```
docker build -t <nombre de imagen> .
```

Por ejemplo, si el nombre de la imagen es cpp-project, el comando sería el siguiente:

```
docker build -t cpp-project .
```

Una vez que haya creado la imagen, puede ejecutarla con el siguiente comando:

```
docker run -it <nombre de imagen>
```

Por ejemplo, para ejecutar la imagen cpp-project, el comando sería el siguiente:

```
docker run -it cpp-project
```

Este comando iniciará un contenedor con la imagen cpp-project. El contenedor ejecutará el programa C++ y mostrará la salida en la terminal.

Aquí hay un ejemplo de un proyecto C++ que puede usar con este Dockerfile:

**C++**
```
#include <iostream>

int main() {
  std::cout << "Hello, world!" << std::endl;
  return 0;
}
```


Para compilar este proyecto, use el siguiente comando:

g++ main.cpp -o main
Luego, puede crear la imagen Docker con el siguiente comando:

docker build -t cpp-project .
Finalmente, puede ejecutar la imagen Docker con el siguiente comando:

docker run -it cpp-project
Esto imprimirá la siguiente salida en la terminal:

Hello, world!
Puede personalizar este Dockerfile para adaptarlo a sus necesidades. Por ejemplo, puede cambiar la imagen base, instalar más paquetes o compilar el código fuente con diferentes opciones.
