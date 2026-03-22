#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C33CF9A738B72C96_Struct_2_E47C43DF677B0E66.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/MoleMole/CloudButtonRumbleType.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/MoleMole/MobileTouchRumbleBattleMode.h"
#include "unitysdk/MoleMole/MobileTouchRumbleDevice.h"
#include "unitysdk/MoleMole/MobileTouchRumbleEnableType.h"
#include "unitysdk/ScePadTriggerMask.h"
#include "unitysdk/Struct_2_22CD11FF1B0EB1E8.h"
#include "unitysdk/Struct_2_E5B9063FC59797FE.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class GamepadRumbleEntry; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_C33CF9A738B72C96_DISPOSE_OFFSET UNITYSDK_OFFSET(0x69DBB80)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_0342EFB2444704A2_OFFSET UNITYSDK_OFFSET(0x69DD3F0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_035FB05768996FEB_OFFSET UNITYSDK_OFFSET(0x69DD460)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_1C34F442AF2B454A_OFFSET UNITYSDK_OFFSET(0x69E03C0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x69DE3F0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_2A67190FB7F1E078_OFFSET UNITYSDK_OFFSET(0x69DC870)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_30FF6A1E2EEC22D4_OFFSET UNITYSDK_OFFSET(0x69DFC90)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_320D446C7083DC5E_OFFSET UNITYSDK_OFFSET(0x69E0170)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_3C029C534AE1FB6B_OFFSET UNITYSDK_OFFSET(0x69E0630)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_3DBEF32DB4D4EAEE_OFFSET UNITYSDK_OFFSET(0x69E0180)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x69DD050)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_4BD01F7DBE2FD782_OFFSET UNITYSDK_OFFSET(0x69DB770)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_4DF4BEB926863E1C_OFFSET UNITYSDK_OFFSET(0x69E0750)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_4E2855E48FEA41A6_OFFSET UNITYSDK_OFFSET(0x69DE470)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x69DE8B0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_56C27DDD8EBD3E3D_OFFSET UNITYSDK_OFFSET(0x69DBAA0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x69DD5E0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_5AA175BBD14C0D7E_OFFSET UNITYSDK_OFFSET(0x69E06C0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_614E673AC92D159A_OFFSET UNITYSDK_OFFSET(0x69DC250)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_69AE30C87055610F_OFFSET UNITYSDK_OFFSET(0x69DD7F0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_6A313828EA450791_OFFSET UNITYSDK_OFFSET(0x69DEE20)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_6E567866C2EC7AA0_OFFSET UNITYSDK_OFFSET(0x69E04D0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_6FC7DB95DAA8420C_OFFSET UNITYSDK_OFFSET(0x69DED10)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_74A32D70C868D8A8_OFFSET UNITYSDK_OFFSET(0x69E0CE0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_7DCD7D504DD01052_OFFSET UNITYSDK_OFFSET(0x69E0550)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_7E8D9F0525B90F34_OFFSET UNITYSDK_OFFSET(0x69E0730)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x69DAE20)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_82E992240300FB30_1_OFFSET UNITYSDK_OFFSET(0x69DB3E0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x69DB150)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x69DFA90)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_8A921FE9D1442D28_OFFSET UNITYSDK_OFFSET(0x69DFDF0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_8B37A17B7A3F06D8_OFFSET UNITYSDK_OFFSET(0x69E0950)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_92F2FCA8316DB56D_OFFSET UNITYSDK_OFFSET(0x69E0B90)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_99CD96D02EBB75E5_OFFSET UNITYSDK_OFFSET(0x69DE7F0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_A9B1D05671270FFB_OFFSET UNITYSDK_OFFSET(0x69E0740)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x69DD4E0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_AE721E797323F86D_OFFSET UNITYSDK_OFFSET(0x69DE800)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_B2C74F5AD64DF01E_OFFSET UNITYSDK_OFFSET(0x69DE5F0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_B5CADED4AFE2B258_OFFSET UNITYSDK_OFFSET(0x69DD870)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_BC18648869EC0F4E_OFFSET UNITYSDK_OFFSET(0x69DE9B0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_BD109F289592E366_OFFSET UNITYSDK_OFFSET(0x69DF3F0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_C053FE63BE295A6F_1_OFFSET UNITYSDK_OFFSET(0x69DFD00)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_C053FE63BE295A6F_OFFSET UNITYSDK_OFFSET(0x69DFB40)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_C39949B4C63BAFC3_OFFSET UNITYSDK_OFFSET(0x69E09C0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_C9A261AB835CB046_OFFSET UNITYSDK_OFFSET(0x69DF020)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_D0EF00E99905EE0D_OFFSET UNITYSDK_OFFSET(0x69DF290)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_D84684F15B1BC810_OFFSET UNITYSDK_OFFSET(0x69DDF40)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x69DC180)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x69DFC30)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_F0E307B84478A272_2_OFFSET UNITYSDK_OFFSET(0x69DA850)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x69DA7F0)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_FDE98962EC6197E2_OFFSET UNITYSDK_OFFSET(0x69DF840)
#define CLASS_3_C33CF9A738B72C96_METHOD_3_FF5653CC799264D4_OFFSET UNITYSDK_OFFSET(0x69DEC60)
#define CLASS_3_C33CF9A738B72C96_ONCREATE_OFFSET UNITYSDK_OFFSET(0x69DA540)
#define CLASS_3_C33CF9A738B72C96_ONSTART_OFFSET UNITYSDK_OFFSET(0x69DA8B0)
#define CLASS_3_C33CF9A738B72C96__CTOR_OFFSET UNITYSDK_OFFSET(0x69DC0E0)

inline static constexpr unsigned int Class_3_C33CF9A738B72C96_TypeDefinitionIndex = 73509;

class Class_3_C33CF9A738B72C96 : public ::Foundation::GameManager_1<::Class_3_C33CF9A738B72C96*>
{
public:
	::System::Collections::Generic::List_1<::Struct_2_E5B9063FC59797FE>* Field_3_14; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_22CD11FF1B0EB1E8>* Field_3_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_3_0; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_E5B9063FC59797FE>* Field_3_13; // 0x28
	::System::Int32 Field_3_9; // 0x30
	::MoleMole::MobileTouchRumbleDevice Field_3_8; // 0x34
	::System::Int32 Field_3_3; // 0x38
	::MoleMole::CloudButtonRumbleType Field_3_12; // 0x3C
	::System::Boolean Field_3_5; // 0x40
	::System::Boolean Field_3_4; // 0x41
	::System::Int32 Field_3_2; // 0x44
	::System::Int32 Field_3_11; // 0x48
	::MoleMole::MobileTouchRumbleBattleMode Field_3_7; // 0x4C
	::System::Int32 Field_3_10; // 0x50
	::System::Int32 Field_3_16; // 0x54
	::MoleMole::MobileTouchRumbleEnableType Field_3_6; // 0x58
	::System::Int32 Field_3_15; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Void Method_3_56C27DDD8EBD3E3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_56C27DDD8EBD3E3D_OFFSET))(this, a1);
	}

	::System::Void Method_3_2A67190FB7F1E078(::MoleMole::MobileTouchRumbleEnableType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MobileTouchRumbleEnableType))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_2A67190FB7F1E078_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_42C5BADE1C9EFC80_OFFSET))();
	}

	::System::Void Method_3_0342EFB2444704A2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_0342EFB2444704A2_OFFSET))(this, a1);
	}

	::System::Void Method_3_035FB05768996FEB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_035FB05768996FEB_OFFSET))(this, a1);
	}

	::System::Void Method_3_614E673AC92D159A(::ScePadTriggerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_614E673AC92D159A_OFFSET))(this, a1);
	}

	::System::Void Method_3_B5CADED4AFE2B258(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_B5CADED4AFE2B258_OFFSET))(this, a1);
	}

	::System::Void Method_3_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_3_B2C74F5AD64DF01E(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_B2C74F5AD64DF01E_OFFSET))(this, a1, a2);
	}

	::MoleMole::CloudButtonRumbleType Method_3_99CD96D02EBB75E5()
	{
		return ((::MoleMole::CloudButtonRumbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_99CD96D02EBB75E5_OFFSET))(this);
	}

	static ::System::Boolean Method_3_AE721E797323F86D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_AE721E797323F86D_OFFSET))();
	}

	::System::Void Method_3_FF5653CC799264D4(::MoleMole::Config::InputType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_FF5653CC799264D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_6A313828EA450791(::MoleMole::CloudButtonRumbleType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CloudButtonRumbleType))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_6A313828EA450791_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_C9A261AB835CB046(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_C9A261AB835CB046_OFFSET))(a1);
	}

	::System::Void Method_3_D0EF00E99905EE0D(::MoleMole::MobileTouchRumbleDevice a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MobileTouchRumbleDevice))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_D0EF00E99905EE0D_OFFSET))(this, a1);
	}

	::System::Void Method_3_BD109F289592E366(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_BD109F289592E366_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	static ::System::Boolean Method_3_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_86026B47A3027B67_OFFSET))();
	}

	::System::Void Method_3_C053FE63BE295A6F(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_C053FE63BE295A6F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_FDE98962EC6197E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_FDE98962EC6197E2_OFFSET))(this);
	}

	static ::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_F0E307B84478A272_OFFSET))();
	}

	::System::Boolean Method_3_30FF6A1E2EEC22D4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_30FF6A1E2EEC22D4_OFFSET))(this);
	}

	::System::Void Method_3_C053FE63BE295A6F_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_C053FE63BE295A6F_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_E5B9063FC59797FE>* Method_3_69AE30C87055610F(::ScePadTriggerMask a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_E5B9063FC59797FE>*(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_69AE30C87055610F_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_F0E307B84478A272_1_OFFSET))();
	}

	::System::Void Method_3_8A921FE9D1442D28(::System::String* a1, ::MoleMole::Config::GamepadRumbleEntry* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::GamepadRumbleEntry*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_8A921FE9D1442D28_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::MobileTouchRumbleBattleMode Method_3_320D446C7083DC5E()
	{
		return ((::MoleMole::MobileTouchRumbleBattleMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_320D446C7083DC5E_OFFSET))(this);
	}

	::System::Void Method_3_3DBEF32DB4D4EAEE(::ScePadTriggerMask a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_3DBEF32DB4D4EAEE_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_3_F0E307B84478A272_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_F0E307B84478A272_2_OFFSET))();
	}

	::System::Boolean Method_3_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_AA972BE565DAF9E3_OFFSET))(this);
	}

	::System::Void Method_3_1C34F442AF2B454A(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_1C34F442AF2B454A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6FC7DB95DAA8420C(::ScePadTriggerMask a1, ::Class_3_C33CF9A738B72C96_Struct_2_E47C43DF677B0E66& a2)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::Class_3_C33CF9A738B72C96_Struct_2_E47C43DF677B0E66&))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_6FC7DB95DAA8420C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4BD01F7DBE2FD782()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_4BD01F7DBE2FD782_OFFSET))(this);
	}

	::System::Void Method_3_6E567866C2EC7AA0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_6E567866C2EC7AA0_OFFSET))(this, a1);
	}

	::System::Void Method_3_7DCD7D504DD01052(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_7DCD7D504DD01052_OFFSET))(this, a1);
	}

	::System::Void Method_3_D84684F15B1BC810(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_D84684F15B1BC810_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3C029C534AE1FB6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_3C029C534AE1FB6B_OFFSET))(this);
	}

	::System::Boolean Method_3_4E2855E48FEA41A6(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_4E2855E48FEA41A6_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_568AE7A1499723FD_OFFSET))();
	}

	::System::Void Method_3_5AA175BBD14C0D7E(::MoleMole::MobileTouchRumbleBattleMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MobileTouchRumbleBattleMode))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_5AA175BBD14C0D7E_OFFSET))(this, a1);
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}

	static ::System::Boolean Method_3_BC18648869EC0F4E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_BC18648869EC0F4E_OFFSET))();
	}

	::MoleMole::MobileTouchRumbleEnableType Method_3_7E8D9F0525B90F34()
	{
		return ((::MoleMole::MobileTouchRumbleEnableType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_7E8D9F0525B90F34_OFFSET))(this);
	}

	::MoleMole::MobileTouchRumbleDevice Method_3_A9B1D05671270FFB()
	{
		return ((::MoleMole::MobileTouchRumbleDevice(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_A9B1D05671270FFB_OFFSET))(this);
	}

	::System::Void Method_3_4DF4BEB926863E1C(::ScePadTriggerMask a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4, ::System::Boolean a5, ::MoleMole::Config::InputType a6)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::System::String*, ::System::String*, ::System::UInt32, ::System::Boolean, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_4DF4BEB926863E1C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_8B37A17B7A3F06D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_8B37A17B7A3F06D8_OFFSET))(this);
	}

	::System::Void Method_3_C39949B4C63BAFC3(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_C39949B4C63BAFC3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_92F2FCA8316DB56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_92F2FCA8316DB56D_OFFSET))(this, a1);
	}

	::System::Void Method_3_74A32D70C868D8A8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_74A32D70C868D8A8_OFFSET))(this, a1);
	}

	::System::Void Method_3_82E992240300FB30_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_82E992240300FB30_1_OFFSET))(this);
	}

	::System::Boolean Method_3_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C33CF9A738B72C96_METHOD_3_595E641DF1B4387D_OFFSET))(this);
	}
};
