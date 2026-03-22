#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EFEF7CE7B8D41309.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BB6D76999072F2AC_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x7FF7170)
#define CLASS_1_BB6D76999072F2AC__CTOR_OFFSET UNITYSDK_OFFSET(0x7FF7160)

inline static constexpr unsigned int Class_1_BB6D76999072F2AC_TypeDefinitionIndex = 46742;

class Class_1_BB6D76999072F2AC : public ::System::Object
{
public:
	::System::Action* Field_1_9; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_4; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::Enum_3_EFEF7CE7B8D41309 Field_1_8; // 0x24
	::System::Int32 Field_1_1; // 0x28
	::System::Boolean Field_1_7; // 0x2C
	::System::Boolean Field_1_5; // 0x2D
	::System::Boolean Field_1_2; // 0x2E
	::System::Boolean Field_1_6; // 0x2F
	::System::UInt64 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB6D76999072F2AC__CTOR_OFFSET))(this);
	}

	::Class_1_BB6D76999072F2AC* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_BB6D76999072F2AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB6D76999072F2AC_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}
};
