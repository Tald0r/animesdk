#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_871A5AD984DA0F15;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0A3CC0)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A3D00)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYJOINABPVP_B__78_0_OFFSET UNITYSDK_OFFSET(0xC0A3E30)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYJOINABPVP_B__78_1_OFFSET UNITYSDK_OFFSET(0xC0A3E40)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYSHOWRANKCHANGEDIALOG_B__31_0_OFFSET UNITYSDK_OFFSET(0xC0A3D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPPageController___c_TypeDefinitionIndex = 57522;

	class UIAutoBattlePVPPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Int32>** StaticGet___9__78_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPageController___c_TypeDefinitionIndex)->GetStaticField(0x32450);
		}
		static ::System::Action** StaticGet___9__31_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPageController___c_TypeDefinitionIndex)->GetStaticField(0x32458);
		}
		static ::System::Action_1<::Class_3_871A5AD984DA0F15*>** StaticGet___9__78_0()
		{
			return (::System::Action_1<::Class_3_871A5AD984DA0F15*>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPageController___c_TypeDefinitionIndex)->GetStaticField(0x32460);
		}
		static ::MoleMole::UIAutoBattlePVPPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAutoBattlePVPPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePVPPageController___c_TypeDefinitionIndex)->GetStaticField(0x32468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TryShowRankChangeDialog_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYSHOWRANKCHANGEDIALOG_B__31_0_OFFSET))(this);
		}

		::System::Void _TryJoinABPVP_b__78_0(::Class_3_871A5AD984DA0F15* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_871A5AD984DA0F15*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYJOINABPVP_B__78_0_OFFSET))(this, roomInfo);
		}

		::System::Void _TryJoinABPVP_b__78_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__TRYJOINABPVP_B__78_1_OFFSET))(this, _);
		}
	};
}
