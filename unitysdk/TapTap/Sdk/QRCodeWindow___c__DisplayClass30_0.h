#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace TapTap::Sdk { class AccessToken; }
namespace TapTap::Sdk { class QRCodeWindow; }

#define TAPTAP_SDK_QRCODEWINDOW___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C6740)
#define TAPTAP_SDK_QRCODEWINDOW___C__DISPLAYCLASS30_0__GETPROFILE_B__0_OFFSET UNITYSDK_OFFSET(0x1A7C84E0)
#define TAPTAP_SDK_QRCODEWINDOW___C__DISPLAYCLASS30_0__GETPROFILE_B__1_OFFSET UNITYSDK_OFFSET(0x1A7C8D20)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int QRCodeWindow___c__DisplayClass30_0_TypeDefinitionIndex = 9446;

	class QRCodeWindow___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::TapTap::Sdk::QRCodeWindow* __4__this; // 0x10
		::TapTap::Sdk::AccessToken* accessToken; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetProfile_b__0(::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW___C__DISPLAYCLASS30_0__GETPROFILE_B__0_OFFSET))(this, result);
		}

		::System::Void _GetProfile_b__1(::System::Int32 error, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW___C__DISPLAYCLASS30_0__GETPROFILE_B__1_OFFSET))(this, error, msg);
		}
	};
}
