### USO

```
vector <string> encabezados = {
	"encabezado 1", "encabezado 2"
};
vector < vector <string> > datos = {
	"datos 11", "datos 12",
	"otros datos 21", "otros datos 22"
}

vector <string> nueva_tabla = tabular_datos(encabezados, datos);

cout << endl << nueva_tabla << endl;
```

## Resultado

```
>> ejemplo.exe

     encabezado 1      encabezado 2
  ----------------  ----------------
	   datos 11	         datos 12
   otros datos 21	   otros datos 22

>> 
```