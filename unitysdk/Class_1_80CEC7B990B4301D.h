#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0FC69F51F876980B.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_32;
class Class_3_7E21E2F8DEAA5F4C_8;
class Class_3_85654BFA8514445B;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_80CEC7B990B4301D__CTOR_OFFSET UNITYSDK_OFFSET(0xA9F39F0)

inline static constexpr unsigned int Class_1_80CEC7B990B4301D_TypeDefinitionIndex = 38737;

class Class_1_80CEC7B990B4301D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_4; // 0x10
	::System::String* Field_1_14; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_12; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_11; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* Field_1_1; // 0x38
	::Class_3_85654BFA8514445B* Field_1_19; // 0x40
	::System::Action* Field_1_10; // 0x48
	::Class_1_43BD383C98B4C0C5_32* Field_1_7; // 0x50
	::Class_3_7E21E2F8DEAA5F4C_8* Field_1_18; // 0x58
	::System::Action* Field_1_9; // 0x60
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* Field_1_2; // 0x68
	::System::String* Field_1_6; // 0x70
	::System::String* Field_1_15; // 0x78
	::System::String* Field_1_16; // 0x80
	::System::String* Field_1_17; // 0x88
	::System::Single Field_1_5; // 0x90
	::System::Int32 Field_1_8; // 0x94
	::Enum_3_0FC69F51F876980B Field_1_13; // 0x98
	::MoleMole::HollowChessboard::HollowCell Field_1_3; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80CEC7B990B4301D__CTOR_OFFSET))(this);
	}
};
