// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYERS_FLIP

#define MIRYOKU_LAYERMAPPING_NUM( ...) \ 
  {/* Left hand (Nav cluster) */ \
   &kp HOME, &kp LEFT, &kp DOWN, &kp UP, &kp RIGHT, &kp END,    \
   /* Right hand (Numpad cluster) */ \
   &kp N7,   &kp N8,   &kp N9,   &kp KP_PLUS, &kp BSPC,         \
   &kp N4,   &kp N5,   &kp N6,   &kp KP_MINUS, &kp ENTER,       \
   &kp N1,   &kp N2,   &kp N3,   &kp KP_ASTERISK, &kp DELETE,   \
   /* ... etc ... */ \
  }
