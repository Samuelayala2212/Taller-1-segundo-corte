v=[]
c=[]
while True:
   print("1 = Vertices")
   print("2 = Caras")
   print("3 = Imprimir")
   print("4 = Salir")
   entrada=input("Elija una opción: ")
   if entrada == "1":
       print("Vertices")
       vertices=int(input("Ingrese la cantidad de vertices: "))
       for i in range(vertices):
           x=input(f"Vertice {i+1} -x ")
           y=input(f"Vertice {i+1} -y ")
           z=input(f"Vertice {i+1} -z ")
           v.append(f"v {x} {y} {z}")
   elif entrada=="2":
       print("Caras")
       print(v)
           
       