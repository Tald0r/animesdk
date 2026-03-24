#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5B461AA5B626CCC4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Object.h"

class Class_1_E5B7864412CDC074;
class Class_4_B1EAD8476216C1D8;
class Class_5_0B648F1F8F6AC84A;
class Class_5_A53BB84C10BA182D;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_A53BB84C10BA182D_CLASS_1_8B8B7E73BCA56F09_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xEB150A0)
#define CLASS_5_A53BB84C10BA182D_CLASS_1_8B8B7E73BCA56F09_METHOD_1_4D95DF046A3D9DF8_OFFSET UNITYSDK_OFFSET(0xEB14D80)
#define CLASS_5_A53BB84C10BA182D_CLASS_1_8B8B7E73BCA56F09__CTOR_OFFSET UNITYSDK_OFFSET(0xEB14D70)

inline static constexpr unsigned int Class_5_A53BB84C10BA182D_Class_1_8B8B7E73BCA56F09_TypeDefinitionIndex = 55177;

class Class_5_A53BB84C10BA182D_Class_1_8B8B7E73BCA56F09 : public ::System::Object
{
public:
	::System::Action* Field_1_10; // 0x10
	::Class_5_A53BB84C10BA182D* Field_1_1; // 0x18
	::Class_1_E5B7864412CDC074* Field_1_4; // 0x20
	::Class_4_B1EAD8476216C1D8* Field_1_2; // 0x28
	::MoleMole::UIHollowChessboard3DModelController* Field_1_3; // 0x30
	::Class_5_0B648F1F8F6AC84A* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x40
	::MoleMole::HollowChessboard::HollowCell Field_1_8; // 0x48
	::Enum_3_5B461AA5B626CCC4 Field_1_5; // 0x54
	::System::Single Field_1_7; // 0x58
	::MoleMole::PlayerOnViewState Field_1_9; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_CLASS_1_8B8B7E73BCA56F09__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4D95DF046A3D9DF8(::MoleMole::HollowChessboard::HollowCell a1, ::Share::GridDir a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Share::GridDir))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_CLASS_1_8B8B7E73BCA56F09_METHOD_1_4D95DF046A3D9DF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_CLASS_1_8B8B7E73BCA56F09_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}
};
