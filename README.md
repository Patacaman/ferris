## **Info General**
Funciona con el teclado US internacional para poder sacar partido a la capa TILDE, de modo que AltGr + A = Á y que AltGr + N = Ñ

### Otras funcionalidades
CapsWord activado al pulsar simultaneamente ambos Shifts
#### Tap Dances:
- Double tap "?" to send "¿".
- Double tap "!" to send "¡".
- Double tap "/" to send "\".
- Double tap "," to send ";".
- Double tap "." to send ":".

##### Mod-Tap:
- Hold down the Enter thumb key to switch to the NAV layer
- Hold down the Space thumb key to switch to the NUM layer
- Hold down the BackSpace thumb key to switch to the FUN layer
- Hold down the LOWER and RAISE layer key to switch to the ADJUST layer
- From ADJUST Layer you can set the layers Mouse,  or Lower (Numpad + Nav)
  
Los Modificadores se ubican con Mod-Tap en la Homerow siguiendo el patron GASC(GUI, ALt, Shift, Ctrl) de meñique a indice. 
Se ha ajustado los tiempos a 300 de Mod-Tap para evitar pulsar Modificadores por error. 

#### Layers
Los cambios de capa son MO principalmente, mientras se mantenga pulsado permanecemos en la capa indicada. Para facilitar el uso del numpad o de la cruceta, desde TILDE podemos establecer las capas indicadas hasta que pulsemos To_Base. 


### Flashing
Para la compilación se ejecutaran los siguientes comandos sobre la mitad correspondiente, siendo keymap_name el nombre la carpeta con la configuracion deseada en la ruta qmk_firmware\keyboards\ferris\keymaps
qmk flash -kb ferris/sweep -km keymap_name -bl avrdude-split-right
qmk flash -kb ferris/sweep -km keymap_name -bl avrdude-split-left

A diferencia de la configuracion habitual de Ferris, en lugar de un fichero JSON se utiliza un keymap.c. 




## **Layers**

#### 0. **BASE (Canaria)**

```text
  ,--------------------------------------------.      ,--------------------------------------------.
  |      W |      L |      Y |      P |      B |      |      F |      J |      O |      U |      ? |
  |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
  |  GUI_C |  ALT_R |  SFT_S |  CTL_T |      D |      |      M |  CTL_N |  SFT_E |  ALT_I |  GUI_A |
  |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
  |      Q |      Z |      V |      D |      K |      |      X |      H |      / |      , |      . |
  `--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------'
                             |  TILDE |  Space |      |  Enter | BackSP |
                             |        |  [Num] |      |  [Nav] |  [Fun] |
                             `--------+--------'      `--------+--------'
```

#### 0. **TILDE**

```text
  ,--------------------------------------------.      ,--------------------------------------------.
  |        |        |        |        |        |      |        |        |     Ó  |     Ú  |     Ü  |
  |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
  |     Ç  |        |        |        |        |      |        |     Ñ  |     É  |     Í  |     Á  |
  |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
  |        |        |        |        |        |      |        |        |        |        |        |
  `--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------'
                             |     '  |  ToNum |      |  ToNav |   DEL	|
                             `--------+--------'      `--------+--------'
```

#### 0. **NumPad**

```text
  ,--------------------------------------------.      ,--------------------------------------------.
  |    ESC |        |        |        |      % |      |      / |      7 |      8 |      9 |      * |
  |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
  |    GUI |    Alt |  Shift |   Ctrl |      , |      |      . |      4 |      5 |      6 |      - |
  |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
  | To_Base|        |        |        |      = |      |      0 |      1 |      2 |      3 |      + |
  `--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------'
                             |    Tab |        |      |  [Sym] | BackSP |
                             `--------+--------'      `--------+--------'
```

#### 0. **Navigation**

```text
  ,--------------------------------------------.      ,--------------------------------------------.
  |    ESC |        |        |        |        |      |   PgUP |   HOME |      ↑ |    END |        |
  |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
  |    GUI |    Alt |  Shift |   Ctrl |        |      |   PgDN |      ← |      ↓ |      → |        |
  |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
  | To_Base|        |        |        |        |      |   Undo |    Cut |   Copy |  Paste |   Redo |
  `--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------'
                             |    Tab |  [Sym] |      |        | ToMouse|
                             `--------+--------'      `--------+--------'
```


#### 0. **Functions**

```text
  ,--------------------------------------------.      ,--------------------------------------------.
  |    ESC |        | Recorte|        |   NEXT |      |  VolUp |     F7 |     F8 |     F9 |    F12 |
  |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
  |    GUI |    Alt |  Shift |   Ctrl |   PREV |      | VolDown|     F4 |     F5 |     F6 |    F11 |
  |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
  |        |        |        |        |PLAYSTOP|      |   MUTE |     F1 |     F2 |     F3 |    F10 |
  `--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------'
                             |    Tab |        |      |        |        |
                             `--------+--------'      `--------+--------'
```


#### 0. **Symbols**

```text
  ,--------------------------------------------.      ,--------------------------------------------.
  |    ESC |        |        |        |        |      |      ~ |      ¬ |      ¨ |      ( |      ) |
  |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
  |    GUI |    Alt |  Shift |   Ctrl |        |      |      º |      | |      € |      [ |      ] |
  |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
  |        |        |        |        |        |      |        |      < |      > |      { |      } |
  `--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------'
                             |    Tab |        |      |        |        |
                             `--------+--------'      `--------+--------'
```

