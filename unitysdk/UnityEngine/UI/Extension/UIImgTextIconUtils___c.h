#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB7873D919742DF3_Class_3_F972A9FF1E378E1A;

#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS___C__BUILDICONQUAD_B__7_0_OFFSET UNITYSDK_OFFSET(0x196FD810)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x196FD7C0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x196FD800)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgTextIconUtils___c_TypeDefinitionIndex = 56783;

	class UIImgTextIconUtils___c : public ::System::Object
	{
	public:
		static ::Class_1_BB7873D919742DF3_Class_3_F972A9FF1E378E1A** StaticGet___9__7_0()
		{
			return (::Class_1_BB7873D919742DF3_Class_3_F972A9FF1E378E1A**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils___c_TypeDefinitionIndex)->GetStaticField(0x2DD70);
		}
		static ::UnityEngine::UI::Extension::UIImgTextIconUtils___c** StaticGet___9()
		{
			return (::UnityEngine::UI::Extension::UIImgTextIconUtils___c**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils___c_TypeDefinitionIndex)->GetStaticField(0x2DD78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _BuildIconQuad_b__7_0(::System::UInt16 token, ::System::UInt16 start, ::System::UInt16 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS___C__BUILDICONQUAD_B__7_0_OFFSET))(this, token, start, end);
		}
	};
}
