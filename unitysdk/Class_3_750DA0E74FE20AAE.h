#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7F33D968FF9C898A_Struct_2_4F51CF67323EB580.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_750DA0E74FE20AAE_Enum_3_348EBFA8E377BA6C.h"
#include "unitysdk/Class_3_750DA0E74FE20AAE_Struct_2_932CD6F049D35738.h"
#include "unitysdk/Enum_3_4A4C0A974BEEA403.h"
#include "unitysdk/MoleMole/AIBattleState.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_5.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_74BF5C5903870EC6;
class Class_1_7B7970D0E94833DA;
class Class_1_ACAB1CC3423F0F23;
namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class BehaviorTree; }
namespace BehaviorDesigner::Runtime { class Behavior_BehaviorHandler; }
namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime { template <typename T> class SharedVariable_1; }
namespace BehaviorDesigner::Runtime::Tasks { class GameObjectGetter; }
namespace MoleMole::Battle { class CharacterAIWatcher; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_3_750DA0E74FE20AAE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xBCC0310)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xBCC2520)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_0EFCBA53C598C7C9_OFFSET UNITYSDK_OFFSET(0xBCC1660)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBCC05E0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_1D73757FFA017011_OFFSET UNITYSDK_OFFSET(0xBCC1490)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0xBCC2200)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xBCC2430)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xBCC33D0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBCC3970)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_3BA954CB9C33801A_OFFSET UNITYSDK_OFFSET(0xBCC11E0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_4955FDC106E37C5E_OFFSET UNITYSDK_OFFSET(0xBCC07C0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_4C8FFF996179A2A6_OFFSET UNITYSDK_OFFSET(0xBCC17A0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0xBCC3D50)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xBCC1080)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_539C8DB7A8A6BCDB_OFFSET UNITYSDK_OFFSET(0xBCC2800)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_5898D3DF8EE923EA_OFFSET UNITYSDK_OFFSET(0xBCC2420)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_5D4B98864458BB8A_OFFSET UNITYSDK_OFFSET(0xBCC3D70)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_73CE624A556A48A7_OFFSET UNITYSDK_OFFSET(0xBCC1C70)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0xBCC00A0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xBCC2330)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_8062CA343C4496F6_OFFSET UNITYSDK_OFFSET(0xBCC33C0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_8072FA00A6D45F0C_OFFSET UNITYSDK_OFFSET(0xBCC39F0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xBCC14B0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_87643565312AC036_OFFSET UNITYSDK_OFFSET(0xBCC0570)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_877C29BF8B4318B3_OFFSET UNITYSDK_OFFSET(0xBCC1480)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_911CFE5F675ED7A9_OFFSET UNITYSDK_OFFSET(0xBCC1FB0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_99C0D707268417A8_OFFSET UNITYSDK_OFFSET(0xBCC1090)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_9E8925A931E46F08_OFFSET UNITYSDK_OFFSET(0xBCC12C0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xBCC3880)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xBCC1180)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0xBCC3900)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0xBCC0670)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_AA18443F042C7418_OFFSET UNITYSDK_OFFSET(0xBCC1470)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_B21F7A04DB0BB264_OFFSET UNITYSDK_OFFSET(0xBCC2760)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_B9864060DBE055CA_OFFSET UNITYSDK_OFFSET(0xBCC2AE0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0xBCC3F00)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xBCC1650)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C51CB09A28EC4C2A_OFFSET UNITYSDK_OFFSET(0xBCC28D0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0xBCC3960)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0xBCC39E0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C74CF020AA42ED85_3_OFFSET UNITYSDK_OFFSET(0xBCC3F10)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xBCC33B0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0xBCC10A0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0xBCC10B0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0xBCC1790)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0xBCC33A0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C74E50CBD41F0264_5_OFFSET UNITYSDK_OFFSET(0xBCC3F20)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xBCC07B0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBCC3CE0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xBCC3C10)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xBCC10D0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_E152555CD53A64B7_OFFSET UNITYSDK_OFFSET(0xBCC34B0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xBCC1170)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_ECEE730C0A8FC299_OFFSET UNITYSDK_OFFSET(0xBCC1FC0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_EE41576811545EB0_OFFSET UNITYSDK_OFFSET(0xBCC1BE0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xBCC1460)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xBCC14A0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0xBCC3490)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0xBCC38F0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0xBCC3D60)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0xBCC3EF0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBCC10C0)
#define CLASS_3_750DA0E74FE20AAE_METHOD_3_F0410067B134C25D_OFFSET UNITYSDK_OFFSET(0xBCC3D80)
#define CLASS_3_750DA0E74FE20AAE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xBCBFDB0)
#define CLASS_3_750DA0E74FE20AAE__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCC0370)
#define CLASS_3_750DA0E74FE20AAE__CTOR_OFFSET UNITYSDK_OFFSET(0xBCC0400)

inline static constexpr unsigned int Class_3_750DA0E74FE20AAE_TypeDefinitionIndex = 71919;

class Class_3_750DA0E74FE20AAE : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Boolean* StaticGet_Field_3_42()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_750DA0E74FE20AAE_TypeDefinitionIndex)->GetStaticField(0xFBA0);
	}
	// static const ::System::Int32 Field_3_47 = 0xF; // 0x0
	::BehaviorDesigner::Runtime::Behavior_BehaviorHandler* Field_3_29; // 0x48
	::Struct_2_FA5F50563E60AFBA Field_3_8; // 0x50
	::System::Collections::Generic::List_1<::Class_1_7B7970D0E94833DA*>* Field_3_34; // 0x68
	::System::Collections::Generic::List_1<::Class_3_750DA0E74FE20AAE_Struct_2_932CD6F049D35738>* Field_3_46; // 0x70
	::Class_1_7F33D968FF9C898A_Struct_2_4F51CF67323EB580 Field_3_5; // 0x78
	::BehaviorDesigner::Runtime::ExternalBehavior* Field_3_9; // 0xB8
	::MoleMole::Battle::CharacterAIWatcher* Field_3_7; // 0xC0
	::BehaviorDesigner::Runtime::BehaviorTree* Field_3_12; // 0xC8
	::Class_1_74BF5C5903870EC6* Field_3_2; // 0xD0
	::Class_1_ACAB1CC3423F0F23* Field_3_39; // 0xD8
	::System::Action* Field_3_28; // 0xE0
	::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* Field_3_36; // 0xE8
	::System::Action_3<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* Field_3_27; // 0xF0
	::System::Boolean Field_3_22; // 0xF8
	::System::Boolean Field_3_15; // 0xF9
	::System::Boolean Field_3_6; // 0xFA
	::System::Boolean Field_3_30; // 0xFB
	::MoleMole::AttackType Field_3_21; // 0xFC
	::System::Int32 Field_3_13; // 0x100
	::MoleMole::AIBattleState Field_3_14; // 0x104
	::System::Int32 Field_3_44; // 0x108
	::System::Int32 Field_3_43; // 0x10C
	::System::UInt32 Field_3_45; // 0x110
	::System::Single Field_3_25; // 0x114
	::System::Int32 Field_3_10; // 0x118
	::MoleMole::AttackType Field_3_24; // 0x11C
	::System::Int32 Field_3_3; // 0x120
	::MoleMole::AttackType Field_3_20; // 0x124
	::System::Single Field_3_11; // 0x128
	::Struct_2_B6A3FA7992F9F37E_5 Field_3_41; // 0x12C
	::System::Boolean Field_3_16; // 0x12E
	::System::Boolean Field_3_35; // 0x12F
	::System::Boolean Field_3_17; // 0x130
	::System::Boolean Field_3_40; // 0x131
	::System::Boolean Field_3_18; // 0x132
	::System::Boolean Field_3_38; // 0x133
	::System::Single Field_3_33; // 0x134
	::System::Int64 Field_3_19; // 0x138
	::System::Single Field_3_31; // 0x140
	::System::Int32 Field_3_4; // 0x144
	::System::UInt32 Field_3_0; // 0x148
	::MoleMole::AttackType Field_3_26; // 0x14C
	::System::Single Field_3_23; // 0x150
	::System::Int32 Field_3_37; // 0x154
	::Class_3_750DA0E74FE20AAE_Enum_3_348EBFA8E377BA6C Field_3_1; // 0x158
	::System::Single Field_3_32; // 0x15C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_87643565312AC036(::System::Text::StringBuilder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_87643565312AC036_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4955FDC106E37C5E(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_4955FDC106E37C5E_OFFSET))(a1);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_3_99C0D707268417A8(::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_99C0D707268417A8_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::Class_3_750DA0E74FE20AAE* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_750DA0E74FE20AAE*(*)())((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_3BA954CB9C33801A(::Class_3_750DA0E74FE20AAE_Struct_2_932CD6F049D35738 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_750DA0E74FE20AAE_Struct_2_932CD6F049D35738))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_3BA954CB9C33801A_OFFSET))(this, a1);
	}

	::System::Void Method_3_9E8925A931E46F08(::BehaviorDesigner::Runtime::BehaviorTree* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorTree*))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_9E8925A931E46F08_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_AA18443F042C7418(::Class_3_750DA0E74FE20AAE_Enum_3_348EBFA8E377BA6C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_750DA0E74FE20AAE_Enum_3_348EBFA8E377BA6C))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_AA18443F042C7418_OFFSET))(this, a1);
	}

	::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* Method_3_877C29BF8B4318B3()
	{
		return ((::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_877C29BF8B4318B3_OFFSET))(this);
	}

	::System::Void Method_3_1D73757FFA017011(::MoleMole::AIBattleState a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::AIBattleState))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_1D73757FFA017011_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_3_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_3_0EFCBA53C598C7C9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_0EFCBA53C598C7C9_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4C8FFF996179A2A6(::MoleMole::EntityHandle a1, ::BehaviorDesigner::Runtime::ExternalBehavior* a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::BehaviorDesigner::Runtime::ExternalBehavior*, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_4C8FFF996179A2A6_OFFSET))(a1, a2, a3);
	}

	::MoleMole::Battle::CharacterAIWatcher* Method_3_911CFE5F675ED7A9()
	{
		return ((::MoleMole::Battle::CharacterAIWatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_911CFE5F675ED7A9_OFFSET))(this);
	}

	::System::Boolean Method_3_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void Method_3_ECEE730C0A8FC299(::System::UInt32 a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_ECEE730C0A8FC299_OFFSET))(this, a1, a2, a3, a4);
	}

	::BehaviorDesigner::Runtime::BehaviorTree* Method_3_5898D3DF8EE923EA()
	{
		return ((::BehaviorDesigner::Runtime::BehaviorTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_5898D3DF8EE923EA_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Boolean Method_3_B21F7A04DB0BB264(::System::Boolean a1, ::Enum_3_4A4C0A974BEEA403 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::Enum_3_4A4C0A974BEEA403))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_B21F7A04DB0BB264_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C51CB09A28EC4C2A(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C51CB09A28EC4C2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::MoleMole::AIBattleState Method_3_8062CA343C4496F6()
	{
		return ((::MoleMole::AIBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_8062CA343C4496F6_OFFSET))(this);
	}

	::System::String* Method_3_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	static ::System::Void Method_3_73CE624A556A48A7(::MoleMole::EntityHandle a1, ::BehaviorDesigner::Runtime::ExternalBehavior* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::BehaviorDesigner::Runtime::ExternalBehavior*))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_73CE624A556A48A7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E152555CD53A64B7(::MoleMole::EntityHandle a1, ::System::Action_2<::System::UInt32, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_E152555CD53A64B7_OFFSET))(a1, a2);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::Void Method_3_B9864060DBE055CA(::System::Boolean a1, ::System::Action_2<::System::UInt32, ::System::Boolean>* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_B9864060DBE055CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_750DA0E74FE20AAE* a1)
	{
		return ((::System::Void(*)(::Class_3_750DA0E74FE20AAE*))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C74CF020AA42ED85_2_OFFSET))(this);
	}

	static ::System::Void Method_3_8072FA00A6D45F0C(::BehaviorDesigner::Runtime::Behavior* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::BehaviorDesigner::Runtime::Behavior*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_8072FA00A6D45F0C_OFFSET))(a1, a2);
	}

	::System::Void Method_3_EE41576811545EB0(::Class_3_750DA0E74FE20AAE_Enum_3_348EBFA8E377BA6C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_750DA0E74FE20AAE_Enum_3_348EBFA8E377BA6C))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_EE41576811545EB0_OFFSET))(this, a1);
	}

	::System::Void Method_3_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_3_750DA0E74FE20AAE_Enum_3_348EBFA8E377BA6C Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_750DA0E74FE20AAE_Enum_3_348EBFA8E377BA6C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Void Method_3_5D4B98864458BB8A(::MoleMole::Battle::CharacterAIWatcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CharacterAIWatcher*))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_5D4B98864458BB8A_OFFSET))(this, a1);
	}

	::System::Void Method_3_539C8DB7A8A6BCDB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_539C8DB7A8A6BCDB_OFFSET))(this, a1);
	}

	::System::Void Method_3_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void Method_3_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_7FBAA229ED524F8E_OFFSET))(this);
	}

	::BehaviorDesigner::Runtime::SharedVariable* Method_3_F0410067B134C25D(::System::String* a1)
	{
		return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_F0410067B134C25D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C74CF020AA42ED85_3_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_METHOD_3_C74E50CBD41F0264_5_OFFSET))(this, a1);
	}
};
