
filename=str(input("Bitte geben Sie den Dateinamen ein (ohne Endung): "))
rgbfile =open(filename+".ppm","r")
rgbwerte=str(rgbfile.read())
#print (rgbwerte)

r=[0]*99
g=[0]*99
b=[0]*99
ausgr=open(filename+"R.txt", "w")
ausgg=open(filename+"G.txt", "w")
ausgb=open(filename+"B.txt", "w")
#ausg.write("'")

#Dateianfang "abschneiden"
test=rgbwerte.partition("\n")
rgbwerte=test[2]
test=rgbwerte.partition("\n")
rgbwerte=test[2]
test=rgbwerte.partition("\n")
rgbwerte=test[2]
test=rgbwerte.partition("\n")
rgbwerte=test[2]

#print(test[2])

#Werte in RGB arrays umschreiben
i=0
n=99
for i in range(0,n,1):
	test=rgbwerte.partition("\n")
	r[i]=test[0]
	rgbwerte=test[2]
	print(r[i]+"\n")
	
	test=rgbwerte.partition("\n")
	g[i]=test[0]
	rgbwerte=test[2]
	print(g[i]+"\n")

	test=rgbwerte.partition("\n")
	b[i]=test[0]
	rgbwerte=test[2]
	print(b[i]+"\n")
	
	if i==0:
		ausgr.write(str(r[i])+",")
		ausgg.write(str(g[i])+",")
		ausgb.write(str(b[i])+",")
	if i>=1:
		ausgr.write(str(r[i])+",")
		ausgg.write(str(g[i])+",")
		ausgb.write(str(b[i])+",")


ausgr.close()
ausgg.close()
ausgb.close()