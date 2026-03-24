#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5DFC66413CB20B09_Enum_3_A5191D6218CE9E26.h"
#include "unitysdk/Class_2_74BD0166ECF298D9_Struct_2_4AEDF399FA0A1C26.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/CombineTriggerListenParam.h"
#include "unitysdk/Foundation/ViewObject/Structures/FMemberAliveStateCheckAction.h"
#include "unitysdk/Foundation/ViewObject/Structures/FMonsterMemberLeftCheckAction.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class Class_3_30235BB967CBDA73_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_74BD0166ECF298D9_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x64EB0D0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_03EC1F2EB9F6BD24_OFFSET UNITYSDK_OFFSET(0x64EA870)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_062776F7BCEE71D6_OFFSET UNITYSDK_OFFSET(0x64EB390)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_1A3088F8EE1739F2_OFFSET UNITYSDK_OFFSET(0x64EA460)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_25816B4AD877021C_OFFSET UNITYSDK_OFFSET(0x64EA670)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x64EC360)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_3557F75ED858BAD2_OFFSET UNITYSDK_OFFSET(0x64E90C0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_3559476C7C86165D_OFFSET UNITYSDK_OFFSET(0x64EC7A0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_3C470A1D50B2BBB4_OFFSET UNITYSDK_OFFSET(0x64EBCF0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x64E92B0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_54E1EBD4BED4336E_OFFSET UNITYSDK_OFFSET(0x64EA500)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x64EB800)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_7E0D3A7A149A57B6_OFFSET UNITYSDK_OFFSET(0x64EB0C0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x64EA320)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x64EA330)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x64EB950)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x64EBCE0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x64EA310)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_8F7AD00CE70D0A7B_OFFSET UNITYSDK_OFFSET(0x64E76E0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_929D66F905478343_OFFSET UNITYSDK_OFFSET(0x64E8F20)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_98B25803044D202F_OFFSET UNITYSDK_OFFSET(0x64EB960)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_99BCDBABF1684B50_OFFSET UNITYSDK_OFFSET(0x64EC1A0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_A9F82A83DF5851C9_OFFSET UNITYSDK_OFFSET(0x64EB7F0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x64EB1A0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_B82DCAE71D329BD8_OFFSET UNITYSDK_OFFSET(0x64EB810)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x64E77E0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_CD572381EBE7CC80_OFFSET UNITYSDK_OFFSET(0x64E77F0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_D001E91AEC8A16BE_OFFSET UNITYSDK_OFFSET(0x64E9D50)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_D12CA625052AB555_OFFSET UNITYSDK_OFFSET(0x64EBC00)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x64EA340)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_F7AFA71742D01D8C_OFFSET UNITYSDK_OFFSET(0x64EB0E0)
#define CLASS_2_74BD0166ECF298D9_METHOD_2_FA53756A2AB5E247_OFFSET UNITYSDK_OFFSET(0x64E9AC0)
#define CLASS_2_74BD0166ECF298D9_ONATTACH_OFFSET UNITYSDK_OFFSET(0x64E78F0)
#define CLASS_2_74BD0166ECF298D9_ONDETACH_OFFSET UNITYSDK_OFFSET(0x64E7A70)
#define CLASS_2_74BD0166ECF298D9_ONENABLE_OFFSET UNITYSDK_OFFSET(0x64E7D70)
#define CLASS_2_74BD0166ECF298D9_ONREADY_OFFSET UNITYSDK_OFFSET(0x64E9190)
#define CLASS_2_74BD0166ECF298D9_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x64E94D0)
#define CLASS_2_74BD0166ECF298D9__CTOR_OFFSET UNITYSDK_OFFSET(0x64E9FC0)

inline static constexpr unsigned int Class_2_74BD0166ECF298D9_TypeDefinitionIndex = 51451;

class Class_2_74BD0166ECF298D9 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_74BD0166ECF298D9*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Unreal::FGameplayTagContainer>* Field_2_7; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_2; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_8; // 0x30
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction>* Field_2_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_74BD0166ECF298D9_Struct_2_4AEDF399FA0A1C26>* Field_2_3; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_6; // 0x48
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_1; // 0x50
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction>* Field_2_4; // 0x58
	::Foundation::ViewObject::SuiteInfo Field_2_9; // 0x60
	::System::Int32 Field_2_10; // 0x68
	::System::UInt32 Field_2_0; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_8F7AD00CE70D0A7B(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_8F7AD00CE70D0A7B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_2_CD572381EBE7CC80(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_CD572381EBE7CC80_OFFSET))(this, a1);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_ONENABLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_ONREADY_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_1A3088F8EE1739F2(::Foundation::ViewObject::SuiteInfo a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_1A3088F8EE1739F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_54E1EBD4BED4336E(::System::UInt32 a1, ::Foundation::ViewObject::ViewObjectHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_54E1EBD4BED4336E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA53756A2AB5E247()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_FA53756A2AB5E247_OFFSET))(this);
	}

	::System::Void Method_2_25816B4AD877021C(::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Structures::FMemberAliveStateCheckAction))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_25816B4AD877021C_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Boolean Method_2_03EC1F2EB9F6BD24(::Foundation::ViewObject::CombineTriggerListenParam a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::Foundation::ViewObject::SuiteInfo a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::CombineTriggerListenParam, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_03EC1F2EB9F6BD24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7E0D3A7A149A57B6(::Foundation::ViewObject::SuiteInfo a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_7E0D3A7A149A57B6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_D001E91AEC8A16BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_D001E91AEC8A16BE_OFFSET))(this);
	}

	::System::Void Method_2_929D66F905478343(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_929D66F905478343_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7AFA71742D01D8C(::MoleMole::EntityHandle a1, ::Class_2_5DFC66413CB20B09_Enum_3_A5191D6218CE9E26 a2, ::MoleMole::GameplayTag a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Class_2_5DFC66413CB20B09_Enum_3_A5191D6218CE9E26, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_F7AFA71742D01D8C_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_062776F7BCEE71D6(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_062776F7BCEE71D6_OFFSET))(this, a1);
	}

	::Foundation::ViewObject::SuiteInfo Method_2_A9F82A83DF5851C9()
	{
		return ((::Foundation::ViewObject::SuiteInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_A9F82A83DF5851C9_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_B82DCAE71D329BD8(::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Structures::FMonsterMemberLeftCheckAction, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_B82DCAE71D329BD8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_2_98B25803044D202F(::System::String* a1, ::Foundation::ViewObject::SuiteInfo a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_98B25803044D202F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D12CA625052AB555(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_D12CA625052AB555_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_832295EC279E5994_4_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3557F75ED858BAD2(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_3557F75ED858BAD2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3C470A1D50B2BBB4(::Foundation::Unreal::FGameplayTag a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_3C470A1D50B2BBB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99BCDBABF1684B50(::Class_3_30235BB967CBDA73_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_30235BB967CBDA73_7*))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_99BCDBABF1684B50_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_3559476C7C86165D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_74BD0166ECF298D9_METHOD_2_3559476C7C86165D_OFFSET))(this, a1);
	}
};
