#pragma once

#define ZMK_TAP_DANCE(name, tap, doubletap) \
  / { \
      tap_dances { \
          td_ ## name { \
            compatible = "zmk,behavior-tap-dance"; \
            #binding-cells = <0>; \
            tapping-term-ms = <200>; \
            bindings = <&kp tap>, <&kp doubletap>; \
          }; \
      }; \
  };
