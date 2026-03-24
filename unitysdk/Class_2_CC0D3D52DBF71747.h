#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_1_EEEABF1B21498A91;
class Class_2_4E3F5BE8BDF41F9D;
class Class_3_5A81F134BF56B350;
namespace Foundation { template <typename T> class ObjectPoolOfReusable_1; }
namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_CC0D3D52DBF71747_METHOD_2_2A83FA3713ACC6E3_OFFSET UNITYSDK_OFFSET(0x8ACB800)
#define CLASS_2_CC0D3D52DBF71747_METHOD_2_D7CFF8BEF30FC257_OFFSET UNITYSDK_OFFSET(0x8ACB3F0)
#define CLASS_2_CC0D3D52DBF71747_METHOD_2_F72A6C94039DB0CA_OFFSET UNITYSDK_OFFSET(0x8ACBA40)
#define CLASS_2_CC0D3D52DBF71747__CTOR_OFFSET UNITYSDK_OFFSET(0x8ACB340)

inline static constexpr unsigned int Class_2_CC0D3D52DBF71747_TypeDefinitionIndex = 55064;

class Class_2_CC0D3D52DBF71747 : public ::Foundation::Singleton_1<::Class_2_CC0D3D52DBF71747*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::Foundation::ObjectPoolOfReusable_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>*>*>* Field_2_1; // 0x10
	::Class_1_EEEABF1B21498A91* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC0D3D52DBF71747__CTOR_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::StateMachineBaseAction* Method_2_D7CFF8BEF30FC257(::Class_2_4E3F5BE8BDF41F9D* a1, ::Class_3_5A81F134BF56B350* a2, ::System::Int32 a3)
	{
		return ((::MoleMole::ChessStateMachine::StateMachineBaseAction*(*)(::PVOID, ::Class_2_4E3F5BE8BDF41F9D*, ::Class_3_5A81F134BF56B350*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CC0D3D52DBF71747_METHOD_2_D7CFF8BEF30FC257_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2A83FA3713ACC6E3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC0D3D52DBF71747_METHOD_2_2A83FA3713ACC6E3_OFFSET))(this);
	}

	::System::Void Method_2_F72A6C94039DB0CA(::Class_3_5A81F134BF56B350* a1, ::System::Int32 a2, ::MoleMole::ChessStateMachine::StateMachineBaseAction* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5A81F134BF56B350*, ::System::Int32, ::MoleMole::ChessStateMachine::StateMachineBaseAction*))((::PBYTE)hIl2Cpp + CLASS_2_CC0D3D52DBF71747_METHOD_2_F72A6C94039DB0CA_OFFSET))(this, a1, a2, a3);
	}
};
