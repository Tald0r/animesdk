#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD009150)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD009190)
#define MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___C__REFRESHPLAYERINFO_B__26_1_OFFSET UNITYSDK_OFFSET(0xD0091A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoFrameChildWindowController___c_TypeDefinitionIndex = 47848;

	class UIPhotoFrameChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIPhotoFrameChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIPhotoFrameChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIPhotoFrameChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30150);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIPhotoFrameChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _RefreshPlayerInfo_b__26_1(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOFRAMECHILDWINDOWCONTROLLER___C__REFRESHPLAYERINFO_B__26_1_OFFSET))(this, x);
		}
	};
}
