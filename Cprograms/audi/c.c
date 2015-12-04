
          /* linux/include/video/vga.h -- standard VGA chipset interaction
  3  *
  4  * Copyright 1999 Jeff Garzik <jgarzik@pobox.com>
  5  * 
  6  * Copyright history from vga16fb.c:
  7  *      Copyright 1999 Ben Pfaff and Petr Vandrovec
  8  *      Based on VGA info at http://www.goodnet.com/~tinara/FreeVGA/home.htm
  9  *      Based on VESA framebuffer (c) 1998 Gerd Knorr
 10  *
 11  * This file is subject to the terms and conditions of the GNU General
 12  * Public License.  See the file COPYING in the main directory of this
 13  * archive for more details.  
 14  *
 15   */
 16 
 17 #ifndef __linux_video_vga_h__
 18 #define __linux_video_vga_h__
 19 
 20 #include <linux/types.h>
 21 #include <asm/io.h>
 22 #ifndef CONFIG_AMIGA
 23 #include <asm/vga.h>
 24 #else
 25   /*
 26  * FIXME
 27  * Ugh, we don't have PCI space, so map readb() and friends to use Zorro space
 28  * for MMIO accesses. This should make cirrusfb work again on Amiga
 29    */
 30 #undef inb_p
 31 #undef inw_p
 32 #undef outb_p
 33 #undef outw
 34 #undef readb
 35 #undef writeb
 36 #undef writew
 37 #define inb_p(port)     0
 38 #define inw_p(port)     0
 39 #define outb_p(port, val)       do { } while (0)
 40 #define outw(port, val)         do { } while (0)
 41 #define readb           z_readb
 42 #define writeb          z_writeb
 43 #define writew          z_writew
 44 #endif
 45 #include <asm/byteorder.h>
 46 
 47 
 48 /* Some of the code below is taken from SVGAlib.  The original,
 49    unmodified copyright notice for that code is below. */
 50 /* VGAlib version 1.2 - (c) 1993 Tommy Frandsen                    */
 51 /*                                                                 */
 52 /* This library is free software; you can redistribute it and/or   */
 53 /* modify it without any restrictions. This library is distributed */
 54 /* in the hope that it will be useful, but without any warranty.   */
 55 
 56 /* Multi-chipset support Copyright 1993 Harm Hanemaayer */
 57 /* partially copyrighted (C) 1993 by Hartmut Schirmer */
 58 
 59 /* VGA data register ports */
 60 #define VGA_CRT_DC      0x3D5   /* CRT Controller Data Register - color emulation */
 61 #define VGA_CRT_DM      0x3B5   /* CRT Controller Data Register - mono emulation */
 62 #define VGA_ATT_R       0x3C1   /* Attribute Controller Data Read Register */
 63 #define VGA_ATT_W       0x3C0   /* Attribute Controller Data Write Register */
 64 #define VGA_GFX_D       0x3CF   /* Graphics Controller Data Register */
 65 #define VGA_SEQ_D       0x3C5   /* Sequencer Data Register */
 66 #define VGA_MIS_R       0x3CC   /* Misc Output Read Register */
 67 #define VGA_MIS_W       0x3C2   /* Misc Output Write Register */
 68 #define VGA_FTC_R       0x3CA   /* Feature Control Read Register */
 69 #define VGA_IS1_RC      0x3DA   /* Input Status Register 1 - color emulation */
 70 #define VGA_IS1_RM      0x3BA   /* Input Status Register 1 - mono emulation */
 71 #define VGA_PEL_D       0x3C9   /* PEL Data Register */
 72 #define VGA_PEL_MSK     0x3C6   /* PEL mask register */
 73 
 74 /* EGA-specific registers */
 75 #define EGA_GFX_E0      0x3CC   /* Graphics enable processor 0 */
 76 #define EGA_GFX_E1      0x3CA   /* Graphics enable processor 1 */
 77 
 78 /* VGA index register ports */
 79 #define VGA_CRT_IC      0x3D4   /* CRT Controller Index - color emulation */
 80 #define VGA_CRT_IM      0x3B4   /* CRT Controller Index - mono emulation */
 81 #define VGA_ATT_IW      0x3C0   /* Attribute Controller Index & Data Write Register */
 82 #define VGA_GFX_I       0x3CE   /* Graphics Controller Index */
 83 #define VGA_SEQ_I       0x3C4   /* Sequencer Index */
 84 #define VGA_PEL_IW      0x3C8   /* PEL Write Index */
 85 #define VGA_PEL_IR      0x3C7   /* PEL Read Index */
 86 
 87 /* standard VGA indexes max counts */
 88 #define VGA_CRT_C       0x19    /* Number of CRT Controller Registers */
 89 #define VGA_ATT_C       0x15    /* Number of Attribute Controller Registers */
 90 #define VGA_GFX_C       0x09    /* Number of Graphics Controller Registers */
 91 #define VGA_SEQ_C       0x05    /* Number of Sequencer Registers */
 92 #define VGA_MIS_C       0x01    /* Number of Misc Output Register */
 93 
 94 /* VGA misc register bit masks */
 95 #define VGA_MIS_COLOR           0x01
 96 #define VGA_MIS_ENB_MEM_ACCESS  0x02
 97 #define VGA_MIS_DCLK_28322_720  0x04
 98 #define VGA_MIS_ENB_PLL_LOAD    (0x04 | 0x08)
 99 #define VGA_MIS_SEL_HIGH_PAGE   0x20
100 
101 /* VGA CRT controller register indices */
102 #define VGA_CRTC_H_TOTAL        0
103 #define VGA_CRTC_H_DISP         1
104 #define VGA_CRTC_H_BLANK_START  2
105 #define VGA_CRTC_H_BLANK_END    3
106 #define VGA_CRTC_H_SYNC_START   4
107 #define VGA_CRTC_H_SYNC_END     5
108 #define VGA_CRTC_V_TOTAL        6
109 #define VGA_CRTC_OVERFLOW       7
110 #define VGA_CRTC_PRESET_ROW     8
111 #define VGA_CRTC_MAX_SCAN       9
112 #define VGA_CRTC_CURSOR_START   0x0A
113 #define VGA_CRTC_CURSOR_END     0x0B
114 #define VGA_CRTC_START_HI       0x0C
115 #define VGA_CRTC_START_LO       0x0D
116 #define VGA_CRTC_CURSOR_HI      0x0E
117 #define VGA_CRTC_CURSOR_LO      0x0F
118 #define VGA_CRTC_V_SYNC_START   0x10
119 #define VGA_CRTC_V_SYNC_END     0x11
120 #define VGA_CRTC_V_DISP_END     0x12
121 #define VGA_CRTC_OFFSET         0x13
122 #define VGA_CRTC_UNDERLINE      0x14
123 #define VGA_CRTC_V_BLANK_START  0x15
124 #define VGA_CRTC_V_BLANK_END    0x16
125 #define VGA_CRTC_MODE           0x17
126 #define VGA_CRTC_LINE_COMPARE   0x18
127 #define VGA_CRTC_REGS           VGA_CRT_C
128 
129 /* VGA CRT controller bit masks */
130 #define VGA_CR11_LOCK_CR0_CR7   0x80 /* lock writes to CR0 - CR7 */
131 #define VGA_CR17_H_V_SIGNALS_ENABLED 0x80
132 
133 /* VGA attribute controller register indices */
134 #define VGA_ATC_PALETTE0        0x00
135 #define VGA_ATC_PALETTE1        0x01
136 #define VGA_ATC_PALETTE2        0x02
137 #define VGA_ATC_PALETTE3        0x03
138 #define VGA_ATC_PALETTE4        0x04
139 #define VGA_ATC_PALETTE5        0x05
140 #define VGA_ATC_PALETTE6        0x06
141 #define VGA_ATC_PALETTE7        0x07
142 #define VGA_ATC_PALETTE8        0x08
143 #define VGA_ATC_PALETTE9        0x09
144 #define VGA_ATC_PALETTEA        0x0A
145 #define VGA_ATC_PALETTEB        0x0B
146 #define VGA_ATC_PALETTEC        0x0C
147 #define VGA_ATC_PALETTED        0x0D
148 #define VGA_ATC_PALETTEE        0x0E
149 #define VGA_ATC_PALETTEF        0x0F
150 #define VGA_ATC_MODE            0x10
151 #define VGA_ATC_OVERSCAN        0x11
152 #define VGA_ATC_PLANE_ENABLE    0x12
153 #define VGA_ATC_PEL             0x13
154 #define VGA_ATC_COLOR_PAGE      0x14
155 
156 #define VGA_AR_ENABLE_DISPLAY   0x20
157 
158 /* VGA sequencer register indices */
159 #define VGA_SEQ_RESET           0x00
160 #define VGA_SEQ_CLOCK_MODE      0x01
161 #define VGA_SEQ_PLANE_WRITE     0x02
162 #define VGA_SEQ_CHARACTER_MAP   0x03
163 #define VGA_SEQ_MEMORY_MODE     0x04
164 
165 /* VGA sequencer register bit masks */
166 #define VGA_SR01_CHAR_CLK_8DOTS 0x01 /* bit 0: character clocks 8 dots wide are generated */
167 #define VGA_SR01_SCREEN_OFF     0x20 /* bit 5: Screen is off */
168 #define VGA_SR02_ALL_PLANES     0x0F /* bits 3-0: enable access to all planes */
169 #define VGA_SR04_EXT_MEM        0x02 /* bit 1: allows complete mem access to 256K */
170 #define VGA_SR04_SEQ_MODE       0x04 /* bit 2: directs system to use a sequential addressing mode */
171 #define VGA_SR04_CHN_4M         0x08 /* bit 3: selects modulo 4 addressing for CPU access to display memory */
172 
173 /* VGA graphics controller register indices */
174 #define VGA_GFX_SR_VALUE        0x00
175 #define VGA_GFX_SR_ENABLE       0x01
176 #define VGA_GFX_COMPARE_VALUE   0x02
177 #define VGA_GFX_DATA_ROTATE     0x03
178 #define VGA_GFX_PLANE_READ      0x04
179 #define VGA_GFX_MODE            0x05
180 #define VGA_GFX_MISC            0x06
181 #define VGA_GFX_COMPARE_MASK    0x07
182 #define VGA_GFX_BIT_MASK        0x08
183 
184 /* VGA graphics controller bit masks */
185 #define VGA_GR06_GRAPHICS_MODE  0x01
186 
187 /* macro for composing an 8-bit VGA register index and value
188  * into a single 16-bit quantity */
189 #define VGA_OUT16VAL(v, r)       (((v) << 8) | (r))
190 
191 /* decide whether we should enable the faster 16-bit VGA register writes */
192 #ifdef __LITTLE_ENDIAN
193 #define VGA_OUTW_WRITE
194 #endif
195 
196 /* VGA State Save and Restore */
197 #define VGA_SAVE_FONT0 1  /* save/restore plane 2 fonts   */
198 #define VGA_SAVE_FONT1 2  /* save/restore plane 3 fonts   */
199 #define VGA_SAVE_TEXT  4  /* save/restore plane 0/1 fonts */
200 #define VGA_SAVE_FONTS 7  /* save/restore all fonts       */
201 #define VGA_SAVE_MODE  8  /* save/restore video mode      */
202 #define VGA_SAVE_CMAP  16 /* save/restore color map/DAC   */
203 
204 struct vgastate {
205         void __iomem *vgabase;  /* mmio base, if supported                 */
206         unsigned long membase;  /* VGA window base, 0 for default - 0xA000 */
207         __u32 memsize;          /* VGA window size, 0 for default 64K      */
208         __u32 flags;            /* what state[s] to save (see VGA_SAVE_*)  */
209         __u32 depth;            /* current fb depth, not important         */
210         __u32 num_attr;         /* number of att registers, 0 for default  */
211         __u32 num_crtc;         /* number of crt registers, 0 for default  */
212         __u32 num_gfx;          /* number of gfx registers, 0 for default  */
213         __u32 num_seq;          /* number of seq registers, 0 for default  */
214         void *vidstate;
215 };      
216 
217 extern int save_vga(struct vgastate *state);
218 extern int restore_vga(struct vgastate *state);
219 
220 /*
221  * generic VGA port read/write
222  */
223  
224 static inline unsigned char vga_io_r (unsigned short port)
225 {
226         return inb_p(port);
227 }
228 
229 static inline void vga_io_w (unsigned short port, unsigned char val)
230 {
231         outb_p(val, port);
232 }
233 
234 static inline void vga_io_w_fast (unsigned short port, unsigned char reg,
235                                   unsigned char val)
236 {
237         outw(VGA_OUT16VAL (val, reg), port);
238 }
239 
240 static inline unsigned char vga_mm_r (void __iomem *regbase, unsigned short port)
241 {
242         return readb (regbase + port);
243 }
244 
245 static inline void vga_mm_w (void __iomem *regbase, unsigned short port, unsigned char val)
246 {
247         writeb (val, regbase + port);
248 }
249 
250 static inline void vga_mm_w_fast (void __iomem *regbase, unsigned short port,
251                                   unsigned char reg, unsigned char val)
252 {
253         writew (VGA_OUT16VAL (val, reg), regbase + port);
254 }
255 
256 static inline unsigned char vga_r (void __iomem *regbase, unsigned short port)
257 {
258         if (regbase)
259                 return vga_mm_r (regbase, port);
260         else
261                 return vga_io_r (port);
262 }
263 
264 static inline void vga_w (void __iomem *regbase, unsigned short port, unsigned char val)
265 {
266         if (regbase)
267                 vga_mm_w (regbase, port, val);
268         else
269                 vga_io_w (port, val);
270 }
271 
272 
273 static inline void vga_w_fast (void __iomem *regbase, unsigned short port,
274                                unsigned char reg, unsigned char val)
275 {
276         if (regbase)
277                 vga_mm_w_fast (regbase, port, reg, val);
278         else
279                 vga_io_w_fast (port, reg, val);
280 }
281 
282 
283 /*
284  * VGA CRTC register read/write
285  */
286  
287 static inline unsigned char vga_rcrt (void __iomem *regbase, unsigned char reg)
288 {
289         vga_w (regbase, VGA_CRT_IC, reg);
290         return vga_r (regbase, VGA_CRT_DC);
291 }
292 
293 static inline void vga_wcrt (void __iomem *regbase, unsigned char reg, unsigned char val)
294 {
295 #ifdef VGA_OUTW_WRITE
296         vga_w_fast (regbase, VGA_CRT_IC, reg, val);
297 #else
298         vga_w (regbase, VGA_CRT_IC, reg);
299         vga_w (regbase, VGA_CRT_DC, val);
300 #endif /* VGA_OUTW_WRITE */
301 }
302 
303 static inline unsigned char vga_io_rcrt (unsigned char reg)
304 {
305         vga_io_w (VGA_CRT_IC, reg);
306         return vga_io_r (VGA_CRT_DC);
307 }
308 
309 static inline void vga_io_wcrt (unsigned char reg, unsigned char val)
310 {
311 #ifdef VGA_OUTW_WRITE
312         vga_io_w_fast (VGA_CRT_IC, reg, val);
313 #else
314         vga_io_w (VGA_CRT_IC, reg);
315         vga_io_w (VGA_CRT_DC, val);
316 #endif /* VGA_OUTW_WRITE */
317 }
318 
319 static inline unsigned char vga_mm_rcrt (void __iomem *regbase, unsigned char reg)
320 {
321         vga_mm_w (regbase, VGA_CRT_IC, reg);
322         return vga_mm_r (regbase, VGA_CRT_DC);
323 }
324 
325 static inline void vga_mm_wcrt (void __iomem *regbase, unsigned char reg, unsigned char val)
326 {
327 #ifdef VGA_OUTW_WRITE
328         vga_mm_w_fast (regbase, VGA_CRT_IC, reg, val);
329 #else
330         vga_mm_w (regbase, VGA_CRT_IC, reg);
331         vga_mm_w (regbase, VGA_CRT_DC, val);
332 #endif /* VGA_OUTW_WRITE */
333 }
334 
335 
336 /*
337  * VGA sequencer register read/write
338  */
339  
340 static inline unsigned char vga_rseq (void __iomem *regbase, unsigned char reg)
341 {
342         vga_w (regbase, VGA_SEQ_I, reg);
343         return vga_r (regbase, VGA_SEQ_D);
344 }
345 
346 static inline void vga_wseq (void __iomem *regbase, unsigned char reg, unsigned char val)
347 {
348 #ifdef VGA_OUTW_WRITE
349         vga_w_fast (regbase, VGA_SEQ_I, reg, val);
350 #else
351         vga_w (regbase, VGA_SEQ_I, reg);
352         vga_w (regbase, VGA_SEQ_D, val);
353 #endif /* VGA_OUTW_WRITE */
354 }
355 
356 static inline unsigned char vga_io_rseq (unsigned char reg)
357 {
358         vga_io_w (VGA_SEQ_I, reg);
359         return vga_io_r (VGA_SEQ_D);
360 }
361 
362 static inline void vga_io_wseq (unsigned char reg, unsigned char val)
363 {
364 #ifdef VGA_OUTW_WRITE
365         vga_io_w_fast (VGA_SEQ_I, reg, val);
366 #else
367         vga_io_w (VGA_SEQ_I, reg);
368         vga_io_w (VGA_SEQ_D, val);
369 #endif /* VGA_OUTW_WRITE */
370 }
371 
372 static inline unsigned char vga_mm_rseq (void __iomem *regbase, unsigned char reg)
373 {
374         vga_mm_w (regbase, VGA_SEQ_I, reg);
375         return vga_mm_r (regbase, VGA_SEQ_D);
376 }
377 
378 static inline void vga_mm_wseq (void __iomem *regbase, unsigned char reg, unsigned char val)
379 {
380 #ifdef VGA_OUTW_WRITE
381         vga_mm_w_fast (regbase, VGA_SEQ_I, reg, val);
382 #else
383         vga_mm_w (regbase, VGA_SEQ_I, reg);
384         vga_mm_w (regbase, VGA_SEQ_D, val);
385 #endif /* VGA_OUTW_WRITE */
386 }
387 
388 /*
389  * VGA graphics controller register read/write
390  */
391  
392 static inline unsigned char vga_rgfx (void __iomem *regbase, unsigned char reg)
393 {
394         vga_w (regbase, VGA_GFX_I, reg);
395         return vga_r (regbase, VGA_GFX_D);
396 }
397 
398 static inline void vga_wgfx (void __iomem *regbase, unsigned char reg, unsigned char val)
399 {
400 #ifdef VGA_OUTW_WRITE
401         vga_w_fast (regbase, VGA_GFX_I, reg, val);
402 #else
403         vga_w (regbase, VGA_GFX_I, reg);
404         vga_w (regbase, VGA_GFX_D, val);
405 #endif /* VGA_OUTW_WRITE */
406 }
407 
408 static inline unsigned char vga_io_rgfx (unsigned char reg)
409 {
410         vga_io_w (VGA_GFX_I, reg);
411         return vga_io_r (VGA_GFX_D);
412 }
413 
414 static inline void vga_io_wgfx (unsigned char reg, unsigned char val)
415 {
416 #ifdef VGA_OUTW_WRITE
417         vga_io_w_fast (VGA_GFX_I, reg, val);
418 #else
419         vga_io_w (VGA_GFX_I, reg);
420         vga_io_w (VGA_GFX_D, val);
421 #endif /* VGA_OUTW_WRITE */
422 }
423 
424 static inline unsigned char vga_mm_rgfx (void __iomem *regbase, unsigned char reg)
425 {
426         vga_mm_w (regbase, VGA_GFX_I, reg);
427         return vga_mm_r (regbase, VGA_GFX_D);
428 }
429 
430 static inline void vga_mm_wgfx (void __iomem *regbase, unsigned char reg, unsigned char val)
431 {
432 #ifdef VGA_OUTW_WRITE
433         vga_mm_w_fast (regbase, VGA_GFX_I, reg, val);
434 #else
435         vga_mm_w (regbase, VGA_GFX_I, reg);
436         vga_mm_w (regbase, VGA_GFX_D, val);
437 #endif /* VGA_OUTW_WRITE */
438 }
439 
440 
441 /*
442  * VGA attribute controller register read/write
443  */
444  
445 static inline unsigned char vga_rattr (void __iomem *regbase, unsigned char reg)
446 {
447         vga_w (regbase, VGA_ATT_IW, reg);
448         return vga_r (regbase, VGA_ATT_R);
449 }
450 
451 static inline void vga_wattr (void __iomem *regbase, unsigned char reg, unsigned char val)
452 {
453         vga_w (regbase, VGA_ATT_IW, reg);
454         vga_w (regbase, VGA_ATT_W, val);
455 }
456 
457 static inline unsigned char vga_io_rattr (unsigned char reg)
458 {
459         vga_io_w (VGA_ATT_IW, reg);
460         return vga_io_r (VGA_ATT_R);
461 }
462 
463 static inline void vga_io_wattr (unsigned char reg, unsigned char val)
464 {
465         vga_io_w (VGA_ATT_IW, reg);
466         vga_io_w (VGA_ATT_W, val);
467 }
468 
469 static inline unsigned char vga_mm_rattr (void __iomem *regbase, unsigned char reg)
470 {
471         vga_mm_w (regbase, VGA_ATT_IW, reg);
472         return vga_mm_r (regbase, VGA_ATT_R);
473 }
474 
475 static inline void vga_mm_wattr (void __iomem *regbase, unsigned char reg, unsigned char val)
476 {
477         vga_mm_w (regbase, VGA_ATT_IW, reg);
478         vga_mm_w (regbase, VGA_ATT_W, val);
479 }
480 
481 #endif /* __linux_video_vga_h__ */
482 
  
