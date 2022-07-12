const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#190f16", /* black   */
  [1] = "#DF252D", /* red     */
  [2] = "#B35A4E", /* green   */
  [3] = "#BCA45C", /* yellow  */
  [4] = "#677681", /* blue    */
  [5] = "#7593A3", /* magenta */
  [6] = "#96A7A7", /* cyan    */
  [7] = "#dbd7d1", /* white   */

  /* 8 bright colors */
  [8]  = "#999692",  /* black   */
  [9]  = "#DF252D",  /* red     */
  [10] = "#B35A4E", /* green   */
  [11] = "#BCA45C", /* yellow  */
  [12] = "#677681", /* blue    */
  [13] = "#7593A3", /* magenta */
  [14] = "#96A7A7", /* cyan    */
  [15] = "#dbd7d1", /* white   */

  /* special colors */
  [256] = "#190f16", /* background */
  [257] = "#dbd7d1", /* foreground */
  [258] = "#dbd7d1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
