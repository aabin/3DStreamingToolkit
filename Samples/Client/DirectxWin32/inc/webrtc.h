#pragma once

//WebRTC unreferenced formal parameters in headers
#pragma warning(disable : 4100)

//WebRTC conversion from 'uint64_t' to 'uint32_t', possible loss of data
#pragma warning(disable : 4244)

#include "conductor.h"
#include "client_main_window.h"
#include "flagdefs.h"
#include "peer_connection_client.h"
#include "webrtc/rtc_base/checks.h"
#include "webrtc/rtc_base/ssladapter.h"
#include "webrtc/rtc_base/win32socketinit.h"
#include "webrtc/rtc_base/win32socketserver.h"

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dmoguids.lib")
#pragma comment(lib, "wmcodecdspuuid.lib")
#pragma comment(lib, "secur32.lib")
#pragma comment(lib, "msdmo.lib")
#pragma comment(lib, "strmiids.lib")
#pragma comment(lib, "ws2_32.lib") 
#pragma comment(lib, "common_video.lib")
#pragma comment(lib, "webrtc.lib")
#pragma comment(lib, "boringssl_asm.lib")
#pragma comment(lib, "field_trial_default.lib")
#pragma comment(lib, "metrics_default.lib")
#pragma comment(lib, "protobuf_full.lib")


