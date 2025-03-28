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
       while True:
           vertices=int(input("Ingrese minimo 3 vertices: "))
           if vertices<3:
               print("Debe ingresar minimo 3 vertices")
           else:
               break
       for i in range(vertices):
           x=input(f"Vertice {i+1} -x ")
           y=input(f"Vertice {i+1} -y ")
           z=input(f"Vertice {i+1} -z ")
           v.append(f"v {x} {y} {z}")
   elif entrada=="2":
       if not v:
           print("Primero se necesitan los vertices")
           continue
       print("\nCaras")
       for i in range(len(v) - 2):
           c.append(f"f {' '.join(str(i+1) for i in range(len(v)))}")
   elif entrada=="3":
       for vertice in v:
            print(vertice)
       for cara in c:
            print(cara)
   elif entrada == "4":
       break


        
     
  
   
      
           
       
           
       