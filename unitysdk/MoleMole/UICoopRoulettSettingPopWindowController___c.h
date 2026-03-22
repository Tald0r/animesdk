#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_414;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UICOOPROULETTSETTINGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA52F480)
#define MOLEMOLE_UICOOPROULETTSETTINGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA52F4C0)
#define MOLEMOLE_UICOOPROULETTSETTINGPOPWINDOWCONTROLLER___C__GETMESSAGELISTBYTYPE_B__49_1_OFFSET UNITYSDK_OFFSET(0xA52F4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopRoulettSettingPopWindowController___c_TypeDefinitionIndex = 49970;

	class UICoopRoulettSettingPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UICoopRoulettSettingPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UICoopRoulettSettingPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UICoopRoulettSettingPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36A30);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_414*>** StaticGet___9__49_1()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_414*>**)Il2CppClass::FromTypeDefinitionIndex(UICoopRoulettSettingPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36A38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMessageListByType_b__49_1(::Class_2_208CC9941471731A_414* a, ::Class_2_208CC9941471731A_414* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_414*, ::Class_2_208CC9941471731A_414*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGPOPWINDOWCONTROLLER___C__GETMESSAGELISTBYTYPE_B__49_1_OFFSET))(this, a, b);
		}
	};
}
