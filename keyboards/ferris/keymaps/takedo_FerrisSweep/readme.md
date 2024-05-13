Colemak Keyboard influenced by Miryoku
===============================================

Keymaps in general are quite personal, so it is difficult to come up with a default that will suit every user.

This keymap makes heavy use of keys behaving differently when tapped and held, so that all the keys one may need remain accessible despite the low number of thumb keys.

It comes with a number of layers to give access to most of the keys one may need on a keyboard. It is not meant to be the best possible keymap, but rather a good base on which to build a keymap that works for you.

This is not the only way to make 34 keys a comfortable typing experience, but it is one way to do so. If you don't already know of a better way, this may be as good a starting point as aany :)

Note that this keymap was built from the perspective that it is OK to take a steep learning curve if it results in a keymap that is easier to use in the long run. This means that it may take more effort to learn this keymap than some alternatives. "Easy to use" was assessed against the workflow of the author, so your mileage may vary on some of the details.

What do all these layers do?
----------------------------

### Layer 0: Base layer

![Layer 0](https://i.imgur.com/ZiU1gCz.png)

Colemak Alphas

* Accesses Layers 1-3

### Layer 1: Control Shortcuts, Modifiers, Extras, and Number Row

![Layer 1](https://i.imgur.com/LhcfFMy.png)

Layer 1
- Accessed from Layer 0
- Accesses Layer 4

Left:
- Control Shortcuts
- Modifiers
- Extras

Right:
- NumRow

### Layer 2: Navigation, Extra Shortcuts, Media Control, and Function Row

![Layer 2](https://i.imgur.com/DIY3DHb.png)

Layer 2
- Accessed from Layer 0

Left:
- Direction keys
- Extra shortcuts
- Page Up, Down, Back (Mouse Btn 4), Forward (Mouse Btn 5)

Right:
- Media Control
- Function Row

### Layer 3: Symbols

![Layer 3](https://i.imgur.com/DIv8uam.png)

Layer 3
- Accessed from Layer 0

Left:
- Modifiers
- Extra symbols

Right:
- Symbols

### Layer 4: Mouse Buttons and Numpad

![Layer 4](https://i.imgur.com/vCQpns6.png)

Layer 4
- Accessed from Layer 1
- Accesses Layer 5

Left:
- Mouse Buttons

Right:
- Numpad

### Layer 5: Gaming

![Layer 5](https://i.imgur.com/0Co2KKP.png)

Layer 5 - Gaming Layer
- Accessed from Layer 4
- Toggles Layer 5 off to return to Layer 0

Info:
- Uses (2) instead of (Bksp) since some games cannot use (Bksp)
- I don't use (/) when gaming, so I use it for toggling the layer instead

Compilation Instructions
---
Use this to compile in QMK_MSYS `qmk compile -kb ferris/sweep -km "takedo_FerrisSweep" -e MAKECMDGOALS=uf2-split-left`

Creating json file
---
Run command while in keymaps folder `qmk c2json -kb ferris -km takedo_FerrisSweep`