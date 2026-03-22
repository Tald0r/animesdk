#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_253;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8821280)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x88212C0)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__ONUIOPEN_B__7_0_OFFSET UNITYSDK_OFFSET(0x88212D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusLevelUpPopWindowController___c_TypeDefinitionIndex = 77345;

	class UIVirusLevelUpPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_253*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_253*>**)Il2CppClass::FromTypeDefinitionIndex(UIVirusLevelUpPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F190);
		}
		static ::MoleMole::UIVirusLevelUpPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIVirusLevelUpPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVirusLevelUpPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpen_b__7_0(::Class_2_208CC9941471731A_253* ext, ::Class_2_208CC9941471731A_253* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_253*, ::Class_2_208CC9941471731A_253*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__ONUIOPEN_B__7_0_OFFSET))(this, ext, templateExt);
		}
	};
}
