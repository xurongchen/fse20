
#ifndef THRESHOLDSTRATEGY_EXPORT_H
#define THRESHOLDSTRATEGY_EXPORT_H

#ifdef THRESHOLDSTRATEGY_STATIC_DEFINE
#  define THRESHOLDSTRATEGY_EXPORT
#  define THRESHOLDSTRATEGY_NO_EXPORT
#else
#  ifndef THRESHOLDSTRATEGY_EXPORT
#    ifdef ThresholdStrategy_EXPORTS
        /* We are building this library */
#      define THRESHOLDSTRATEGY_EXPORT 
#    else
        /* We are using this library */
#      define THRESHOLDSTRATEGY_EXPORT 
#    endif
#  endif

#  ifndef THRESHOLDSTRATEGY_NO_EXPORT
#    define THRESHOLDSTRATEGY_NO_EXPORT 
#  endif
#endif

#ifndef THRESHOLDSTRATEGY_DEPRECATED
#  define THRESHOLDSTRATEGY_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef THRESHOLDSTRATEGY_DEPRECATED_EXPORT
#  define THRESHOLDSTRATEGY_DEPRECATED_EXPORT THRESHOLDSTRATEGY_EXPORT THRESHOLDSTRATEGY_DEPRECATED
#endif

#ifndef THRESHOLDSTRATEGY_DEPRECATED_NO_EXPORT
#  define THRESHOLDSTRATEGY_DEPRECATED_NO_EXPORT THRESHOLDSTRATEGY_NO_EXPORT THRESHOLDSTRATEGY_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef THRESHOLDSTRATEGY_NO_DEPRECATED
#    define THRESHOLDSTRATEGY_NO_DEPRECATED
#  endif
#endif

#endif /* THRESHOLDSTRATEGY_EXPORT_H */