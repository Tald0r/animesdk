#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_0_16E4307DCC419505_243;
class Class_0_16E4307DCC419505_619;
class Class_1_2FDD10128E11FA91;
class Class_1_41C7765AEC8A1F1F;
class Class_1_5A585DEB704A07E2;
class Class_1_8AE7A2C15AA5D5A0;
class Class_2_208CC9941471731A_47;
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

#define CLASS_3_7141BC9DF7195C4C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D59EE0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_00E601EC87B63050_1_OFFSET UNITYSDK_OFFSET(0x8D5FC20)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_00E601EC87B63050_OFFSET UNITYSDK_OFFSET(0x8D5AA20)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_032C0812C06BF111_OFFSET UNITYSDK_OFFSET(0x8D5B770)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0x8D5D2C0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_0A2413192C839956_OFFSET UNITYSDK_OFFSET(0x8D5F480)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_0B613ADBC2A4E21D_OFFSET UNITYSDK_OFFSET(0x8D5D610)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_1150478CB515713C_OFFSET UNITYSDK_OFFSET(0x8D5CE00)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x8D60980)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_1B4E8CE284E4498F_OFFSET UNITYSDK_OFFSET(0x8D5CCF0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_214C04EEA791FCB5_OFFSET UNITYSDK_OFFSET(0x8D5F950)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_228293478E4FA7D5_OFFSET UNITYSDK_OFFSET(0x8D5DAB0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x8D5DFF0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_27011CDB2CA41A6B_OFFSET UNITYSDK_OFFSET(0x8D5FD80)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x8D600A0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_2C9D1EA6B98AFB35_OFFSET UNITYSDK_OFFSET(0x8D5AE10)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_2CDA10265E72EC5B_OFFSET UNITYSDK_OFFSET(0x8D5B620)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_31A3C761CD9118F7_OFFSET UNITYSDK_OFFSET(0x8D59DB0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_370EC918720C7E62_OFFSET UNITYSDK_OFFSET(0x8D60A00)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_38F88D7D2402A361_OFFSET UNITYSDK_OFFSET(0x8D5AB90)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8D60040)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_406174A47F38EDFD_OFFSET UNITYSDK_OFFSET(0x8D5FF50)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8D5CAE0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_47B2534E35DA2BEA_OFFSET UNITYSDK_OFFSET(0x8D60B20)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_486BA299649FE0C4_OFFSET UNITYSDK_OFFSET(0x8D5C500)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_4A5B8082BB821039_OFFSET UNITYSDK_OFFSET(0x8D5FFD0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_5211537A4BE2E11F_OFFSET UNITYSDK_OFFSET(0x8D60850)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_567C379139B3FA09_OFFSET UNITYSDK_OFFSET(0x8D5EBE0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_5951116730058E64_OFFSET UNITYSDK_OFFSET(0x8D5EE00)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x8D58B40)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_610D0E71278BBEE6_1_OFFSET UNITYSDK_OFFSET(0x8D5E180)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_610D0E71278BBEE6_2_OFFSET UNITYSDK_OFFSET(0x8D5F180)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_610D0E71278BBEE6_OFFSET UNITYSDK_OFFSET(0x8D5D7B0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_653F952B73EFB20D_OFFSET UNITYSDK_OFFSET(0x8D5FD10)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x8D5DBC0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_7D5BBBB0F2F33822_OFFSET UNITYSDK_OFFSET(0x8D604B0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x8D58A40)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_7E35F3A1E0331FD8_OFFSET UNITYSDK_OFFSET(0x8D5C430)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x8D5A3D0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_8633640935530A2B_OFFSET UNITYSDK_OFFSET(0x8D5ACC0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_9076BB310BB6989E_OFFSET UNITYSDK_OFFSET(0x8D5C570)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_965F04C371DA71A8_OFFSET UNITYSDK_OFFSET(0x8D5B860)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_9E327307898A8267_OFFSET UNITYSDK_OFFSET(0x8D5ED40)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_9E845336F8E8C558_OFFSET UNITYSDK_OFFSET(0x8D5B220)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_A63267D25162554B_OFFSET UNITYSDK_OFFSET(0x8D5E5E0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_A7A82EFA66267AC2_OFFSET UNITYSDK_OFFSET(0x8D5DF00)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_AB46303CBADE3FEA_OFFSET UNITYSDK_OFFSET(0x8D5B0B0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x8D59100)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_B9CC975F6A8FB66F_OFFSET UNITYSDK_OFFSET(0x8D605F0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_BAE31916328829B3_OFFSET UNITYSDK_OFFSET(0x8D5D7A0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_BB4914C8C8D671FF_OFFSET UNITYSDK_OFFSET(0x8D5AB10)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x8D59D40)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_C126D25F06B71451_OFFSET UNITYSDK_OFFSET(0x8D5E090)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_C75A94AFCA1341AB_OFFSET UNITYSDK_OFFSET(0x8D5E9A0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_C874E790767178D7_OFFSET UNITYSDK_OFFSET(0x8D5C860)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_CA72CD3746B9F830_OFFSET UNITYSDK_OFFSET(0x8D5B170)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_D643841EC72EEC09_OFFSET UNITYSDK_OFFSET(0x8D5FEB0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0x8D5DD80)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x8D5CB70)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_F399F499F9B7437D_OFFSET UNITYSDK_OFFSET(0x8D5B9A0)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0x8D5E480)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_F7810952FE14E15C_OFFSET UNITYSDK_OFFSET(0x8D5CF90)
#define CLASS_3_7141BC9DF7195C4C_METHOD_3_F96B1C7229DF29DF_OFFSET UNITYSDK_OFFSET(0x8D60C40)
#define CLASS_3_7141BC9DF7195C4C_ONCREATE_OFFSET UNITYSDK_OFFSET(0x8D58770)
#define CLASS_3_7141BC9DF7195C4C_ONSTART_OFFSET UNITYSDK_OFFSET(0x8D59B60)
#define CLASS_3_7141BC9DF7195C4C__CTOR_OFFSET UNITYSDK_OFFSET(0x8D5A550)

inline static constexpr unsigned int Class_3_7141BC9DF7195C4C_TypeDefinitionIndex = 78295;

class Class_3_7141BC9DF7195C4C : public ::Foundation::GameManager_1<::Class_3_7141BC9DF7195C4C*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_10; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_5A585DEB704A07E2*>* Field_3_7; // 0x18
	::Class_1_8AE7A2C15AA5D5A0* Field_3_9; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2FDD10128E11FA91*>* Field_3_8; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_5A585DEB704A07E2*>*>* Field_3_6; // 0x30
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_243*>* Field_3_12; // 0x38
	::Class_1_41C7765AEC8A1F1F* Field_3_11; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_F5A753D004F2488D*>* Field_3_5; // 0x48
	::System::Collections::Generic::Dictionary_2<::Class_1_5A585DEB704A07E2*, ::System::Int32>* Field_3_1; // 0x50
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Class_1_5A585DEB704A07E2*, ::System::Int32>>* Field_3_2; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_4; // 0x60
	::System::Boolean Field_3_14; // 0x68
	::System::Boolean Field_3_13; // 0x69
	::System::Boolean Field_3_0; // 0x6A
	::System::Int32 Field_3_3; // 0x6C
	::Foundation::Coroutine::CoroutineHandle Field_3_15; // 0x70
	::Foundation::Coroutine::CoroutineHandle Field_3_16; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_DISPOSE_OFFSET))(this);
	}

	::Class_1_5A585DEB704A07E2* Method_3_00E601EC87B63050(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Int32 a3)
	{
		return ((::Class_1_5A585DEB704A07E2*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_00E601EC87B63050_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BB4914C8C8D671FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_BB4914C8C8D671FF_OFFSET))(this);
	}

	::Class_1_5A585DEB704A07E2* Method_3_8633640935530A2B(::Share::ENotificationBadgeType a1)
	{
		return ((::Class_1_5A585DEB704A07E2*(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_8633640935530A2B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA72CD3746B9F830(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_CA72CD3746B9F830_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_9E845336F8E8C558(::NodeGraph::VariantUnion a1)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_9E845336F8E8C558_OFFSET))(this, a1);
	}

	::System::Void Method_3_2CDA10265E72EC5B(::Share::ENotificationBadgeType a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_2CDA10265E72EC5B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_3_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Int32 Method_3_032C0812C06BF111(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_032C0812C06BF111_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_965F04C371DA71A8(::Share::ENotificationBadgeType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_965F04C371DA71A8_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_F399F499F9B7437D(::NodeGraph::VariantUnion a1)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_F399F499F9B7437D_OFFSET))(this, a1);
	}

	::System::Void Method_3_7E35F3A1E0331FD8(::Class_0_16E4307DCC419505_243* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_243*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_7E35F3A1E0331FD8_OFFSET))(this, a1);
	}

	::System::Void Method_3_486BA299649FE0C4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_486BA299649FE0C4_OFFSET))(this, a1);
	}

	::System::Void Method_3_C874E790767178D7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_C874E790767178D7_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_3_1B4E8CE284E4498F(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Int32 a3, ::System::Action_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_1B4E8CE284E4498F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_1150478CB515713C(::Share::ENotificationBadgeType a1, ::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_1150478CB515713C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9076BB310BB6989E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_9076BB310BB6989E_OFFSET))(this);
	}

	::System::Void Method_3_31A3C761CD9118F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_31A3C761CD9118F7_OFFSET))(this);
	}

	::System::Void Method_3_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_0860F812E446AE7C_OFFSET))(this);
	}

	::Class_1_5A585DEB704A07E2* Method_3_0B613ADBC2A4E21D(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2)
	{
		return ((::Class_1_5A585DEB704A07E2*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_0B613ADBC2A4E21D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_5A585DEB704A07E2*>* Method_3_BAE31916328829B3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_5A585DEB704A07E2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_BAE31916328829B3_OFFSET))(this);
	}

	::System::Void Method_3_610D0E71278BBEE6(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_610D0E71278BBEE6_OFFSET))(this, a1);
	}

	::System::Void Method_3_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_755870B55A8B3AFF_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_619* Method_3_38F88D7D2402A361(::Share::ENotificationBadgeType a1)
	{
		return ((::Class_0_16E4307DCC419505_619*(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_38F88D7D2402A361_OFFSET))(this, a1);
	}

	::System::Void Method_3_E3DE31A03057E055_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_E3DE31A03057E055_1_OFFSET))(this);
	}

	::System::Void Method_3_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_3_A7A82EFA66267AC2(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_A7A82EFA66267AC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_2450CFC043E97F54_OFFSET))(this);
	}

	::Class_1_2FDD10128E11FA91* Method_3_228293478E4FA7D5(::Share::ENotificationBadgeType a1)
	{
		return ((::Class_1_2FDD10128E11FA91*(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_228293478E4FA7D5_OFFSET))(this, a1);
	}

	::System::Void Method_3_C126D25F06B71451(::Class_1_5A585DEB704A07E2* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A585DEB704A07E2*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_C126D25F06B71451_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_610D0E71278BBEE6_1(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_610D0E71278BBEE6_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Method_3_F7810952FE14E15C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_F7810952FE14E15C_OFFSET))(this);
	}

	::System::Int32 Method_3_A63267D25162554B(::NodeGraph::VariantUnion a1)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_A63267D25162554B_OFFSET))(this, a1);
	}

	::System::Void Method_3_C75A94AFCA1341AB(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_C75A94AFCA1341AB_OFFSET))(this, a1);
	}

	::System::Void Method_3_9E327307898A8267(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Int32 a3, ::System::Action_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_9E327307898A8267_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_3_5951116730058E64(::NodeGraph::VariantUnion a1)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_5951116730058E64_OFFSET))(this, a1);
	}

	::System::Void Method_3_610D0E71278BBEE6_2(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_610D0E71278BBEE6_2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_47*>* Method_3_0A2413192C839956()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_47*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_0A2413192C839956_OFFSET))(this);
	}

	::Class_1_5A585DEB704A07E2* Method_3_00E601EC87B63050_1(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Int32 a3)
	{
		return ((::Class_1_5A585DEB704A07E2*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_00E601EC87B63050_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Int32 Method_3_653F952B73EFB20D(::NodeGraph::VariantUnion a1)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_653F952B73EFB20D_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_619* Method_3_27011CDB2CA41A6B(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_619*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_27011CDB2CA41A6B_OFFSET))(this, a1);
	}

	::System::Void Method_3_D643841EC72EEC09(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_D643841EC72EEC09_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_406174A47F38EDFD(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_406174A47F38EDFD_OFFSET))(this, a1);
	}

	::Class_2_9B930B164121ECCD* Method_3_2C9D1EA6B98AFB35(::Share::ENotificationBadgeType a1)
	{
		return ((::Class_2_9B930B164121ECCD*(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_2C9D1EA6B98AFB35_OFFSET))(this, a1);
	}

	::System::Void Method_3_4A5B8082BB821039(::Share::ENotificationBadgeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_4A5B8082BB821039_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_277F8930086803D1_OFFSET))(this);
	}

	::System::Void Method_3_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_3_7D5BBBB0F2F33822(::Share::ENotificationBadgeType a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_7D5BBBB0F2F33822_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_B9CC975F6A8FB66F(::NodeGraph::VariantUnion a1)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_B9CC975F6A8FB66F_OFFSET))(this, a1);
	}

	::Class_1_5A585DEB704A07E2* Method_3_567C379139B3FA09(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2)
	{
		return ((::Class_1_5A585DEB704A07E2*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_567C379139B3FA09_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5211537A4BE2E11F(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_5211537A4BE2E11F_OFFSET))(this, a1);
	}

	::System::Void Method_3_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_3_AB46303CBADE3FEA(::Class_1_5A585DEB704A07E2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A585DEB704A07E2*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_AB46303CBADE3FEA_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_370EC918720C7E62(::Share::ENotificationBadgeType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_370EC918720C7E62_OFFSET))(this, a1);
	}

	::System::Void Method_3_214C04EEA791FCB5(::Class_2_208CC9941471731A_47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_47*))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_214C04EEA791FCB5_OFFSET))(this, a1);
	}

	::System::Func_1<::System::Boolean>* Method_3_47B2534E35DA2BEA(::System::Int32 a1)
	{
		return ((::System::Func_1<::System::Boolean>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_47B2534E35DA2BEA_OFFSET))(this, a1);
	}

	::System::Void Method_3_F96B1C7229DF29DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7141BC9DF7195C4C_METHOD_3_F96B1C7229DF29DF_OFFSET))(this);
	}
};
