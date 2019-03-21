#Dateiname wird eingegeben, Datei wird geladen und als String gelesen

filename=str(input("Bitte geben Sie den Dateipfad ein (ohne Dateiendung): "))
rgbfile = open(filename+".ppm","r")
rgbwerte=str(rgbfile.read())

#Name der Variablen in der Datei und der Ausgabedatei wird festgelegt
VarName=str(input("Bitte geben Sie den gewünschten Namen der Variablen ein: "))

#deklarieren der Arrays (in Python Listen) der einzelnen Farbwerte
r=[0]*100
g=[0]*100
b=[0]*100

#Oeffnen der Ausgabedatei
ausg=open(VarName+".txt","w")

#Dateianfang abschneiden
part=rgbwerte.partition("\n")
rgbwerte=part[2]

part=rgbwerte.partition("\n")
rgbwerte=part[2]

part=rgbwerte.partition("\n")
rgbwerte=part[2]

part=rgbwerte.partition("\n")
rgbwerte=part[2]

#Werte in RGB arrays umschreiben
i=0
n=100
for i in range (0,n,1):
	#Aufnehmen und abschneiden der einzelnen Farbwerte (bei jedem Durchgang der for Schleife wird 1 Pixel umgewandelt)
	part=rgbwerte.partition("\n")
	r[i]=part[0]
	rgbwerte=part[2]

	part=rgbwerte.partition("\n")
	g[i]=part[0]
	rgbwerte=part[2]

	part=rgbwerte.partition("\n")
	b[i]=part[0]
	rgbwerte=part[2]

	#Deklarieren der und Anhaengen an die einzelnen Strings f�r die Ausgabe
	#Bei der ersten Durchfuehrung (i==0) wird der Anfang geschrieben, damit man den gesamten Dateiinhalt nur noch kopieren muss
	if i==0:
		Rstr=("const int "+VarName+"R[] PROGMEM = {"+str(r[i])+",")
		Gstr=("const int "+VarName+"G[] PROGMEM = {"+str(g[i])+",")
		Bstr=("const int "+VarName+"B[] PROGMEM = {"+str(b[i])+",")
	
	#Nun werden nur noch die jeweiligen Werte angeh�ngt
	if (i>=1 and i<=98):
		Rstr=Rstr+str(r[i])+","
		Gstr=Gstr+str(g[i])+","
		Bstr=Bstr+str(b[i])+","
	
	if (i==99):
		Rstr=Rstr+str(r[i])
		Gstr=Gstr+str(g[i])
		Bstr=Bstr+str(b[i])
	
#Schreiben in die Ausgabedatei mit "};" da dies fuer den Arduino notwendig ist
ausg.write(Rstr+"};\n"+Gstr+"};\n"+Bstr+"};")
print("\n\nUmwandlung erfolgreich")
ausg.close()
xyz=input()#input damit sich das Programm nicht sofort wieder schliesst