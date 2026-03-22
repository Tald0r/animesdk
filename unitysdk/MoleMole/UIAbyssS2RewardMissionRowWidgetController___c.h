#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC24E540)
#define MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC24E580)
#define MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__INITREWARD_B__10_0_OFFSET UNITYSDK_OFFSET(0xC24E5D0)
#define MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__ONTAKEREWARDERRORHANDLE_B__7_0_OFFSET UNITYSDK_OFFSET(0xC24E590)
#define MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__ONTAKEREWARDERRORHANDLE_B__7_1_OFFSET UNITYSDK_OFFSET(0xC24E5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RewardMissionRowWidgetController___c_TypeDefinitionIndex = 73395;

	class UIAbyssS2RewardMissionRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2FD30);
		}
		static ::System::Action** StaticGet___9__7_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2FD38);
		}
		static ::System::Comparison_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2FD40);
		}
		static ::MoleMole::UIAbyssS2RewardMissionRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2RewardMissionRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2FD48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnTakeRewardErrorHandle_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__ONTAKEREWARDERRORHANDLE_B__7_0_OFFSET))(this);
		}

		::System::Void _OnTakeRewardErrorHandle_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__ONTAKEREWARDERRORHANDLE_B__7_1_OFFSET))(this);
		}

		::System::Int32 _InitReward_b__10_0(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 a, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__INITREWARD_B__10_0_OFFSET))(this, a, b);
		}
	};
}
