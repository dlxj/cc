//
//  config.h
//  pdfopt
//
//  Created by vvw on 2020/1/16.
//  Copyright © 2020 vvw. All rights reserved.
//

#ifndef config_h
#define config_h

#ifdef HAVE_GOCR_LIB
#undef HAVE_GOCR_LIB
#endif

#ifdef HAVE_DJVU_LIB
#undef HAVE_DJVU_LIB
#endif

#ifdef HAVE_MUPDF_LIB
#undef HAVE_MUPDF_LIB
#endif

#ifdef MSWINGUI
#undef MSWINGUI
#endif


#endif /* config_h */
