#include <avr/pgmspace.h>

typedef struct
{
  uint8_t dt;
  uint8_t pitch;
} event_t;

const event_t PROGMEM notes[]=
{
{48, 91},
{48, 90},
{48, 88},
{48, 88},
{0, 69},
{48, 90},
{48, 74},
{48, 78},
{48, 74},
{48, 71},
{48, 74},
{48, 78},
{48, 74},
{48, 69},
{48, 74},
{48, 78},
{0, 74},
{48, 81},
{0, 71},
{48, 91},
{0, 74},
{48, 90},
{0, 78},
{48, 88},
{0, 74},
{48, 88},
{48, 69},
{0, 74},
{48, 90},
{48, 78},
{48, 74},
{0, 71},
{48, 86},
{48, 74},
{0, 78},
{48, 88},
{0, 74},
{48, 81},
{48, 69},
{48, 74},
{48, 78},
{48, 74},
{48, 71},
{48, 74},
{48, 78},
{0, 74},
{48, 81},
{0, 71},
{48, 88},
{48, 76},
{0, 79},
{48, 90},
{0, 76},
{48, 91},
{48, 71},
{48, 76},
{0, 79},
{48, 88},
{0, 76},
{48, 85},
{48, 69},
{0, 73},
{48, 86},
{48, 79},
{48, 73},
{0, 69},
{48, 88},
{48, 73},
{0, 79},
{48, 81},
{0, 73},
{48, 81},
{48, 69},
{0, 74},
{48, 90},
{48, 78},
{48, 74},
{48, 71},
{48, 74},
{48, 78},
{48, 74},
{48, 69},
{48, 74},
{48, 78},
{48, 74},
{0, 71},
{48, 91},
{0, 74},
{48, 90},
{0, 78},
{48, 88},
{0, 74},
{48, 88},
{0, 69},
{48, 90},
{48, 74},
{48, 78},
{48, 74},
{48, 71},
{48, 74},
{48, 78},
{48, 74},
{48, 69},
{48, 74},
{48, 78},
{0, 74},
{48, 81},
{0, 71},
{48, 91},
{0, 74},
{48, 90},
{0, 78},
{48, 88},
{0, 74},
{48, 88},
{48, 69},
{48, 74},
{0, 78},
{48, 90},
{0, 74},
{48, 86},
{48, 71},
{48, 74},
{0, 78},
{48, 88},
{0, 74},
{48, 81},
{48, 69},
{48, 74},
{48, 78},
{48, 74},
{48, 71},
{48, 74},
{48, 78},
{48, 74},
{0, 71},
{48, 88},
{48, 76},
{0, 79},
{48, 90},
{0, 76},
{48, 91},
{48, 71},
{48, 76},
{0, 79},
{48, 88},
{0, 76},
{48, 85},
{48, 69},
{48, 73},
{0, 79},
{48, 86},
{0, 73},
{48, 88},
{48, 69},
{0, 73},
{48, 81},
{0, 79},
{48, 86},
{0, 73},
{48, 88},
{0, 70},
{48, 89},
{0, 74},
{48, 88},
{0, 77},
{48, 86},
{0, 81},
{144, 84},
{48, 81},
{45, 82},
{3, 89},
{0, 105},
{0, 72},
{0, 77},
{48, 84},
{0, 81},
{48, 96},
{0, 108},
{0, 72},
{0, 77},
{48, 89},
{48, 96},
{0, 103},
{0, 72},
{0, 76},
{0, 88},
{48, 88},
{0, 79},
{0, 86},
{48, 96},
{0, 108},
{0, 72},
{0, 76},
{48, 86},
{0, 84},
{48, 96},
{0, 106},
{0, 70},
{0, 74},
{0, 86},
{48, 86},
{0, 105},
{0, 82},
{0, 84},
{48, 96},
{0, 103},
{0, 70},
{0, 74},
{48, 84},
{0, 76},
{48, 96},
{0, 105},
{0, 72},
{0, 77},
{0, 84},
{48, 89},
{0, 81},
{48, 96},
{0, 101},
{0, 72},
{0, 77},
{48, 81},
{0, 82},
{45, 96},
{3, 89},
{0, 105},
{0, 72},
{0, 77},
{48, 84},
{0, 81},
{48, 96},
{0, 108},
{0, 72},
{0, 77},
{48, 89},
{48, 96},
{0, 103},
{0, 72},
{0, 76},
{0, 88},
{48, 91},
{0, 79},
{0, 89},
{48, 96},
{0, 108},
{0, 72},
{0, 76},
{48, 88},
{0, 86},
{48, 96},
{0, 106},
{0, 70},
{0, 74},
{0, 86},
{48, 86},
{0, 105},
{0, 82},
{0, 88},
{48, 96},
{0, 103},
{0, 70},
{0, 74},
{48, 89},
{0, 76},
{48, 96},
{0, 105},
{0, 72},
{0, 77},
{0, 89},
{48, 89},
{0, 81},
{48, 96},
{0, 101},
{0, 72},
{0, 77},
{48, 91},
{0, 93},
{48, 96},
{0, 103},
{0, 70},
{0, 74},
{0, 91},
{48, 94},
{0, 106},
{0, 79},
{48, 94},
{0, 105},
{0, 70},
{0, 74},
{48, 93},
{0, 103},
{48, 79},
{0, 100},
{0, 72},
{0, 76},
{0, 91},
{48, 91},
{0, 101},
{48, 79},
{0, 103},
{0, 72},
{0, 76},
{48, 89},
{0, 108},
{0, 79},
{48, 91},
{0, 105},
{0, 72},
{0, 77},
{0, 89},
{48, 93},
{0, 108},
{0, 81},
{48, 93},
{0, 103},
{0, 72},
{0, 77},
{0, 88},
{48, 91},
{0, 108},
{48, 81},
{0, 101},
{0, 74},
{0, 77},
{0, 86},
{48, 89},
{0, 81},
{48, 93},
{0, 105},
{0, 74},
{0, 77},
{48, 86},
{0, 81},
{45, 84},
{3, 89},
{0, 106},
{0, 70},
{0, 74},
{48, 86},
{0, 79},
{0, 89},
{48, 98},
{0, 101},
{0, 70},
{0, 74},
{48, 89},
{0, 79},
{0, 88},
{48, 98},
{0, 105},
{0, 69},
{0, 73},
{48, 88},
{0, 79},
{0, 88},
{48, 97},
{0, 103},
{0, 69},
{0, 73},
{0, 74},
{48, 90},
{0, 102},
{0, 79},
{48, 90},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{0, 74},
{48, 81},
{0, 71},
{0, 71},
{48, 91},
{0, 74},
{48, 90},
{0, 71},
{0, 78},
{48, 88},
{0, 69},
{0, 74},
{48, 88},
{0, 62},
{0, 69},
{48, 90},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{0, 71},
{48, 91},
{0, 74},
{48, 90},
{0, 78},
{48, 88},
{0, 59},
{0, 74},
{48, 88},
{0, 62},
{48, 69},
{48, 74},
{0, 78},
{48, 90},
{0, 62},
{0, 74},
{48, 86},
{0, 59},
{48, 71},
{0, 74},
{48, 88},
{48, 78},
{0, 59},
{0, 74},
{48, 81},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 64},
{0, 71},
{48, 88},
{48, 76},
{0, 79},
{48, 90},
{0, 64},
{0, 76},
{48, 91},
{0, 64},
{48, 71},
{0, 66},
{48, 76},
{0, 67},
{0, 79},
{48, 88},
{48, 76},
{0, 57},
{0, 69},
{48, 85},
{48, 73},
{0, 79},
{48, 86},
{0, 57},
{0, 73},
{48, 88},
{0, 57},
{48, 69},
{0, 59},
{48, 73},
{0, 61},
{0, 79},
{48, 81},
{0, 73},
{48, 81},
{0, 62},
{48, 69},
{0, 74},
{48, 90},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{0, 74},
{0, 81},
{48, 86},
{0, 71},
{0, 71},
{0, 91},
{48, 95},
{0, 74},
{0, 90},
{48, 93},
{0, 71},
{0, 78},
{0, 88},
{48, 91},
{0, 69},
{0, 74},
{0, 88},
{48, 91},
{0, 62},
{0, 69},
{0, 90},
{48, 93},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{0, 74},
{0, 81},
{48, 86},
{0, 59},
{0, 71},
{0, 91},
{48, 95},
{0, 74},
{0, 90},
{48, 93},
{0, 78},
{0, 88},
{48, 91},
{0, 59},
{0, 74},
{0, 88},
{48, 91},
{0, 62},
{48, 69},
{48, 74},
{0, 78},
{0, 90},
{48, 93},
{0, 62},
{0, 74},
{0, 86},
{48, 90},
{0, 59},
{48, 71},
{48, 74},
{0, 78},
{0, 88},
{48, 91},
{0, 59},
{0, 74},
{0, 81},
{48, 86},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 64},
{0, 71},
{48, 88},
{48, 76},
{0, 79},
{48, 90},
{0, 64},
{0, 76},
{48, 91},
{0, 64},
{48, 71},
{0, 66},
{48, 76},
{0, 67},
{0, 79},
{48, 88},
{48, 76},
{0, 57},
{0, 69},
{48, 85},
{48, 73},
{0, 79},
{48, 86},
{0, 57},
{0, 73},
{48, 88},
{0, 57},
{48, 69},
{0, 59},
{0, 73},
{48, 81},
{0, 61},
{0, 79},
{48, 86},
{0, 57},
{0, 73},
{48, 88},
{0, 58},
{0, 70},
{48, 89},
{0, 74},
{48, 88},
{0, 81},
{48, 86},
{0, 70},
{0, 77},
{48, 84},
{48, 81},
{48, 77},
{0, 70},
{0, 77},
{0, 81},
{48, 81},
{0, 57},
{0, 77},
{0, 79},
{48, 82},
{0, 65},
{0, 72},
{0, 77},
{0, 81},
{48, 84},
{48, 81},
{0, 72},
{0, 77},
{0, 84},
{48, 89},
{48, 65},
{0, 60},
{0, 72},
{0, 76},
{0, 84},
{48, 88},
{0, 79},
{48, 86},
{0, 72},
{0, 76},
{0, 82},
{48, 86},
{0, 60},
{0, 81},
{48, 84},
{0, 58},
{0, 70},
{0, 74},
{0, 82},
{48, 86},
{0, 81},
{0, 82},
{48, 84},
{0, 70},
{0, 74},
{0, 81},
{48, 84},
{0, 58},
{48, 76},
{0, 65},
{0, 72},
{0, 77},
{0, 81},
{48, 84},
{48, 81},
{0, 72},
{0, 77},
{0, 79},
{48, 81},
{0, 77},
{48, 82},
{0, 65},
{0, 72},
{0, 77},
{0, 77},
{48, 84},
{48, 81},
{0, 72},
{0, 77},
{0, 81},
{48, 89},
{48, 65},
{0, 60},
{0, 72},
{0, 76},
{0, 82},
{48, 91},
{0, 79},
{0, 81},
{48, 89},
{0, 72},
{0, 76},
{0, 79},
{48, 88},
{0, 60},
{0, 77},
{48, 86},
{0, 58},
{0, 70},
{0, 74},
{0, 77},
{48, 86},
{0, 79},
{0, 82},
{48, 88},
{0, 70},
{0, 74},
{0, 81},
{48, 89},
{0, 58},
{48, 76},
{0, 65},
{0, 72},
{0, 77},
{0, 81},
{48, 89},
{48, 81},
{0, 65},
{0, 72},
{0, 77},
{0, 82},
{48, 91},
{0, 60},
{0, 84},
{48, 93},
{0, 58},
{0, 70},
{0, 74},
{0, 86},
{48, 94},
{0, 79},
{0, 86},
{48, 94},
{0, 58},
{0, 70},
{0, 74},
{0, 84},
{48, 93},
{48, 79},
{0, 60},
{0, 72},
{0, 76},
{0, 84},
{48, 91},
{48, 79},
{0, 60},
{0, 72},
{0, 76},
{0, 81},
{48, 89},
{0, 79},
{0, 82},
{48, 91},
{0, 65},
{0, 72},
{0, 77},
{0, 84},
{48, 93},
{0, 81},
{0, 84},
{48, 93},
{0, 64},
{0, 72},
{0, 77},
{0, 82},
{48, 91},
{0, 81},
{48, 89},
{0, 62},
{0, 74},
{0, 77},
{0, 81},
{48, 89},
{48, 81},
{0, 60},
{0, 74},
{0, 77},
{0, 79},
{48, 86},
{0, 77},
{0, 81},
{48, 84},
{0, 58},
{0, 70},
{0, 74},
{0, 77},
{48, 86},
{0, 79},
{0, 79},
{48, 89},
{0, 65},
{0, 70},
{0, 74},
{0, 81},
{48, 89},
{0, 79},
{0, 79},
{48, 88},
{0, 57},
{0, 69},
{48, 73},
{0, 79},
{0, 79},
{48, 88},
{0, 64},
{0, 69},
{0, 73},
{0, 81},
{48, 90},
{0, 79},
{0, 81},
{48, 90},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 71},
{0, 71},
{24, 91},
{24, 91},
{0, 74},
{48, 90},
{0, 71},
{0, 78},
{48, 88},
{0, 69},
{0, 74},
{48, 88},
{24, 69},
{24, 90},
{48, 74},
{48, 78},
{48, 74},
{48, 71},
{48, 74},
{48, 78},
{48, 74},
{48, 69},
{48, 74},
{48, 78},
{0, 74},
{48, 81},
{0, 71},
{48, 91},
{0, 74},
{48, 90},
{0, 78},
{48, 88},
{0, 74},
{48, 88},
{48, 69},
{48, 74},
{0, 78},
{48, 90},
{0, 74},
{48, 86},
{48, 71},
{48, 74},
{0, 78},
{48, 88},
{0, 74},
{48, 81},
{48, 69},
{48, 74},
{48, 78},
{48, 74},
{48, 71},
{48, 74},
{48, 78},
{48, 74},
{0, 71},
{48, 88},
{48, 76},
{0, 79},
{48, 90},
{0, 76},
{48, 91},
{48, 71},
{48, 76},
{0, 79},
{48, 88},
{48, 76},
{0, 69},
{48, 85},
{48, 73},
{0, 79},
{48, 86},
{0, 73},
{48, 88},
{48, 69},
{48, 73},
{0, 79},
{48, 81},
{0, 73},
{48, 81},
{48, 69},
{0, 74},
{48, 90},
{48, 78},
{48, 74},
{48, 71},
{48, 74},
{48, 78},
{48, 74},
{48, 69},
{48, 74},
{48, 78},
{48, 74},
{0, 71},
{0, 91},
{48, 95},
{0, 74},
{0, 90},
{48, 93},
{0, 78},
{0, 88},
{48, 91},
{0, 74},
{0, 88},
{48, 91},
{0, 62},
{12, 69},
{0, 90},
{36, 93},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{0, 71},
{0, 91},
{48, 95},
{0, 74},
{0, 90},
{48, 93},
{0, 78},
{0, 88},
{48, 91},
{0, 59},
{0, 74},
{0, 88},
{48, 91},
{0, 62},
{48, 69},
{48, 74},
{0, 78},
{0, 90},
{48, 93},
{0, 62},
{0, 74},
{0, 86},
{48, 90},
{0, 59},
{48, 71},
{48, 74},
{0, 78},
{0, 88},
{48, 91},
{0, 59},
{0, 74},
{0, 81},
{48, 86},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{48, 78},
{0, 59},
{48, 74},
{0, 64},
{0, 71},
{48, 88},
{48, 76},
{0, 79},
{48, 90},
{0, 64},
{0, 76},
{48, 91},
{0, 64},
{48, 71},
{0, 66},
{48, 76},
{0, 67},
{0, 79},
{48, 88},
{48, 76},
{0, 57},
{0, 69},
{48, 85},
{48, 73},
{0, 79},
{48, 86},
{0, 57},
{0, 73},
{48, 88},
{0, 57},
{48, 69},
{0, 59},
{0, 73},
{48, 81},
{0, 61},
{0, 79},
{48, 86},
{0, 57},
{0, 73},
{48, 88},
{0, 58},
{0, 70},
{48, 89},
{0, 74},
{48, 88},
{0, 81},
{48, 86},
{0, 70},
{0, 77},
{48, 84},
{48, 81},
{48, 77},
{0, 70},
{0, 77},
{0, 81},
{48, 81},
{0, 57},
{0, 77},
{0, 79},
{48, 82},
{0, 65},
{0, 72},
{0, 77},
{0, 81},
{48, 84},
{48, 81},
{0, 72},
{0, 77},
{0, 84},
{48, 89},
{48, 65},
{0, 60},
{0, 72},
{0, 76},
{0, 84},
{48, 88},
{0, 79},
{48, 86},
{0, 72},
{0, 76},
{0, 82},
{48, 86},
{0, 60},
{0, 81},
{48, 84},
{0, 58},
{0, 70},
{0, 74},
{0, 82},
{48, 86},
{0, 81},
{0, 82},
{48, 84},
{0, 70},
{0, 74},
{0, 81},
{48, 84},
{0, 58},
{48, 76},
{0, 65},
{0, 72},
{0, 77},
{0, 81},
{48, 84},
{48, 81},
{0, 72},
{0, 77},
{0, 79},
{48, 81},
{0, 65},
{0, 77},
{48, 82},
{0, 65},
{0, 72},
{0, 77},
{0, 77},
{48, 84},
{48, 81},
{0, 72},
{0, 77},
{0, 81},
{48, 89},
{48, 65},
{0, 60},
{0, 72},
{0, 76},
{0, 82},
{48, 91},
{0, 79},
{0, 81},
{48, 89},
{0, 72},
{0, 76},
{0, 79},
{48, 88},
{0, 60},
{0, 77},
{48, 86},
{0, 58},
{0, 70},
{0, 74},
{0, 77},
{48, 86},
{0, 79},
{0, 82},
{48, 88},
{0, 70},
{0, 74},
{0, 81},
{48, 89},
{0, 58},
{48, 76},
{0, 65},
{0, 72},
{0, 77},
{0, 81},
{48, 89},
{48, 81},
{0, 65},
{0, 72},
{0, 77},
{0, 82},
{48, 91},
{0, 60},
{0, 84},
{48, 93},
{0, 58},
{0, 70},
{0, 74},
{0, 86},
{48, 94},
{0, 79},
{0, 86},
{48, 94},
{0, 58},
{0, 70},
{0, 74},
{0, 84},
{48, 93},
{0, 79},
{48, 91},
{0, 60},
{0, 72},
{0, 76},
{0, 84},
{48, 91},
{48, 79},
{0, 60},
{0, 72},
{0, 76},
{0, 81},
{48, 89},
{0, 79},
{0, 82},
{48, 91},
{0, 65},
{0, 72},
{0, 77},
{0, 84},
{48, 93},
{0, 81},
{0, 84},
{48, 93},
{0, 64},
{0, 72},
{0, 77},
{0, 82},
{48, 91},
{0, 81},
{48, 89},
{0, 62},
{0, 74},
{0, 77},
{0, 81},
{48, 89},
{48, 81},
{0, 60},
{0, 74},
{0, 77},
{0, 79},
{48, 86},
{0, 77},
{0, 81},
{48, 84},
{0, 58},
{0, 70},
{0, 74},
{0, 77},
{48, 86},
{0, 79},
{0, 79},
{48, 89},
{0, 65},
{0, 70},
{0, 74},
{0, 81},
{48, 89},
{0, 79},
{0, 79},
{48, 88},
{0, 57},
{0, 69},
{48, 73},
{0, 79},
{0, 79},
{48, 88},
{0, 64},
{0, 69},
{0, 73},
{0, 81},
{48, 90},
{0, 79},
{0, 81},
{48, 90},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{0, 78},
{48, 93},
{0, 59},
{0, 74},
{48, 93},
{0, 62},
{0, 69},
{48, 95},
{0, 74},
{48, 93},
{0, 78},
{48, 90},
{0, 62},
{0, 74},
{48, 86},
{0, 59},
{48, 71},
{0, 74},
{0, 88},
{48, 91},
{0, 78},
{0, 90},
{48, 93},
{0, 59},
{0, 74},
{0, 90},
{48, 93},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{0, 74},
{48, 93},
{0, 78},
{48, 93},
{0, 59},
{0, 74},
{48, 93},
{0, 62},
{0, 69},
{48, 95},
{0, 74},
{48, 93},
{0, 78},
{48, 90},
{0, 62},
{0, 74},
{48, 86},
{0, 59},
{48, 71},
{0, 74},
{0, 88},
{48, 91},
{0, 78},
{0, 90},
{48, 93},
{0, 59},
{0, 74},
{0, 90},
{48, 93},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{0, 74},
{48, 93},
{0, 78},
{48, 93},
{0, 59},
{0, 74},
{48, 93},
{0, 62},
{0, 69},
{48, 95},
{0, 74},
{48, 93},
{0, 78},
{48, 90},
{0, 62},
{0, 74},
{48, 86},
{0, 59},
{48, 71},
{0, 74},
{0, 88},
{48, 91},
{0, 78},
{0, 90},
{48, 93},
{0, 59},
{0, 74},
{0, 90},
{48, 93},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{48, 74},
{0, 78},
{48, 93},
{0, 59},
{0, 74},
{48, 93},
{0, 62},
{0, 69},
{48, 95},
{0, 74},
{48, 93},
{0, 78},
{48, 90},
{0, 62},
{0, 74},
{48, 86},
{0, 59},
{48, 71},
{0, 74},
{0, 88},
{48, 91},
{0, 78},
{0, 90},
{48, 93},
{0, 59},
{0, 74},
{0, 90},
{48, 93},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{0, 74},
{48, 93},
{0, 78},
{48, 93},
{0, 59},
{0, 74},
{48, 93},
{0, 62},
{0, 69},
{48, 95},
{0, 74},
{48, 93},
{0, 78},
{48, 90},
{0, 62},
{0, 74},
{48, 86},
{0, 59},
{48, 71},
{0, 74},
{0, 88},
{48, 91},
{0, 78},
{0, 90},
{48, 93},
{0, 59},
{0, 74},
{0, 90},
{48, 93},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 59},
{48, 71},
{0, 74},
{48, 91},
{0, 78},
{48, 93},
{0, 59},
{0, 74},
{48, 93},
{0, 62},
{48, 69},
{48, 74},
{48, 78},
{0, 62},
{48, 74},
{0, 71},
{48, 71},
{0, 74},
{48, 91},
{0, 71},
{0, 78},
{48, 90},
{0, 69},
{0, 74},
{0, 90},
{0, 0},
};
