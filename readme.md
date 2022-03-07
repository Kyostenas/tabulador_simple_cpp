### USO

incluir archivos .cpp y .h en directorio raiz de proyecto

```
#include <iostream>
#include <vector>
#include "tabular.h"

vector <std::string> encabezados = {
	"encabezado 1", "encabezado 2"
};
vector < vector <std::string> > datos = {
	{"datos 11",       "datos 12"      },
	{"otros datos 21", "otros datos 22"}
}

std::string nueva_tabla = tabular_datos(encabezados, datos);

std::cout << std::endl << nueva_tabla << std::endl;
```

## Resultado

```
>> ejemplo.exe

     encabezado 1      encabezado 2
  ----------------  ----------------
         datos 11          datos 12
   otros datos 21    otros datos 22

>> 
```
