#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_240;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA259690)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__CLEARMATERIAL_B__28_0_OFFSET UNITYSDK_OFFSET(0xA2596E0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA2596D0)
#define MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__SETCONSUME_B__32_0_OFFSET UNITYSDK_OFFSET(0xA259730)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooLevelUpWidgetController___c_TypeDefinitionIndex = 68510;

	class UIBangbooLevelUpWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangbooLevelUpWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooLevelUpWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooLevelUpWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2CF20);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_240*>** StaticGet___9__32_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_240*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooLevelUpWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2CF28);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_240*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_240*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooLevelUpWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2CF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ClearMaterial_b__28_0(::Class_2_208CC9941471731A_240* ext, ::Class_2_208CC9941471731A_240* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_240*, ::Class_2_208CC9941471731A_240*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__CLEARMATERIAL_B__28_0_OFFSET))(this, ext, templateExt);
		}

		::System::Int32 _SetConsume_b__32_0(::Class_2_208CC9941471731A_240* ext, ::Class_2_208CC9941471731A_240* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_240*, ::Class_2_208CC9941471731A_240*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOLEVELUPWIDGETCONTROLLER___C__SETCONSUME_B__32_0_OFFSET))(this, ext, templateExt);
		}
	};
}
