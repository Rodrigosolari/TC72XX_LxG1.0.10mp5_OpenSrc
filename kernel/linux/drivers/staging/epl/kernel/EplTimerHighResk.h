/****************************************************************************

  (c) SYSTEC electronic GmbH, D-07973 Greiz, August-Bebel-Str. 29
      www.systec-electronic.com

  Project:      openPOWERLINK

  Description:  include file for EPL high resolution Timermodule

  License:

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

    1. Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.

    3. Neither the name of SYSTEC electronic GmbH nor the names of its
       contributors may be used to endorse or promote products derived
       from this software without prior written permission. For written
       permission, please contact info@systec-electronic.com.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
    FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
    COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
    CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
    LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
    ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
    POSSIBILITY OF SUCH DAMAGE.

    Severability Clause:

        If a provision of this License is or becomes illegal, invalid or
        unenforceable in any jurisdiction, that shall not affect:
        1. the validity or enforceability in that jurisdiction of any other
           provision of this License; or
        2. the validity or enforceability in other jurisdictions of that or
           any other provision of this License.

  -------------------------------------------------------------------------

                $RCSfile: EplTimerHighResk.h,v $

                $Author: dana_tseng $

                $Revision: 1.3 $  $Date: 2015/08/20 02:25:51 $

                $State: Exp $

                Build Environment:
                    GCC V3.4

  -------------------------------------------------------------------------

  Revision History:

  2006/09/29 d.k.:   start of the implementation

****************************************************************************/

#ifndef _EPLTIMERHIGHRESK_H_
#define _EPLTIMERHIGHRESK_H_

#include "../EplTimer.h"

tEplKernel EplTimerHighReskInit(void);

tEplKernel EplTimerHighReskAddInstance(void);

tEplKernel EplTimerHighReskDelInstance(void);

tEplKernel EplTimerHighReskSetTimerNs(tEplTimerHdl *pTimerHdl_p,
				      unsigned long long ullTimeNs_p,
				      tEplTimerkCallback pfnCallback_p,
				      unsigned long ulArgument_p,
				      BOOL fContinuously_p);

tEplKernel EplTimerHighReskModifyTimerNs(tEplTimerHdl *pTimerHdl_p,
					 unsigned long long ullTimeNs_p,
					 tEplTimerkCallback pfnCallback_p,
					 unsigned long ulArgument_p,
					 BOOL fContinuously_p);

tEplKernel EplTimerHighReskDeleteTimer(tEplTimerHdl *pTimerHdl_p);

#endif // #ifndef _EPLTIMERHIGHRESK_H_