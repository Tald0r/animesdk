#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2203E1F22CACEF25_Class_3_F972A9FF1E378E1A;

#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS___C__BUILDICONQUAD_B__7_0_OFFSET UNITYSDK_OFFSET(0x15683A60)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15683A10)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15683A50)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgTextIconUtils___c_TypeDefinitionIndex = 55877;

	class UIImgTextIconUtils___c : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::Extension::UIImgTextIconUtils___c** StaticGet___9()
		{
			return (::UnityEngine::UI::Extension::UIImgTextIconUtils___c**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils___c_TypeDefinitionIndex)->GetStaticField(0x2F560);
		}
		static ::Class_1_2203E1F22CACEF25_Class_3_F972A9FF1E378E1A** StaticGet___9__7_0()
		{
			return (::Class_1_2203E1F22CACEF25_Class_3_F972A9FF1E378E1A**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils___c_TypeDefinitionIndex)->GetStaticField(0x2F568);
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
