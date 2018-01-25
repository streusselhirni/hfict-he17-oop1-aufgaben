# Aufgabe 16

## 16.1 Struktur die einen Bruch enthält - 1. Teil

Schreiben Sie ein Programm, welches eine Struktur (struct) enthält.
Die Daten eines Bruches sollen darin gespeichert werden. Die Daten werden
in der `main`-Funktion vom Benutzer eingelesen und müssen nach folgender
Vorgabe verändert werden:

* Der Bruchstrich muss durch ein Multiplikationszeichen ersetzt werden
* der Nenner muss durch den Zaähler und der Zaähler durch den Nenner ersetzt werden

Bildschirmausgabe:
```
Den Zähler eingeben: 1
Den Nenner eingeben: 5

Eingegebener Wert: 1/5

Ausgabe nach der Berechnung: 5*1
```

Das Ziel: struct kennen lernen.

## 16.2 Struktur die einen Bruch enthäalt - 2. Teil (Funktionen)
Die Veränderung der Daten (Zähler, Nenner, Operator) soll nun in eine
Funktion ausgelagert werden. Diese Funktion besitzt den Rückgabetyp void.
Die Struktur muss per Referenz übergeben werden.

Tipp: Der Name der Funktion darf auf keinen Fall die Zeichenkette `struct` 
enthalten, da es sonst Probleme beim Linken des Programmes geben könnte.

Das Ziel: struct in Kombination mit Funktionen kennen lernen.

## 16.3 Struktur die einen Bruch enthäalt - 3. Teil (Pointer)
Verwenden Sie für den 3. Teil dieser Aufgabe wieder die `main`-Funktion
aus dem 1. Teil. Erzeugen Sie einen Pointer der Struktur.
Dieser Pointer soll auf ein initialisiertes Strukturobjekt zeigen.
Nachdem Sie die Adresszuweisung durchgeführt haben, dürfen Sie nur noch
via Pointervariable auf die Strukturelemente zugreifen.

Tipp: Verwenden Sie den Pfeiloperator (->) zum lösen dieser Aufgabe.

Das Ziel: `struct` in Kombination mit Pointern kennen lernen.

[Hier geht es weiter mit Kapitel 17.](https://github.com/streusselhirni/hfict-he17-oop1-aufgaben/tree/master/kapitel17)