# Aufgabe 15
## 15.1 Swap mit Referenzen
Es sollen zwei Werte vom Typ double in der main-Funktion vom Benutzer eingegeben werden.
Schreiben Sie eine Funktion, welcher Sie die zwei Werte per Referenz übergeben können. Der Rückgabetyp der Funktion
ist void. Die beiden Werte müssen ausgetauscht werden.

Bildschirmausgabe:
```
1. Wert eingeben: 12.9
2. Wert eingeben: 1.1
1. Wert vor dem Funktionsaufruf: 12.9
2. Wert vor dem Funktionsaufruf: 1.1

1. Wert nach dem Funktionsaufruf: 1.1
2. Wert nach dem Funktionsaufruf: 12.9
```

Zeichnen Sie zuerst ein Struktogramm des Programms.

Tipp: Beachten Sie das entsprechende Kapitel im Skript.

Das Ziel: Funktionsaufrufe mit Referenzen kennen lernen.

## 15.2 Programm analysieren
Analysieren Sie folgendes Programm. überlegen Sie sich, welche Werte die Variablen a und b einnehmen werden.
Schreiben Sie das Resultat auf und überprüfen sie es indem Sie den Kode ausführen.

```
int main(){
    int a(6) , b(2);
    int ∗pa, ∗pb;
    pa = &a;
    ∗pa +=1;
    cout<<"a = ? "<<a<<endl;
    pb = &b;
    ∗pb =∗pb∗∗pa;
    b=b++ + ++a ;
    cout<<"b = ? "<<b<<endl; return 0;
}
```

Das Ziel: Pointer verstehen und Kodesegmente analysieren lernen.

## 15.3 Programm analysieren
Analysieren Sie folgendes Programm. überlegen Sie sich, welche Werte die Variablen, Pointer und Referenzen
einnehmen werden. Schreiben Sie das Resultat auf und überprüfen Sie es indem Sie den Kode ausführen.
```
#include<iostream>
using namespace std;
int main(){
    float ∗f1, f2, f3(1) , ∗f4;
    f2 = 23;
    float &f5 = f2;
    f1 = &f5;
    *f1 = 5;
    f1 = NULL ;
    cout<<"f1: "<<f1<<endl ;
    cout<<"f2: "<<f2<<endl ;
    f4 = f1 = &f2;
    *f1 = 23;
    f4 = &f3;
    f3 = 17;
    cout<<"f1: "<<f1<<endl;
    cout<<"f2: "<<f2<<endl;
    cout<<"f3: "<<f3<<endl;
    cout<<"++*f4: "<<++∗f4<<endl ;
    return 0;
}
```

Tipp: Verwenden Sie eine Tabelle als Hilfsmittel.

Das Ziel: Pointer und Referenzen verstehen und Kodesegmente analysieren lernen.

## 15.4 Kleines EinMalEins mit zweidimensionalem Array - 1.Teil
Verändern Sie die Aufgabe mit dem kleinen EinMalEins so, dass die Werte in einen statischen zweidimensionalen
Array gespeichert werden. Die Ausgabe der Werte muss in einer Funktion erfolgen. übergeben Sie das Array der Funktion.


Das Ziel: Zweidimensionale Arrays kennen lernen.
## 15.5 Kleines EinMalEins mit zweidimensionalem Array - 2.Teil
Verwenden Sie statt dem statischen Array ein dynamisches zweidimensionales Array.
Die Ausgabe der Werte muss in einer Funktion erfolgen. übergeben Sie das Array der Funktion.
Vergessen Sie nicht den Speicher wieder frei zu geben.

Das Ziel: Dynamische zweidimensionale Arrays kennen lernen.

[Hier geht es weiter mit Kapitel 16.](https://github.com/streusselhirni/hfict-he17-oop1-aufgaben/tree/master/kapitel16)
