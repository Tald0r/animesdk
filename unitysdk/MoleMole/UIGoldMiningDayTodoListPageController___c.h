#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6C6E520)
#define MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6C6E560)
#define MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__SETREWARDVIEW_B__13_0_OFFSET UNITYSDK_OFFSET(0x6C6E570)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayTodoListPageController___c_TypeDefinitionIndex = 71288;

	class UIGoldMiningDayTodoListPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGoldMiningDayTodoListPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIGoldMiningDayTodoListPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayTodoListPageController___c_TypeDefinitionIndex)->GetStaticField(0x2E4E0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayTodoListPageController___c_TypeDefinitionIndex)->GetStaticField(0x2E4E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetRewardView_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__SETREWARDVIEW_B__13_0_OFFSET))(this);
		}
	};
}
