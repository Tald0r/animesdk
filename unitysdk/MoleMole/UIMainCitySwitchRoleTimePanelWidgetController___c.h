#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x68C3890)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x68C38D0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__ONCLICKSENDTIME_B__31_2_OFFSET UNITYSDK_OFFSET(0x68C38F0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__ONCLICKSENDTIME_B__31_3_OFFSET UNITYSDK_OFFSET(0x68C39F0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__ONCLICKSENDTIME_B__31_4_OFFSET UNITYSDK_OFFSET(0x68C3BA0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__REFRESHSTAGE_B__25_0_OFFSET UNITYSDK_OFFSET(0x68C38E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleTimePanelWidgetController___c_TypeDefinitionIndex = 70189;

	class UIMainCitySwitchRoleTimePanelWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_2_67F3C5E647F33C2D*>** StaticGet___9__31_2()
		{
			return (::System::Action_1<::Class_2_67F3C5E647F33C2D*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRoleTimePanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34C10);
		}
		static ::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRoleTimePanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34C18);
		}
		static ::System::Action** StaticGet___9__31_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRoleTimePanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34C20);
		}
		static ::System::Action** StaticGet___9__25_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRoleTimePanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34C28);
		}
		static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__31_4()
		{
			return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRoleTimePanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshStage_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__REFRESHSTAGE_B__25_0_OFFSET))(this);
		}

		::System::Void _OnClickSendTime_b__31_2(::Class_2_67F3C5E647F33C2D* teleportByTransition)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__ONCLICKSENDTIME_B__31_2_OFFSET))(this, teleportByTransition);
		}

		::System::Void _OnClickSendTime_b__31_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__ONCLICKSENDTIME_B__31_3_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _OnClickSendTime_b__31_4(::System::Threading::CancellationToken token)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__ONCLICKSENDTIME_B__31_4_OFFSET))(this, token);
		}
	};
}
