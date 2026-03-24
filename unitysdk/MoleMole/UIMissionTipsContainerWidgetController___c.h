#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8ED7500)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED7540)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__REALPLAY_B__94_0_OFFSET UNITYSDK_OFFSET(0x8ED7550)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c_TypeDefinitionIndex = 70936;

	class UIMissionTipsContainerWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMissionTipsContainerWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMissionTipsContainerWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMissionTipsContainerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x31CA0);
		}
		static ::System::Comparison_1<::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData*>** StaticGet___9__94_0()
		{
			return (::System::Comparison_1<::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData*>**)Il2CppClass::FromTypeDefinitionIndex(UIMissionTipsContainerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x31CA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RealPlay_b__94_0(::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* a, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData*, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__REALPLAY_B__94_0_OFFSET))(this, a, b);
		}
	};
}
