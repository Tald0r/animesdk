#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29EEA995F8FD7C71.h"

class Class_3_0B01610F9F860761;
namespace MoleMole::ChessStateMachine { class ConditionGroup; }
namespace MoleMole::ChessStateMachine { class ConnectionSetting; }
namespace MoleMole::ChessStateMachine { class TransitionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_51A010F339D9A674_METHOD_2_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x75B7040)
#define CLASS_2_51A010F339D9A674_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x75B6DE0)
#define CLASS_2_51A010F339D9A674_METHOD_2_6BC2D29C24A7D2ED_OFFSET UNITYSDK_OFFSET(0x75B7080)
#define CLASS_2_51A010F339D9A674_METHOD_2_90E8F30544D721FF_OFFSET UNITYSDK_OFFSET(0x75B7060)
#define CLASS_2_51A010F339D9A674_METHOD_2_F5BADA2BB98150BC_OFFSET UNITYSDK_OFFSET(0x75B6E00)
#define CLASS_2_51A010F339D9A674__CTOR_OFFSET UNITYSDK_OFFSET(0x75B6D30)

inline static constexpr unsigned int Class_2_51A010F339D9A674_TypeDefinitionIndex = 38406;

class Class_2_51A010F339D9A674 : public ::Class_1_29EEA995F8FD7C71
{
public:
	::Class_3_0B01610F9F860761* Field_2_1; // 0x48
	::MoleMole::ChessStateMachine::TransitionConfig* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51A010F339D9A674__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51A010F339D9A674_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::Class_2_51A010F339D9A674* Method_2_F5BADA2BB98150BC()
	{
		return ((::Class_2_51A010F339D9A674*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51A010F339D9A674_METHOD_2_F5BADA2BB98150BC_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51A010F339D9A674_METHOD_2_128774387667156B_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ConditionGroup*>* Method_2_90E8F30544D721FF()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ConditionGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51A010F339D9A674_METHOD_2_90E8F30544D721FF_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::ConnectionSetting* Method_2_6BC2D29C24A7D2ED()
	{
		return ((::MoleMole::ChessStateMachine::ConnectionSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51A010F339D9A674_METHOD_2_6BC2D29C24A7D2ED_OFFSET))(this);
	}
};
