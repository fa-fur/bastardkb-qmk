#pragma once

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD
    
// Apply the modifier on keys that are tapped during a short hold of a modtap
#define PERMISSIVE_HOLD

#define CHARYBDIS_DRAGSCROLL_MOMENTARY
#define CHARYBDIS_DRAGSCROLL_FIXED
#define CHARYBDIS_MR_GASC

#define CHARYBDIS_DPI_OPTIONS \
        { 600, 800, 1200, 2000, 4000 }
#define CHARYBDIS_TRACKBALL_SPEED_DIVIDER 12
