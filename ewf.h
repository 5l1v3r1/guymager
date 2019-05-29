


#ifndef __EWF_H__
#define __EWF_H__

#if (ENABLE_LIBEWF)
   #include <libewf.h>

   #if ((LIBEWF_VERSION != 20080501) && (LIBEWF_VERSION != 20100226) && (LIBEWF_VERSION != 20111015) && (LIBEWF_VERSION < 20130416))
      #error "Please check EWF documentation for newer Encase formats and adjust following code"
   #endif

   #ifndef LIBEWF_HANDLE
      #define LIBEWF_HANDLE libewf_handle_t
   #endif
#else
   #define LIBEWF_COMPRESSION_NONE 0
   #define LIBEWF_COMPRESSION_FAST 1
   #define LIBEWF_COMPRESSION_BEST 2
#endif

#endif

