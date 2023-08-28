// 'brightness', 128x16px
const unsigned char epd_bitmap_brightness [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x08, 0x10, 0x0f, 0x00, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x08, 0x08, 0x80, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x08, 0x08, 0x93, 0x10, 0xf3, 0xc7, 0x9e, 0x1c, 0x38, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x08, 0x08, 0x94, 0x11, 0x12, 0x22, 0x11, 0x22, 0x44, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x08, 0x0f, 0x18, 0x11, 0x12, 0x22, 0x11, 0x22, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x1f, 0xf8, 0x08, 0x90, 0x11, 0x12, 0x22, 0x11, 0x3e, 0x38, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x18, 0x18, 0x08, 0x90, 0x11, 0x12, 0x22, 0x11, 0x20, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0c, 0x30, 0x08, 0x90, 0x10, 0xf2, 0x22, 0x11, 0x22, 0x44, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0c, 0x30, 0x0f, 0x10, 0x10, 0x12, 0x21, 0x91, 0x1c, 0x38, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0xe0, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
//"Temperature", 128x16px
const unsigned char epd_bitmap_temperature [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x25, 0x54, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x14, 0xa5, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0d, 0x16, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x3d, 0x17, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0d, 0x16, 0x06, 0x0f, 0x2f, 0x7b, 0x70, 0xf3, 0xcf, 0x5e, 0x42, 0x79, 0xe0, 0x00, 0x00, 0x00, 
	0x15, 0x15, 0x06, 0x19, 0x3b, 0xdb, 0x99, 0x9b, 0xdd, 0xde, 0x42, 0x7b, 0x30, 0x00, 0x00, 0x00, 
	0x25, 0x14, 0x86, 0x31, 0xb1, 0x19, 0x0d, 0x1b, 0x18, 0xc8, 0x42, 0x62, 0x30, 0x00, 0x00, 0x00, 
	0x01, 0x10, 0x06, 0x3f, 0xb1, 0x19, 0x0d, 0xfb, 0x10, 0xc8, 0x42, 0x67, 0xf0, 0x00, 0x00, 0x00, 
	0x01, 0x10, 0x06, 0x30, 0x31, 0x19, 0x0d, 0x03, 0x18, 0xc8, 0x42, 0x62, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x10, 0x06, 0x19, 0xb1, 0x19, 0x99, 0x9b, 0x1d, 0xcc, 0x6e, 0x63, 0x30, 0x00, 0x00, 0x00, 
	0x01, 0x10, 0x06, 0x0f, 0x31, 0x19, 0x70, 0xf3, 0x0f, 0x4e, 0x3a, 0x61, 0xe0, 0x00, 0x00, 0x00, 
	0x06, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'dirty_water', 128x16px
const unsigned char epd_bitmap_dirty_water [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x04, 0x20, 0x0f, 0x08, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x09, 0x10, 0x08, 0x80, 0x00, 0x80, 0x00, 0x82, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x88, 0x08, 0x88, 0x99, 0xe4, 0x40, 0x92, 0x38, 0xf1, 0xc4, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x15, 0x28, 0x08, 0x88, 0xa0, 0x84, 0x40, 0x92, 0x44, 0x42, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x22, 0x04, 0x08, 0x88, 0xc0, 0x84, 0x40, 0x92, 0x04, 0x42, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x28, 0xd4, 0x08, 0x88, 0x80, 0x84, 0x40, 0x92, 0x3c, 0x43, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x2c, 0x14, 0x08, 0x88, 0x80, 0x84, 0x40, 0x92, 0x44, 0x42, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x27, 0xc4, 0x08, 0x88, 0x80, 0x83, 0xc0, 0x92, 0x44, 0x42, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x08, 0x0f, 0x08, 0x80, 0x60, 0x40, 0x6c, 0x3c, 0x31, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0f, 0xf0, 0x00, 0x00, 0x00, 0x04, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'feed', 128x16px
const unsigned char epd_bitmap_feed [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x2b, 0x20, 0x0f, 0x80, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x23, 0x10, 0x08, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x20, 0x58, 0x08, 0x0e, 0x1c, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x20, 0x88, 0x08, 0x11, 0x22, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x31, 0x08, 0x0e, 0x11, 0x22, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x1a, 0x0c, 0x08, 0x1f, 0x3e, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0c, 0x04, 0x08, 0x10, 0x20, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0x04, 0x08, 0x11, 0x22, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0xe6, 0x08, 0x0e, 0x1c, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'water_level', 128x16px
const unsigned char epd_bitmap_water_level [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x40, 0x08, 0x20, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x04, 0x20, 0x08, 0x20, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x08, 0x10, 0x09, 0x23, 0x8f, 0x1c, 0x4c, 0x08, 0x0e, 0x22, 0x38, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x08, 0x09, 0x24, 0x44, 0x22, 0x50, 0x08, 0x11, 0x22, 0x44, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x08, 0x09, 0x20, 0x44, 0x22, 0x60, 0x08, 0x11, 0x22, 0x44, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x20, 0x04, 0x09, 0x23, 0xc4, 0x3e, 0x40, 0x08, 0x1f, 0x22, 0x7c, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x28, 0x04, 0x09, 0x24, 0x44, 0x20, 0x40, 0x08, 0x10, 0x22, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x28, 0x04, 0x09, 0x24, 0x44, 0x22, 0x40, 0x08, 0x11, 0x14, 0x44, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x27, 0xc4, 0x06, 0xc3, 0xc3, 0x1c, 0x40, 0x0f, 0x8e, 0x08, 0x38, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char epd_bitmap_pump [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0xe0, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x67, 0xfe, 0x19, 0x24, 0xfc, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x67, 0xfe, 0x19, 0x24, 0xb4, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x66, 0x20, 0x1e, 0x24, 0xb4, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x66, 0x26, 0x18, 0x24, 0xb4, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x66, 0x26, 0x18, 0x24, 0x84, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x06, 0x20, 0x18, 0x3c, 0x84, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0xe6, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0xe6, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'menu', 128x16px
const unsigned char epd_bitmap_menu [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x3f, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x30, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x77, 0x30, 0x33, 0x33, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x7f, 0x30, 0x3b, 0x33, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x6b, 0x3c, 0x3f, 0x33, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x63, 0x30, 0x37, 0x33, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x63, 0x30, 0x33, 0x33, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x30, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x3f, 0x33, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'select', 128x16px
const unsigned char epd_bitmap_select [] PROGMEM = {
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc
};

const int menu_LEN = 6;
const unsigned char* menu[menu_LEN] = {
	epd_bitmap_brightness,
	epd_bitmap_dirty_water,
	epd_bitmap_feed,
	epd_bitmap_water_level,
  epd_bitmap_pump,
  epd_bitmap_temperature,
};


// 'title_brightness', 128x16px
const unsigned char epd_bitmap_title_brightness [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x3e, 0x00, 0x18, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0xc0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xc0, 0x33, 0x33, 0x18, 0x7c, 0xf8, 0xf9, 0xf0, 0xf0, 0xf0, 0xf0, 0x06, 0x00, 0x00, 
	0x00, 0x00, 0xc0, 0x33, 0x37, 0x18, 0xcc, 0xcc, 0x61, 0x99, 0x99, 0x99, 0x98, 0x06, 0x00, 0x00, 
	0x00, 0x03, 0xf0, 0x3e, 0x38, 0x18, 0xcc, 0xcc, 0x61, 0x99, 0x99, 0x81, 0x80, 0x1f, 0x80, 0x00, 
	0x00, 0x00, 0xc0, 0x33, 0x30, 0x18, 0xcc, 0xcc, 0x61, 0x99, 0xf8, 0xf0, 0xf0, 0x06, 0x00, 0x00, 
	0x00, 0x00, 0xc0, 0x33, 0x30, 0x18, 0xcc, 0xcc, 0x61, 0x99, 0x80, 0x18, 0x18, 0x06, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x33, 0x30, 0x18, 0x7c, 0xcc, 0x61, 0x99, 0x99, 0x99, 0x98, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x3e, 0x30, 0x18, 0x0c, 0xcc, 0x39, 0x98, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'title_dirty_water', 128x16px
const unsigned char epd_bitmap_title_dirty_water [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf8, 0x60, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xcc, 0x00, 0x01, 0x80, 0x00, 0x63, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0x00, 0xcc, 0x63, 0x33, 0xe6, 0x60, 0x6b, 0x1e, 0x3e, 0x3c, 0x66, 0x01, 0x80, 0x00, 
	0x00, 0x03, 0x00, 0xcc, 0x63, 0x71, 0x86, 0x60, 0x6b, 0x33, 0x18, 0x66, 0x6e, 0x01, 0x80, 0x00, 
	0x00, 0x0f, 0xc0, 0xcc, 0x63, 0x81, 0x86, 0x60, 0x6b, 0x03, 0x18, 0x66, 0x70, 0x07, 0xe0, 0x00, 
	0x00, 0x03, 0x00, 0xcc, 0x63, 0x01, 0x86, 0x60, 0x6b, 0x1f, 0x18, 0x7e, 0x60, 0x01, 0x80, 0x00, 
	0x00, 0x03, 0x00, 0xcc, 0x63, 0x01, 0x86, 0x60, 0x6b, 0x33, 0x18, 0x60, 0x60, 0x01, 0x80, 0x00, 
	0x00, 0x00, 0x00, 0xcc, 0x63, 0x01, 0x83, 0xe0, 0x6b, 0x33, 0x18, 0x66, 0x60, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf8, 0x63, 0x00, 0xe0, 0x60, 0x36, 0x1f, 0x0e, 0x3c, 0x60, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'title_temperature', 128x16px
const unsigned char epd_bitmap_title_temperature [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 
	0x00, 0x00, 0x60, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 
	0x00, 0x00, 0x60, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 
	0x00, 0x00, 0x60, 0x00, 0xc7, 0x1e, 0xef, 0x8e, 0x29, 0xcf, 0x6c, 0xa7, 0x00, 0x0c, 0x00, 0x00, 
	0x00, 0x00, 0x60, 0x00, 0xcf, 0x9f, 0xef, 0xdb, 0x3b, 0x67, 0x6c, 0xed, 0x80, 0x0c, 0x00, 0x00, 
	0x00, 0x0f, 0xff, 0x00, 0xcd, 0x9b, 0x6c, 0xdb, 0x30, 0x66, 0x6c, 0xcd, 0x81, 0xff, 0xe0, 0x00, 
	0x00, 0x0f, 0xff, 0x00, 0xcf, 0x9b, 0x6c, 0xdf, 0x31, 0xe6, 0x6c, 0xcf, 0x81, 0xff, 0xe0, 0x00, 
	0x00, 0x00, 0x60, 0x00, 0xcc, 0x1b, 0x6c, 0xd8, 0x33, 0x66, 0x6c, 0xcc, 0x00, 0x0c, 0x00, 0x00, 
	0x00, 0x00, 0x60, 0x00, 0xcd, 0x9b, 0x6f, 0xdb, 0x33, 0x67, 0x6c, 0xcd, 0x80, 0x0c, 0x00, 0x00, 
	0x00, 0x00, 0x60, 0x00, 0xc7, 0x1b, 0x6f, 0x8e, 0x33, 0xe7, 0x7c, 0xc7, 0x00, 0x0c, 0x00, 0x00, 
	0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 
	0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'title_feed', 128x16px
const unsigned char epd_bitmap_title_feed [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x60, 0x3c, 0x3c, 0x3e, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x60, 0x66, 0x66, 0x66, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x78, 0x66, 0x66, 0x66, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x60, 0x7e, 0x7e, 0x66, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x60, 0x60, 0x60, 0x66, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x3c, 0x3c, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'title_water_level', 128x16px
const unsigned char epd_bitmap_title_water_level [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xc6, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xc6, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0x00, 0xd6, 0x3c, 0x7c, 0x78, 0xcc, 0x0c, 0x07, 0x8c, 0xc7, 0x86, 0x00, 0xc0, 0x00, 
	0x00, 0x03, 0x00, 0xd6, 0x66, 0x30, 0xcc, 0xdc, 0x0c, 0x0c, 0xcc, 0xcc, 0xc6, 0x00, 0xc0, 0x00, 
	0x00, 0x0f, 0xc0, 0xd6, 0x06, 0x30, 0xcc, 0xe0, 0x0c, 0x0c, 0xcc, 0xcc, 0xc6, 0x03, 0xf0, 0x00, 
	0x00, 0x03, 0x00, 0xd6, 0x3e, 0x30, 0xfc, 0xc0, 0x0c, 0x0f, 0xcc, 0xcf, 0xc6, 0x00, 0xc0, 0x00, 
	0x00, 0x03, 0x00, 0xd6, 0x66, 0x30, 0xc0, 0xc0, 0x0c, 0x0c, 0x0c, 0xcc, 0x06, 0x00, 0xc0, 0x00, 
	0x00, 0x00, 0x00, 0xd6, 0x66, 0x30, 0xcc, 0xc0, 0x0c, 0x0c, 0xc7, 0x8c, 0xc6, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x6c, 0x3e, 0x1c, 0x78, 0xc0, 0x0f, 0xc7, 0x83, 0x07, 0x83, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char epd_bitmap_title_pump [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x3c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x50, 0x22, 0x00, 0x00, 0x00, 0x0a, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x22, 0x44, 0xec, 0x78, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x50, 0x22, 0x44, 0x92, 0x44, 0x0a, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x3c, 0x44, 0x92, 0x44, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x44, 0x92, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x44, 0x92, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x44, 0x82, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x38, 0x82, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 1088)
const int sub_title_LEN = 6;
const unsigned char* epd_bitmap_sub_title[sub_title_LEN] = {
	epd_bitmap_title_brightness,
	epd_bitmap_title_dirty_water,
	epd_bitmap_title_feed,
	epd_bitmap_title_water_level,
  epd_bitmap_title_pump,
  epd_bitmap_title_temperature,
};

// 'options1_brightness', 128x16px
const unsigned char epd_bitmap_options1_brightness [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x30, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x70, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xf0, 0x00, 0x18, 0x66, 0x66, 0x7c, 0x03, 0xc7, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xb0, 0x00, 0x18, 0x66, 0x6e, 0x66, 0x06, 0x66, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x30, 0x00, 0x18, 0x66, 0x70, 0x66, 0x06, 0x66, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x30, 0x00, 0x18, 0x66, 0x60, 0x66, 0x06, 0x66, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x30, 0x00, 0x18, 0x66, 0x60, 0x66, 0x06, 0x66, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x30, 0x00, 0x18, 0x66, 0x60, 0x66, 0x06, 0x66, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x30, 0xc0, 0x18, 0x3c, 0x60, 0x66, 0x03, 0xc6, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'options2_brightness', 128x16px
const unsigned char epd_bitmap_options2_brightness [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xf0, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x98, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x18, 0x00, 0x18, 0x66, 0x66, 0x7c, 0x03, 0xc3, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x30, 0x00, 0x18, 0x66, 0x6e, 0x66, 0x06, 0x67, 0xcf, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x60, 0x00, 0x18, 0x66, 0x70, 0x66, 0x06, 0x63, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xc0, 0x00, 0x18, 0x66, 0x60, 0x66, 0x06, 0x63, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x80, 0x00, 0x18, 0x66, 0x60, 0x66, 0x06, 0x63, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x80, 0x00, 0x18, 0x66, 0x60, 0x66, 0x06, 0x63, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0xf8, 0xc0, 0x18, 0x3c, 0x60, 0x66, 0x03, 0xc3, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 544)
const int epd_bitmap_options_brightness_LEN = 2;
const unsigned char* epd_bitmap_options_brightness[epd_bitmap_options_brightness_LEN] = {
	epd_bitmap_options1_brightness,
	epd_bitmap_options2_brightness
};


