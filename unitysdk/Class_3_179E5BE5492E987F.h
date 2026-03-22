#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_0_16E4307DCC419505_538;
class Class_0_16E4307DCC419505_539;
class Class_1_2FDD10128E11FA91;
class Class_1_41C7765AEC8A1F1F;
class Class_1_79526D80B8F6897C;
class Class_1_8AE7A2C15AA5D5A0;
class Class_2_208CC9941471731A_548;
class Class_2_9B930B164121ECCD;
class Class_2_D89CCC627A66D0AD;
class Class_2_F5A753D004F2488D;
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_179E5BE5492E987F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA127A60)
#define CLASS_3_179E5BE5492E987F_METHOD_3_00E601EC87B63050_1_OFFSET UNITYSDK_OFFSET(0xA12C030)
#define CLASS_3_179E5BE5492E987F_METHOD_3_00E601EC87B63050_OFFSET UNITYSDK_OFFSET(0xA12CE80)
#define CLASS_3_179E5BE5492E987F_METHOD_3_032C0812C06BF111_OFFSET UNITYSDK_OFFSET(0xA12D740)
#define CLASS_3_179E5BE5492E987F_METHOD_3_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0xA12CA90)
#define CLASS_3_179E5BE5492E987F_METHOD_3_0A2413192C839956_OFFSET UNITYSDK_OFFSET(0xA12C5C0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_0B613ADBC2A4E21D_OFFSET UNITYSDK_OFFSET(0xA12E150)
#define CLASS_3_179E5BE5492E987F_METHOD_3_1150478CB515713C_OFFSET UNITYSDK_OFFSET(0xA129BD0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_1B4E8CE284E4498F_OFFSET UNITYSDK_OFFSET(0xA12CF70)
#define CLASS_3_179E5BE5492E987F_METHOD_3_214C04EEA791FCB5_OFFSET UNITYSDK_OFFSET(0xA129270)
#define CLASS_3_179E5BE5492E987F_METHOD_3_228293478E4FA7D5_OFFSET UNITYSDK_OFFSET(0xA129840)
#define CLASS_3_179E5BE5492E987F_METHOD_3_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xA12CDE0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_27011CDB2CA41A6B_OFFSET UNITYSDK_OFFSET(0xA12DED0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_2C9D1EA6B98AFB35_OFFSET UNITYSDK_OFFSET(0xA129E80)
#define CLASS_3_179E5BE5492E987F_METHOD_3_2CDA10265E72EC5B_OFFSET UNITYSDK_OFFSET(0xA12E000)
#define CLASS_3_179E5BE5492E987F_METHOD_3_31A3C761CD9118F7_OFFSET UNITYSDK_OFFSET(0xA127930)
#define CLASS_3_179E5BE5492E987F_METHOD_3_370EC918720C7E62_OFFSET UNITYSDK_OFFSET(0xA129D60)
#define CLASS_3_179E5BE5492E987F_METHOD_3_38F88D7D2402A361_OFFSET UNITYSDK_OFFSET(0xA129000)
#define CLASS_3_179E5BE5492E987F_METHOD_3_406174A47F38EDFD_OFFSET UNITYSDK_OFFSET(0xA12D830)
#define CLASS_3_179E5BE5492E987F_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA128910)
#define CLASS_3_179E5BE5492E987F_METHOD_3_47B2534E35DA2BEA_OFFSET UNITYSDK_OFFSET(0xA12C120)
#define CLASS_3_179E5BE5492E987F_METHOD_3_486BA299649FE0C4_OFFSET UNITYSDK_OFFSET(0xA12E350)
#define CLASS_3_179E5BE5492E987F_METHOD_3_4A5B8082BB821039_OFFSET UNITYSDK_OFFSET(0xA128760)
#define CLASS_3_179E5BE5492E987F_METHOD_3_5211537A4BE2E11F_OFFSET UNITYSDK_OFFSET(0xA12B3A0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_567C379139B3FA09_OFFSET UNITYSDK_OFFSET(0xA128D30)
#define CLASS_3_179E5BE5492E987F_METHOD_3_5951116730058E64_OFFSET UNITYSDK_OFFSET(0xA12C240)
#define CLASS_3_179E5BE5492E987F_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xA125FC0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_610D0E71278BBEE6_1_OFFSET UNITYSDK_OFFSET(0xA12A2E0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_610D0E71278BBEE6_2_OFFSET UNITYSDK_OFFSET(0xA12D080)
#define CLASS_3_179E5BE5492E987F_METHOD_3_610D0E71278BBEE6_OFFSET UNITYSDK_OFFSET(0xA129540)
#define CLASS_3_179E5BE5492E987F_METHOD_3_653F952B73EFB20D_OFFSET UNITYSDK_OFFSET(0xA12E2E0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0xA12A760)
#define CLASS_3_179E5BE5492E987F_METHOD_3_7D5BBBB0F2F33822_OFFSET UNITYSDK_OFFSET(0xA129130)
#define CLASS_3_179E5BE5492E987F_METHOD_3_7E35F3A1E0331FD8_OFFSET UNITYSDK_OFFSET(0xA12A210)
#define CLASS_3_179E5BE5492E987F_METHOD_3_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0xA127F50)
#define CLASS_3_179E5BE5492E987F_METHOD_3_8633640935530A2B_OFFSET UNITYSDK_OFFSET(0xA1289A0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_9076BB310BB6989E_OFFSET UNITYSDK_OFFSET(0xA12B0B0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_965F04C371DA71A8_OFFSET UNITYSDK_OFFSET(0xA1287D0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_9E327307898A8267_OFFSET UNITYSDK_OFFSET(0xA12BF70)
#define CLASS_3_179E5BE5492E987F_METHOD_3_9E845336F8E8C558_OFFSET UNITYSDK_OFFSET(0xA12D8B0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_A63267D25162554B_OFFSET UNITYSDK_OFFSET(0xA12D380)
#define CLASS_3_179E5BE5492E987F_METHOD_3_A7A82EFA66267AC2_OFFSET UNITYSDK_OFFSET(0xA12A120)
#define CLASS_3_179E5BE5492E987F_METHOD_3_AB46303CBADE3FEA_OFFSET UNITYSDK_OFFSET(0xA128550)
#define CLASS_3_179E5BE5492E987F_METHOD_3_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xA126580)
#define CLASS_3_179E5BE5492E987F_METHOD_3_B9CC975F6A8FB66F_OFFSET UNITYSDK_OFFSET(0xA12AE50)
#define CLASS_3_179E5BE5492E987F_METHOD_3_BAE31916328829B3_OFFSET UNITYSDK_OFFSET(0xA12B4D0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_BB4914C8C8D671FF_OFFSET UNITYSDK_OFFSET(0xA12AC50)
#define CLASS_3_179E5BE5492E987F_METHOD_3_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0xA1278C0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_C75A94AFCA1341AB_OFFSET UNITYSDK_OFFSET(0xA128AF0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_C874E790767178D7_OFFSET UNITYSDK_OFFSET(0xA129950)
#define CLASS_3_179E5BE5492E987F_METHOD_3_CA72CD3746B9F830_OFFSET UNITYSDK_OFFSET(0xA1286B0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_D643841EC72EEC09_OFFSET UNITYSDK_OFFSET(0xA128610)
#define CLASS_3_179E5BE5492E987F_METHOD_3_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0xA12ACD0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xA12A5E0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_F399F499F9B7437D_OFFSET UNITYSDK_OFFSET(0xA12B4E0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0xA128EA0)
#define CLASS_3_179E5BE5492E987F_METHOD_3_F7810952FE14E15C_OFFSET UNITYSDK_OFFSET(0xA12A920)
#define CLASS_3_179E5BE5492E987F_METHOD_3_F96B1C7229DF29DF_OFFSET UNITYSDK_OFFSET(0xA12DCB0)
#define CLASS_3_179E5BE5492E987F_ONCREATE_OFFSET UNITYSDK_OFFSET(0xA125DF0)
#define CLASS_3_179E5BE5492E987F_ONSTART_OFFSET UNITYSDK_OFFSET(0xA1276E0)
#define CLASS_3_179E5BE5492E987F__CTOR_OFFSET UNITYSDK_OFFSET(0xA1280D0)

inline static constexpr unsigned int Class_3_179E5BE5492E987F_TypeDefinitionIndex = 54633;

class Class_3_179E5BE5492E987F : public ::Foundation::GameManager_1<::Class_3_179E5BE5492E987F*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2FDD10128E11FA91*>* Field_3_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_7; // 0x20
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_538*>* Field_3_9; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_79526D80B8F6897C*>* Field_3_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_F5A753D004F2488D*>* Field_3_2; // 0x38
	::Class_1_41C7765AEC8A1F1F* Field_3_8; // 0x40
	::Class_1_8AE7A2C15AA5D5A0* Field_3_6; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_79526D80B8F6897C*>*>* Field_3_3; // 0x50
	::System::Int32 Field_3_0; // 0x58
	::System::Boolean Field_3_11; // 0x5C
	::System::Boolean Field_3_10; // 0x5D
	::Foundation::Coroutine::CoroutineHandle Field_3_13; // 0x60
	::Foundation::Coroutine::CoroutineHandle Field_3_12; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_AB46303CBADE3FEA(::Class_1_79526D80B8F6897C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79526D80B8F6897C*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_AB46303CBADE3FEA_OFFSET))(this, a1);
	}

	::System::Void Method_3_D643841EC72EEC09(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_D643841EC72EEC09_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA72CD3746B9F830(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_CA72CD3746B9F830_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_4A5B8082BB821039(::Share::ENotificationBadgeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_4A5B8082BB821039_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_C75A94AFCA1341AB(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_C75A94AFCA1341AB_OFFSET))(this, a1);
	}

	::System::Void Method_3_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Method_3_7D5BBBB0F2F33822(::Share::ENotificationBadgeType a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_7D5BBBB0F2F33822_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void Method_3_214C04EEA791FCB5(::Class_2_208CC9941471731A_548* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_548*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_214C04EEA791FCB5_OFFSET))(this, a1);
	}

	::System::Void Method_3_610D0E71278BBEE6(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_610D0E71278BBEE6_OFFSET))(this, a1);
	}

	::System::Void Method_3_C874E790767178D7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_C874E790767178D7_OFFSET))(this, a1);
	}

	::System::Void Method_3_1150478CB515713C(::Share::ENotificationBadgeType a1, ::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_1150478CB515713C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_370EC918720C7E62(::Share::ENotificationBadgeType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_370EC918720C7E62_OFFSET))(this, a1);
	}

	::Class_1_79526D80B8F6897C* Method_3_8633640935530A2B(::Share::ENotificationBadgeType a1)
	{
		return ((::Class_1_79526D80B8F6897C*(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_8633640935530A2B_OFFSET))(this, a1);
	}

	::System::Void Method_3_A7A82EFA66267AC2(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_A7A82EFA66267AC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_7E35F3A1E0331FD8(::Class_0_16E4307DCC419505_538* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_538*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_7E35F3A1E0331FD8_OFFSET))(this, a1);
	}

	::System::Void Method_3_610D0E71278BBEE6_1(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_610D0E71278BBEE6_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_3_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_3_F7810952FE14E15C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_F7810952FE14E15C_OFFSET))(this);
	}

	::System::Void Method_3_BB4914C8C8D671FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_BB4914C8C8D671FF_OFFSET))(this);
	}

	::System::Void Method_3_E3DE31A03057E055_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_E3DE31A03057E055_1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_539* Method_3_38F88D7D2402A361(::Share::ENotificationBadgeType a1)
	{
		return ((::Class_0_16E4307DCC419505_539*(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_38F88D7D2402A361_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_B9CC975F6A8FB66F(::NodeGraph::VariantUnion a1)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_B9CC975F6A8FB66F_OFFSET))(this, a1);
	}

	::System::Void Method_3_31A3C761CD9118F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_31A3C761CD9118F7_OFFSET))(this);
	}

	::Class_1_79526D80B8F6897C* Method_3_567C379139B3FA09(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2)
	{
		return ((::Class_1_79526D80B8F6897C*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_567C379139B3FA09_OFFSET))(this, a1, a2);
	}

	::Class_1_2FDD10128E11FA91* Method_3_228293478E4FA7D5(::Share::ENotificationBadgeType a1)
	{
		return ((::Class_1_2FDD10128E11FA91*(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_228293478E4FA7D5_OFFSET))(this, a1);
	}

	::System::Void Method_3_5211537A4BE2E11F(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_5211537A4BE2E11F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_79526D80B8F6897C*>* Method_3_BAE31916328829B3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_79526D80B8F6897C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_BAE31916328829B3_OFFSET))(this);
	}

	::System::Int32 Method_3_F399F499F9B7437D(::NodeGraph::VariantUnion a1)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_F399F499F9B7437D_OFFSET))(this, a1);
	}

	::System::Void Method_3_9E327307898A8267(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Int32 a3, ::System::Action_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_9E327307898A8267_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Func_1<::System::Boolean>* Method_3_47B2534E35DA2BEA(::System::Int32 a1)
	{
		return ((::System::Func_1<::System::Boolean>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_47B2534E35DA2BEA_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_5951116730058E64(::NodeGraph::VariantUnion a1)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_5951116730058E64_OFFSET))(this, a1);
	}

	::System::Void Method_3_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_B43C848B078B3C34_OFFSET))(this);
	}

	::Class_1_79526D80B8F6897C* Method_3_00E601EC87B63050(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Int32 a3)
	{
		return ((::Class_1_79526D80B8F6897C*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_00E601EC87B63050_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_0860F812E446AE7C_OFFSET))(this);
	}

	::System::Void Method_3_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Void Method_3_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_3_1B4E8CE284E4498F(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Int32 a3, ::System::Action_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_1B4E8CE284E4498F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_610D0E71278BBEE6_2(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_610D0E71278BBEE6_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_965F04C371DA71A8(::Share::ENotificationBadgeType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_965F04C371DA71A8_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_A63267D25162554B(::NodeGraph::VariantUnion a1)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_A63267D25162554B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_406174A47F38EDFD(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_406174A47F38EDFD_OFFSET))(this, a1);
	}

	::System::Void Method_3_9076BB310BB6989E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_9076BB310BB6989E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_548*>* Method_3_0A2413192C839956()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_548*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_0A2413192C839956_OFFSET))(this);
	}

	::Class_2_9B930B164121ECCD* Method_3_2C9D1EA6B98AFB35(::Share::ENotificationBadgeType a1)
	{
		return ((::Class_2_9B930B164121ECCD*(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_2C9D1EA6B98AFB35_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_9E845336F8E8C558(::NodeGraph::VariantUnion a1)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_9E845336F8E8C558_OFFSET))(this, a1);
	}

	::System::Void Method_3_F96B1C7229DF29DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_F96B1C7229DF29DF_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_539* Method_3_27011CDB2CA41A6B(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_539*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_27011CDB2CA41A6B_OFFSET))(this, a1);
	}

	::Class_1_79526D80B8F6897C* Method_3_00E601EC87B63050_1(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Int32 a3)
	{
		return ((::Class_1_79526D80B8F6897C*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_00E601EC87B63050_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2CDA10265E72EC5B(::Share::ENotificationBadgeType a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_2CDA10265E72EC5B_OFFSET))(this, a1, a2);
	}

	::Class_1_79526D80B8F6897C* Method_3_0B613ADBC2A4E21D(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2)
	{
		return ((::Class_1_79526D80B8F6897C*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_0B613ADBC2A4E21D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Int32 Method_3_653F952B73EFB20D(::NodeGraph::VariantUnion a1)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_653F952B73EFB20D_OFFSET))(this, a1);
	}

	::System::Void Method_3_486BA299649FE0C4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_486BA299649FE0C4_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_032C0812C06BF111(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_179E5BE5492E987F_METHOD_3_032C0812C06BF111_OFFSET))(this, a1, a2);
	}
};
