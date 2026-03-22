#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_455124A410922D94.h"
#include "unitysdk/Class_5_0DB196DE3B98F87A_Struct_2_6A02089180E906A3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/ProtoScript/HollowGridLink.h"

class Class_1_11A58A840528E5B2;
class Class_1_2EF69FD7F867E7F6;
class Class_1_EDF7E2913A3DD535;
class Class_3_4CEBE66D8E0DD3A7;
class Class_3_55A056439CE8821C;
class Class_4_7162AE539CEC5D38;
class Class_4_7B5A65E248106C68;
class Class_4_AC6D98911872E0CE;
class Class_5_0DB196DE3B98F87A_Class_1_03212B4342240164;
class Class_5_2169ABC757988FED;
class Class_5_8A5B236F53009830;
class Class_5_AF65C3A968E836D2;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBigTVMoveRunContext; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_MoveXY; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_0DB196DE3B98F87A_METHOD_5_0112CBB6E0E463D3_OFFSET UNITYSDK_OFFSET(0xB7FB130)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xB7F7720)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_0DE10FB6B809B938_OFFSET UNITYSDK_OFFSET(0xB7FB690)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_132F6AD6980C4E3F_OFFSET UNITYSDK_OFFSET(0xB7F9960)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_15B5FD54C4CEEA1E_OFFSET UNITYSDK_OFFSET(0xB7F9600)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_183B83AC452450A4_OFFSET UNITYSDK_OFFSET(0xB7FD440)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_1A662F1DA90C17E9_1_OFFSET UNITYSDK_OFFSET(0xB7FB2A0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_1A662F1DA90C17E9_OFFSET UNITYSDK_OFFSET(0xB7F89C0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_1D6B4D99BBE24A4E_OFFSET UNITYSDK_OFFSET(0xB7FBFE0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_2248EE9A822FF30B_OFFSET UNITYSDK_OFFSET(0xB7FD530)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_32B08B3EF0F49488_OFFSET UNITYSDK_OFFSET(0xB7FBCD0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_337434052E9ECAC7_OFFSET UNITYSDK_OFFSET(0xB7FBB90)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_352E50EA73C25D2F_OFFSET UNITYSDK_OFFSET(0xB7FA190)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xB7FB370)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0xB7F79C0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_493B1699B91163A9_OFFSET UNITYSDK_OFFSET(0xB7F8A90)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_4FB1BA31C2BB0CC1_OFFSET UNITYSDK_OFFSET(0xB7FBE80)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_5E99A542B900C2B1_1_OFFSET UNITYSDK_OFFSET(0xB7FB5A0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_5E99A542B900C2B1_OFFSET UNITYSDK_OFFSET(0xB7FB030)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_5F4024CFF6F398BA_OFFSET UNITYSDK_OFFSET(0xB7F8270)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_62579D416F6A5F65_OFFSET UNITYSDK_OFFSET(0xB7F8E80)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0xB7F8180)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_7EA54838B888644E_OFFSET UNITYSDK_OFFSET(0xB7F7950)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_7EF1004C02A28808_OFFSET UNITYSDK_OFFSET(0xB7FD6D0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_823673E6D012DB40_OFFSET UNITYSDK_OFFSET(0xB7F98C0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_9094C7E05F1A5B4A_OFFSET UNITYSDK_OFFSET(0xB7FC520)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_9382BF3DB590A854_OFFSET UNITYSDK_OFFSET(0xB7FDA00)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_9609E1F5A5E27A3F_OFFSET UNITYSDK_OFFSET(0xB7FB9D0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_9EB30013E62F2720_OFFSET UNITYSDK_OFFSET(0xB7F84C0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_B8CAAA32CB84B37E_OFFSET UNITYSDK_OFFSET(0xB7FE100)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_BB0F14870948B337_OFFSET UNITYSDK_OFFSET(0xB7F9DD0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_C9312916D3A31323_OFFSET UNITYSDK_OFFSET(0xB7FA640)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_CACDFB6EDC05F97E_OFFSET UNITYSDK_OFFSET(0xB7FC3D0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0xB7FAEF0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_D9E34E162363C06E_OFFSET UNITYSDK_OFFSET(0xB7FA630)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_D9E4B82A881FC0BE_OFFSET UNITYSDK_OFFSET(0xB7FE960)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_DCBB0D8A534E50E6_OFFSET UNITYSDK_OFFSET(0xB7F9A90)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_E57456F36F09A25C_OFFSET UNITYSDK_OFFSET(0xB7F7E40)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0xB7F7DD0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_E78551FB0A4D1B02_OFFSET UNITYSDK_OFFSET(0xB7FA680)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0xB7FDA80)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xB7F8E10)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_ECCF1259A8355312_OFFSET UNITYSDK_OFFSET(0xB7FDAF0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_ED213E4DDA2CFF9E_OFFSET UNITYSDK_OFFSET(0xB7FFA30)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_FCBBBE8104165B3C_OFFSET UNITYSDK_OFFSET(0xB7FFD10)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_FF05AC0AB0D75A04_OFFSET UNITYSDK_OFFSET(0xB7FAE80)
#define CLASS_5_0DB196DE3B98F87A__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F7480)

inline static constexpr unsigned int Class_5_0DB196DE3B98F87A_TypeDefinitionIndex = 76929;

class Class_5_0DB196DE3B98F87A : public ::Class_4_455124A410922D94<::Class_3_55A056439CE8821C*>
{
public:
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>* Field_5_12; // 0x30
	::Class_3_4CEBE66D8E0DD3A7* Field_5_0; // 0x38
	::MoleMole::HollowChessboard::HollowEntity* Field_5_8; // 0x40
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_5_11; // 0x48
	::Class_5_AF65C3A968E836D2* Field_5_9; // 0x50
	::Class_5_0DB196DE3B98F87A_Class_1_03212B4342240164* Field_5_4; // 0x58
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>* Field_5_13; // 0x60
	::MoleMole::Config::ConfigHollowChessboard* Field_5_10; // 0x68
	::Il2CppArray<::Class_5_2169ABC757988FED*>* Field_5_7; // 0x70
	::MoleMole::UIHollowMainPageController* Field_5_1; // 0x78
	::MoleMole::Config::ConfigHollowChessboard_MoveXY* Field_5_5; // 0x80
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>* Field_5_14; // 0x88
	::System::Single Field_5_3; // 0x90
	::System::Boolean Field_5_6; // 0x94
	::System::Single Field_5_2; // 0x98

	::System::Void _ctor(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_5_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_5_7EA54838B888644E(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_7EA54838B888644E_OFFSET))(this, a1);
	}

	::System::Void Method_5_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_E61C16044B7481FF_OFFSET))(this);
	}

	::System::Void Method_5_70603E2AE56EBD6B(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	static ::System::Void Method_5_5F4024CFF6F398BA(::MoleMole::HollowChessboard::HollowEntity* a1, ::Class_5_8A5B236F53009830* a2, ::Class_4_7B5A65E248106C68* a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*, ::Class_5_8A5B236F53009830*, ::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_5F4024CFF6F398BA_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_5_9EB30013E62F2720(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_9EB30013E62F2720_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_1A662F1DA90C17E9(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_1A662F1DA90C17E9_OFFSET))(this, a1);
	}

	::System::Void Method_5_493B1699B91163A9(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_493B1699B91163A9_OFFSET))(this, a1);
	}

	::System::Void Method_5_E9A575D18A0748D9(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_5_62579D416F6A5F65(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_62579D416F6A5F65_OFFSET))(this, a1);
	}

	::System::Void Method_5_132F6AD6980C4E3F(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_132F6AD6980C4E3F_OFFSET))(this, a1);
	}

	::System::Void Method_5_DCBB0D8A534E50E6(::MoleMole::HollowChessboard::HollowEntity* a1, ::MoleMole::Vector2Int a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_DCBB0D8A534E50E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_D9E34E162363C06E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_D9E34E162363C06E_OFFSET))(this);
	}

	::System::Void Method_5_C9312916D3A31323()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_C9312916D3A31323_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_5_2169ABC757988FED*>* Method_5_15B5FD54C4CEEA1E(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_5_2169ABC757988FED*>*(*)(::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_15B5FD54C4CEEA1E_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigHollowChessboard_MoveXY* Method_5_E78551FB0A4D1B02(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::Config::ConfigHollowChessboard_MoveXY* a2, ::ProtoScript::HollowGridLink a3)
	{
		return ((::MoleMole::Config::ConfigHollowChessboard_MoveXY*(*)(::Class_5_AF65C3A968E836D2*, ::MoleMole::Config::ConfigHollowChessboard_MoveXY*, ::ProtoScript::HollowGridLink))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_E78551FB0A4D1B02_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_5_FF05AC0AB0D75A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_FF05AC0AB0D75A04_OFFSET))(this);
	}

	::System::Void Method_5_E57456F36F09A25C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_E57456F36F09A25C_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_5E99A542B900C2B1(::MoleMole::HollowChessboard::HollowEntity* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_5E99A542B900C2B1_OFFSET))(this, a1, a2);
	}

	::Class_5_2169ABC757988FED* Method_5_823673E6D012DB40(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_5_2169ABC757988FED*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_823673E6D012DB40_OFFSET))(this, a1);
	}

	::System::Void Method_5_0112CBB6E0E463D3(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_0112CBB6E0E463D3_OFFSET))(this, a1);
	}

	static ::System::Void Method_5_352E50EA73C25D2F(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::Class_1_EDF7E2913A3DD535* a2, ::Class_5_0DB196DE3B98F87A_Struct_2_6A02089180E906A3& a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Class_1_EDF7E2913A3DD535*, ::Class_5_0DB196DE3B98F87A_Struct_2_6A02089180E906A3&))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_352E50EA73C25D2F_OFFSET))(a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_1A662F1DA90C17E9_1(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_1A662F1DA90C17E9_1_OFFSET))(this, a1);
	}

	::System::Void Method_5_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_4805283D59625FD9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Method_5_0DE10FB6B809B938(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext* a2)
	{
		return ((::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_0DE10FB6B809B938_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_337434052E9ECAC7(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_337434052E9ECAC7_OFFSET))(this, a1);
	}

	static ::System::Void Method_5_BB0F14870948B337(::MoleMole::Vector2Int a1, ::Class_5_8A5B236F53009830* a2, ::Class_4_7B5A65E248106C68* a3, ::Class_5_0DB196DE3B98F87A_Struct_2_6A02089180E906A3& a4)
	{
		return ((::System::Void(*)(::MoleMole::Vector2Int, ::Class_5_8A5B236F53009830*, ::Class_4_7B5A65E248106C68*, ::Class_5_0DB196DE3B98F87A_Struct_2_6A02089180E906A3&))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_BB0F14870948B337_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_5_32B08B3EF0F49488(::Class_5_2169ABC757988FED* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* a2, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* a3, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_2169ABC757988FED*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_32B08B3EF0F49488_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_1D6B4D99BBE24A4E(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::Class_4_7162AE539CEC5D38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Class_4_7162AE539CEC5D38*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_1D6B4D99BBE24A4E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_CACDFB6EDC05F97E(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_CACDFB6EDC05F97E_OFFSET))(this, a1);
	}

	static ::System::Void Method_5_9094C7E05F1A5B4A(::MoleMole::UIHollowMainPageController* a1, ::Class_4_AC6D98911872E0CE* a2, ::ProtoScript::HollowGridLink a3, ::Class_5_0DB196DE3B98F87A_Class_1_03212B4342240164* a4)
	{
		return ((::System::Void(*)(::MoleMole::UIHollowMainPageController*, ::Class_4_AC6D98911872E0CE*, ::ProtoScript::HollowGridLink, ::Class_5_0DB196DE3B98F87A_Class_1_03212B4342240164*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_9094C7E05F1A5B4A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Method_5_183B83AC452450A4(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_183B83AC452450A4_OFFSET))(a1);
	}

	static ::System::Void Method_5_2248EE9A822FF30B(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::Class_1_EDF7E2913A3DD535* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Class_1_EDF7E2913A3DD535*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_2248EE9A822FF30B_OFFSET))(a1, a2);
	}

	::System::Void Method_5_4FB1BA31C2BB0CC1(::Class_5_2169ABC757988FED* a1, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase* a2, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* a3, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_2169ABC757988FED*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_4FB1BA31C2BB0CC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Method_5_7EF1004C02A28808(::System::Collections::Generic::List_1<::Class_5_2169ABC757988FED*>* a1, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext* a2)
	{
		return ((::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_5_2169ABC757988FED*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_7EF1004C02A28808_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_E9A575D18A0748D9_1(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_5_ECCF1259A8355312(::MoleMole::HollowChessboard::HollowEntity* a1, ::MoleMole::Vector2Int a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_ECCF1259A8355312_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_5E99A542B900C2B1_1(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowEntity* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_5E99A542B900C2B1_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_B8CAAA32CB84B37E(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::MoleMole::Vector2Int a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_B8CAAA32CB84B37E_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::ConfigHollowChessboard_MoveXY* Method_5_9382BF3DB590A854()
	{
		return ((::MoleMole::Config::ConfigHollowChessboard_MoveXY*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_9382BF3DB590A854_OFFSET))(this);
	}

	::System::Void Method_5_D9E4B82A881FC0BE(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_D9E4B82A881FC0BE_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_9609E1F5A5E27A3F(::Cysharp::Threading::Tasks::UniTaskCompletionSource*& a1, ::Class_5_2169ABC757988FED* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* a3, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* a4, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*&, ::Class_5_2169ABC757988FED*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_9609E1F5A5E27A3F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_ED213E4DDA2CFF9E(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_ED213E4DDA2CFF9E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Method_5_FCBBBE8104165B3C(::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext* a1)
	{
		return ((::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_FCBBBE8104165B3C_OFFSET))(this, a1);
	}
};
