#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__BINDBUTTON_B__13_0_OFFSET UNITYSDK_OFFSET(0xDF4ADD0)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF4AD80)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDF4ADC0)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__ONRECYLE_B__20_0_OFFSET UNITYSDK_OFFSET(0xDF4AE90)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__REFRESHSCROLLDATA_B__30_0_OFFSET UNITYSDK_OFFSET(0xDF4AEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleResolvePageController___c_TypeDefinitionIndex = 60579;

	class UISuibianTempleResolvePageController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleResolvePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BB80);
		}
		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleResolvePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BB88);
		}
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__30_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleResolvePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BB90);
		}
		static ::MoleMole::UISuibianTempleResolvePageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleResolvePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleResolvePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BB98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindButton_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__BINDBUTTON_B__13_0_OFFSET))(this);
		}

		::System::Void _OnRecyle_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__ONRECYLE_B__20_0_OFFSET))(this);
		}

		::System::Int32 _RefreshScrollData_b__30_0(::System::Int32 itemID1, ::System::Int32 iteID2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__REFRESHSCROLLDATA_B__30_0_OFFSET))(this, itemID1, iteID2);
		}
	};
}
