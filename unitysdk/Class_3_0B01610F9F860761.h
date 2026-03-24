#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1DD66CA78A3425BD.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateNodeType.h"

class Class_2_51A010F339D9A674;
namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace MoleMole::ChessStateMachine { class StateNodeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0B01610F9F860761_METHOD_3_01FEFE3A064F0364_OFFSET UNITYSDK_OFFSET(0x65024C0)
#define CLASS_3_0B01610F9F860761_METHOD_3_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x65022C0)
#define CLASS_3_0B01610F9F860761_METHOD_3_97859DFDB28A1CFB_OFFSET UNITYSDK_OFFSET(0x65022E0)
#define CLASS_3_0B01610F9F860761_METHOD_3_A5405B9927FE91FF_1_OFFSET UNITYSDK_OFFSET(0x65022A0)
#define CLASS_3_0B01610F9F860761_METHOD_3_A5405B9927FE91FF_OFFSET UNITYSDK_OFFSET(0x6502280)
#define CLASS_3_0B01610F9F860761_METHOD_3_A60EC9DCEC35BBBA_OFFSET UNITYSDK_OFFSET(0x6502550)
#define CLASS_3_0B01610F9F860761_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x65024E0)
#define CLASS_3_0B01610F9F860761_METHOD_3_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x6502260)
#define CLASS_3_0B01610F9F860761_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x6502240)
#define CLASS_3_0B01610F9F860761__CTOR_OFFSET UNITYSDK_OFFSET(0x6502140)

inline static constexpr unsigned int Class_3_0B01610F9F860761_TypeDefinitionIndex = 43095;

class Class_3_0B01610F9F860761 : public ::Class_2_1DD66CA78A3425BD
{
public:
	::System::Collections::Generic::List_1<::Class_2_51A010F339D9A674*>* Field_3_1; // 0x58
	::MoleMole::ChessStateMachine::StateNodeConfig* stateNodeConfig; // 0x60
	::System::Collections::Generic::List_1<::Class_2_51A010F339D9A674*>* Field_3_2; // 0x68
	::System::Int32 Field_3_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_F0E307B84478A272_1_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::StateNodeType Method_3_A5405B9927FE91FF()
	{
		return ((::MoleMole::ChessStateMachine::StateNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_A5405B9927FE91FF_OFFSET))(this);
	}

	::System::Boolean Method_3_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_0F30679B05E70FC1_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::StateNodeType Method_3_A5405B9927FE91FF_1()
	{
		return ((::MoleMole::ChessStateMachine::StateNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_A5405B9927FE91FF_1_OFFSET))(this);
	}

	::Class_3_0B01610F9F860761* Method_3_97859DFDB28A1CFB()
	{
		return ((::Class_3_0B01610F9F860761*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_97859DFDB28A1CFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>* Method_3_01FEFE3A064F0364()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_01FEFE3A064F0364_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_A60EC9DCEC35BBBA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_A60EC9DCEC35BBBA_OFFSET))(this);
	}
};
