#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UISUIBIANSELLRIGHTWIDGETCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7BCD7E0)
#define MOLEMOLE_UISUIBIANSELLRIGHTWIDGETCONTROLLER_VIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7BCD820)
#define MOLEMOLE_UISUIBIANSELLRIGHTWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__15_0_OFFSET UNITYSDK_OFFSET(0x7BCD830)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianSellRightWidgetController_ViewModel___c_TypeDefinitionIndex = 68179;

	class UISuibianSellRightWidgetController_ViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::UInt32>** StaticGet___9__15_0()
		{
			return (::System::Func_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianSellRightWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x39A00);
		}
		static ::MoleMole::UISuibianSellRightWidgetController_ViewModel___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianSellRightWidgetController_ViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianSellRightWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x39A08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSELLRIGHTWIDGETCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSELLRIGHTWIDGETCONTROLLER_VIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _OnCreateProperty_b__15_0()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSELLRIGHTWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__15_0_OFFSET))(this);
		}
	};
}
