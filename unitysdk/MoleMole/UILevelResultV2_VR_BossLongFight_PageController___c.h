#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_34;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE25610)
#define MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBE25650)
#define MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C__REALRESTART_B__5_0_OFFSET UNITYSDK_OFFSET(0xBE257E0)
#define MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C___ONCLICKRESTARTWITHCOST_B__1_0_OFFSET UNITYSDK_OFFSET(0xBE25660)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_VR_BossLongFight_PageController___c_TypeDefinitionIndex = 66857;

	class UILevelResultV2_VR_BossLongFight_PageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_34*>** StaticGet___9__1_0()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_34*>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_VR_BossLongFight_PageController___c_TypeDefinitionIndex)->GetStaticField(0x31C50);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_34*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_34*>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_VR_BossLongFight_PageController___c_TypeDefinitionIndex)->GetStaticField(0x31C58);
		}
		static ::MoleMole::UILevelResultV2_VR_BossLongFight_PageController___c** StaticGet___9()
		{
			return (::MoleMole::UILevelResultV2_VR_BossLongFight_PageController___c**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_VR_BossLongFight_PageController___c_TypeDefinitionIndex)->GetStaticField(0x31C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnClickRestartWithCost_b__1_0(::Class_3_48A3D3A34C52331D_34* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_34*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C___ONCLICKRESTARTWITHCOST_B__1_0_OFFSET))(this, msg);
		}

		::System::Void _RealRestart_b__5_0(::Class_3_48A3D3A34C52331D_34* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_34*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_BOSSLONGFIGHT_PAGECONTROLLER___C__REALRESTART_B__5_0_OFFSET))(this, msg);
		}
	};
}
