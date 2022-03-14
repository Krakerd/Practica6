String = "este es un string de prueba\n0"
print(String)
i = 0
Salida = ""

def esvocal(letra):
    if letra == "a" or letra == "e" or letra == "i" or letra == "o" or letra == "u":
        return True

for i in range(0,100):
    character = String[i]
    if character == "0":
        break;

    if esvocal(character):
        Salida = Salida + character

    Salida = Salida + character

print(Salida)
