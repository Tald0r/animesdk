#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_882;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGAMEUIBOARDPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD572910)
#define MOLEMOLE_UIGAMEUIBOARDPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD572950)
#define MOLEMOLE_UIGAMEUIBOARDPAGECONTROLLER___C__SETUPACTIVITYDATAANDCONFIGS_B__13_0_OFFSET UNITYSDK_OFFSET(0xD572960)

namespace MoleMole
{
	inline static constexpr unsigned int UIGameUIBoardPageController___c_TypeDefinitionIndex = 78532;

	class UIGameUIBoardPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_882*>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_882*>**)Il2CppClass::FromTypeDefinitionIndex(UIGameUIBoardPageController___c_TypeDefinitionIndex)->GetStaticField(0x397D0);
		}
		static ::MoleMole::UIGameUIBoardPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIGameUIBoardPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGameUIBoardPageController___c_TypeDefinitionIndex)->GetStaticField(0x397D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGAMEUIBOARDPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGAMEUIBOARDPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetupActivityDataAndConfigs_b__13_0(::Class_2_208CC9941471731A_882* x, ::Class_2_208CC9941471731A_882* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_882*, ::Class_2_208CC9941471731A_882*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGAMEUIBOARDPAGECONTROLLER___C__SETUPACTIVITYDATAANDCONFIGS_B__13_0_OFFSET))(this, x, y);
		}
	};
}
