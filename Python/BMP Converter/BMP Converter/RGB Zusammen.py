

rgbfile =open("bild.ppm","r")
rgbwerte=str(rgbfile.read())
#print (rgbwerte)

r=[0]*99
g=[0]*99
b=[0]*99
ausg=open("Ausgabe.txt", "w")
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
		ausg.write("'"+str(r[i])+","+str(g[i])+","+str(b[i])+"'")
	if i>=1:
		ausg.write(",'"+str(r[i])+","+str(g[i])+","+str(b[i])+"'")


ausg.close()