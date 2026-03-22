#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B130160)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B1301D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B12FE20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B12FE10)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_setOverlay_TypeDefinitionIndex = 29577;

	class BrowserNative_Calltype_zfb_setOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETOVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 browserId, ::System::Int32 overlayBrowserId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETOVERLAY_INVOKE_OFFSET))(this, browserId, overlayBrowserId);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 browserId, ::System::Int32 overlayBrowserId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETOVERLAY_BEGININVOKE_OFFSET))(this, browserId, overlayBrowserId, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETOVERLAY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
