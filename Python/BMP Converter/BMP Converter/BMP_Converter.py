
##import

#print("Bitte geben Sie den Pfad der 10x10 Pixel großen BMP Datei ein:\n")
#path=str(input())
#eing= open(path,"r")
#print(eing.read())
##abc=Image.open

#eing.read()

import binascii
import PIL

test= PIL.BmpImagePlugin.i8.__str__

filename = "bild.bmp"
with open(filename, "rb") as f:
    content = f.read()




#print("\n\n")
#hexunbearb=str(binascii.hexlify(content))
#hexbearb=hexunbearb
#print(hexbearb)
#ausgabe=open("Ausgabe.dat", "w")
#ausgabe.write(str(hexunbearb))
#ausgabe.close()
#binascii.