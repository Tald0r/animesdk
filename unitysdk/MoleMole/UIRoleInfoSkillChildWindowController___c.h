#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_281;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF31590)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDF315D0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__INTERNALREFRESHDETAILVIEW_B__70_0_OFFSET UNITYSDK_OFFSET(0xDF315E0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__ONGOTOTUTORIAL_B__90_2_OFFSET UNITYSDK_OFFSET(0xDF31790)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__REFRESHUNLOCKCONDITION_B__75_0_OFFSET UNITYSDK_OFFSET(0xDF316D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex = 48920;

	class UIRoleInfoSkillChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__90_2()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3BB00);
		}
		static ::MoleMole::UIRoleInfoSkillChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleInfoSkillChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3BB08);
		}
		static ::System::Action** StaticGet___9__75_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3BB10);
		}
		static ::System::Predicate_1<::Class_2_208CC9941471731A_281*>** StaticGet___9__70_0()
		{
			return (::System::Predicate_1<::Class_2_208CC9941471731A_281*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoSkillChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3BB18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InternalRefreshDetailView_b__70_0(::Class_2_208CC9941471731A_281* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_281*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__INTERNALREFRESHDETAILVIEW_B__70_0_OFFSET))(this, x);
		}

		::System::Void _RefreshUnlockCondition_b__75_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__REFRESHUNLOCKCONDITION_B__75_0_OFFSET))(this);
		}

		::System::String* _OnGotoTutorial_b__90_2(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__ONGOTOTUTORIAL_B__90_2_OFFSET))(this, _);
		}
	};
}
