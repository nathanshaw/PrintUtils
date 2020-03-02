#ifndef __PRINT_UTILS_H__
#define __PRINT_UTILS_H__

#include <Arduino.h>

void printTab() {
  Serial.print("\t");
}
String frText(int d) {
  if (d == 0) {
    return " Front ";
  } else {
    return " Rear ";
  }
}

void dprintTab(int conditional) {
  Serial.print("\t");
}

///////////////////////////////////////////////////////////
void dprint(int conditional, String data) {
  if (conditional > 0) {
    Serial.print(data);
  }
}

void dprint(int conditional, int data) {
  if (conditional > 0) {
    Serial.print(data);
  }
}

void dprint(int conditional, unsigned long data) {
  if (conditional > 0) {
    Serial.print(data);
  }
}

void dprint(int conditional, uint32_t data) {
  if (conditional > 0) {
    Serial.print(data);
  }
}

void dprint(int conditional, long data) {
  if (conditional > 0) {
    Serial.print(data);
  }
}

void dprint(int conditional, unsigned int data) {
  if (conditional > 0) {
    Serial.print(data);
  }
}

void dprint(int conditional, double data) {
  if (conditional > 0) {
    Serial.print(data);
  }
}
////////////////////////// PrintLn ////////////////////////////////////////

void dprintln(int conditional) {
  if (conditional > 0) {
    Serial.println();
  }
}

void dprintln(int conditional, String data) {
  if (conditional > 0) {
    Serial.println(data);
  }
}

void dprintln(int conditional, int data) {
  if (conditional > 0) {
    Serial.println(data);
  }
}

void dprintln(int conditional, unsigned int data) {
  if (conditional > 0) {
    Serial.println(data);
  }
}

void dprintln(int conditional, double data) {
  if (conditional > 0) {
    Serial.println(data);
  }
}

void dprintln(int conditional, long data) {
  if (conditional > 0) {
    Serial.println(data);
  }
}

void dprintln(int conditional, uint32_t data) {
  if (conditional > 0) {
    Serial.println(data);
  }
}

void dprintln(int conditional, unsigned long data) {
  if (conditional > 0) {
    Serial.println(data);
  }
}

////////////////////////// printing with precision ////////////////////////////////////////

void dprint(int conditional, double data, int precision) {
  if (conditional > 0) {
    Serial.print(data, precision);
  }
}

void dprint(int conditional, float data, int precision) {
  if (conditional > 0) {
    Serial.print(data, precision);
  }
}

void dprintln(int conditional, double data, int precision) {
  if (conditional > 0) {
    Serial.println(data, precision);
  }
}

void dprintln(int conditional, float data, int precision) {
  if (conditional > 0) {
    Serial.println(data, precision);
  }
}


////////////////////////////////////////////////////////////////////

void printTeensyDivideLn(String m) {
  Serial.print("- - - - - - - - - ");Serial.print(m);Serial.println(" - - - - - - - - - -\n");
}

void printMinorDivideLn(String m) {
  Serial.println("----------------- ");Serial.print(m);Serial.println(" --------------------\n");
}

void printDivideLn(String m) {
  Serial.println("||||||||||||||||| ");Serial.print(m);Serial.println(" ||||||||||||||||||||\n");
}

void printTeensyDivideLn() {
  Serial.println("- - - - - - - - - - - - - - - - - - -\n");
}

void printMinorDivideLn() {
  Serial.println("-------------------------------------\n");
}

void dprintMinorDivideLn(uint8_t do_print) {
  if (do_print){
    Serial.println("-------------------------------------\n");
  }
}

void dprintMinorDivide(uint8_t do_print) {
  if (do_print){
    Serial.println("-------------------------------------");
  }
}


void printDivideLn() {
  Serial.println("|||||||||||||||||||||||||||||||||||||\n");
}

void printTeensyDivide() {
  Serial.println("- - - - - - - - - - - - - - - - - - -");
}

void printMinorDivide() {
  Serial.println("-------------------------------------");
}

void printDivide() {
  Serial.println("|||||||||||||||||||||||||||||||||||||");
}
void printMajorDivide(String text) {
  Serial.println("|||||||||||||||||||||||||||||||||||||");
  if (text != "") {
    Serial.println(text);
  } else {
    Serial.println();
  };
  Serial.println("|||||||||||||||||||||||||||||||||||||");
}

void printMajorDivideLn(String text) {
  Serial.println("|||||||||||||||||||||||||||||||||||||");
  if (text != "") {
    Serial.println(text);
  } else {
    Serial.println();
  };
  Serial.println("|||||||||||||||||||||||||||||||||||||\n");
}

void printDouble( double val, unsigned int precision) {
  // prints val with number of decimal places determine by precision
  // NOTE: precision is 1 followed by the number of zeros for the desired number of decimial places
  // example: printDouble( 3.1415, 100); // prints 3.14 (two decimal places)

  Serial.print (int(val));  //prints the int part
  Serial.print("."); // print the decimal point
  unsigned int frac;
  if (val >= 0)
    frac = (val - int(val)) * precision;
  else
    frac = (int(val) - val ) * precision;
  int frac1 = frac;
  while ( frac1 /= 10 )
    precision /= 10;
  precision /= 10;
  while (  precision /= 10)
    Serial.print("0");

  Serial.println(frac, DEC);
}

#endif // __PRINT_UTILS_H__
