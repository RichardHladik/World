//-----------------------------------------------------------------------------
// Copyright 2012 Masanori Morise
// Author: mmorise [at] yamanashi.ac.jp (Masanori Morise)
// Last update: 2017/02/01
//
// These functions and variables are defined to use FFT as well as FFTW
// Please see fft.cpp to show the detailed information
//-----------------------------------------------------------------------------
#ifndef WORLD_FFT_H_
#define WORLD_FFT_H_

#include "world/macrodefinitions.h"
#include <fftw3.h>

WORLD_BEGIN_C_DECLS

// Commands for FFT (This is the same as FFTW)
#define FFT_FORWARD FFTW_FORWARD
#define FFT_BACKWARD FFTW_BACKWARD
#define FFT_ESTIMATE FFTW_EXHAUSTIVE
#define fft_complex fftw_complex
#define fft_plan fftw_plan

#define fft_plan_dft_1d fftw_plan_dft_1d
#define fft_plan_dft_c2r_1d fftw_plan_dft_c2r_1d
#define fft_plan_dft_r2c_1d fftw_plan_dft_r2c_1d
#define fft_execute fftw_execute
#define fft_destroy_plan fftw_destroy_plan

WORLD_END_C_DECLS

#endif  // WORLD_FFT_H_
