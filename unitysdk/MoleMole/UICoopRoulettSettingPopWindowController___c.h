#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_12;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UICOOPROULETTSETTINGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xADC6500)
#define MOLEMOLE_UICOOPROULETTSETTINGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xADC6540)
#define MOLEMOLE_UICOOPROULETTSETTINGPOPWINDOWCONTROLLER___C__GETMESSAGELISTBYTYPE_B__49_1_OFFSET UNITYSDK_OFFSET(0xADC6550)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopRoulettSettingPopWindowController___c_TypeDefinitionIndex = 50005;

	class UICoopRoulettSettingPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_12*>** StaticGet___9__49_1()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_12*>**)Il2CppClass::FromTypeDefinitionIndex(UICoopRoulettSettingPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x396D0);
		}
		static ::MoleMole::UICoopRoulettSettingPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UICoopRoulettSettingPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UICoopRoulettSettingPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x396D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMessageListByType_b__49_1(::Class_2_208CC9941471731A_12* a, ::Class_2_208CC9941471731A_12* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_12*, ::Class_2_208CC9941471731A_12*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGPOPWINDOWCONTROLLER___C__GETMESSAGELISTBYTYPE_B__49_1_OFFSET))(this, a, b);
		}
	};
}
