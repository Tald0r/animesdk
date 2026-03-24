#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B;
class Class_1_7807B2B04302CD7B_7;
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEE0300)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDEE0340)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__ONSELECTSOUVENIREND_B__100_1_OFFSET UNITYSDK_OFFSET(0xDEE03D0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__OPENLEVELEND_B__95_0_OFFSET UNITYSDK_OFFSET(0xDEE03B0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__OPENRECOMMANDPAGE_B__144_0_OFFSET UNITYSDK_OFFSET(0xDEE0470)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__REGEVENTS_B__128_1_OFFSET UNITYSDK_OFFSET(0xDEE0460)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__TRIGGERLEVELONENEWBIE_B__70_0_OFFSET UNITYSDK_OFFSET(0xDEE0350)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c_TypeDefinitionIndex = 79915;

	class UIActivityHotpotInGamePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__70_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotInGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x34210);
		}
		static ::System::Func_2<::Class_1_7807B2B04302CD7B_7*, ::System::Int32>** StaticGet___9__95_0()
		{
			return (::System::Func_2<::Class_1_7807B2B04302CD7B_7*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotInGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x34218);
		}
		static ::System::Action_1<::System::EventArgs*>** StaticGet___9__128_1()
		{
			return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotInGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x34220);
		}
		static ::System::Func_2<::Class_1_7807B2B04302CD7B*, ::System::Int32>** StaticGet___9__100_1()
		{
			return (::System::Func_2<::Class_1_7807B2B04302CD7B*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotInGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x34228);
		}
		static ::System::Action** StaticGet___9__144_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotInGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x34230);
		}
		static ::MoleMole::UIActivityHotpotInGamePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityHotpotInGamePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotInGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x34238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerLevelOneNewBie_b__70_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__TRIGGERLEVELONENEWBIE_B__70_0_OFFSET))(this);
		}

		::System::Int32 _OpenLevelEnd_b__95_0(::Class_1_7807B2B04302CD7B_7* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_7807B2B04302CD7B_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__OPENLEVELEND_B__95_0_OFFSET))(this, x);
		}

		::System::Int32 _OnSelectSouvenirEnd_b__100_1(::Class_1_7807B2B04302CD7B* _)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_7807B2B04302CD7B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__ONSELECTSOUVENIREND_B__100_1_OFFSET))(this, _);
		}

		::System::Void _RegEvents_b__128_1(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__REGEVENTS_B__128_1_OFFSET))(this, eventArgs);
		}

		::System::Void _OpenRecommandPage_b__144_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__OPENRECOMMANDPAGE_B__144_0_OFFSET))(this);
		}
	};
}
