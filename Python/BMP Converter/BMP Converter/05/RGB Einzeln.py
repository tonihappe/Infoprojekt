
filename=str(input("Bitte geben Sie den Dateipfad ein (ohne ): "))
rgbfile = open("05.ppm","r")
#rgbfile =open("05","r")
rgbwerte=str(rgbfile.read())
VarName=input("Bitte geben Sie den gewünschten Namen der Variablen ein: ")

#print (rgbwerte)

r=[0]*99
g=[0]*99
b=[0]*99
ausgr=open(filename+"R.txt", "w")
#ausgg=open(filename+"G.txt", "w")
#ausgb=open(filename+"B.txt", "w")
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
		Rstr = ("const int "+VarName+"R {"+str(r[i])+",")
		Gstr=("const int "+VarName+"G {"+str(g[i])+",")
		Bstr=("const int "+VarName+"B {"+str(b[i])+",")
	if (i>=1 and i<=98):
		Rstr=Rstr(str(r[i])+",")
		Gstr=Gstr(str(g[i])+",")
		Bstr=Bstr(str(b[i])+",")
	if i==99:
		Rstr=Rstr(str(r[i])+"};")
		Gstr=Gstr(str(g[i])+"};")
		Bstr=Bstr(str(b[i])+"};")

ausgr.write(Rstr+"\n"+Gstr+"\n"+Bstr)

ausgr.close()
ausgg.close()
ausgb.close()

#TODO
#Letztes komma bei der Ausgabe weg

#IDEEN
#Automatisch im richtigen Format ausgeben --> RGB in einer datei mit int A1_1R, etc gleich so dass man es kopieren kann
#extra datei --> aus datei auslesen (wie eigentlich geplant) --> nichts einfügen, einfach nur neu kompilieren