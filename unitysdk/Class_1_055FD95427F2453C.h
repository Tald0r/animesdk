#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ShowEntryType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_055FD95427F2453C_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x767FC80)
#define CLASS_1_055FD95427F2453C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x76802A0)
#define CLASS_1_055FD95427F2453C_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x767FCF0)
#define CLASS_1_055FD95427F2453C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x767FD80)
#define CLASS_1_055FD95427F2453C__CTOR_OFFSET UNITYSDK_OFFSET(0x7680290)

inline static constexpr unsigned int Class_1_055FD95427F2453C_TypeDefinitionIndex = 37852;

class Class_1_055FD95427F2453C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_8; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Boolean Field_1_9; // 0x2C
	::System::Boolean Field_1_5; // 0x2D
	::System::Boolean Field_1_7; // 0x2E
	::System::Int32 Field_1_6; // 0x30
	::System::Int32 Field_1_4; // 0x34
	::MoleMole::HollowChessboard::ShowEntryType Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_055FD95427F2453C__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_055FD95427F2453C_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_055FD95427F2453C_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_055FD95427F2453C_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_055FD95427F2453C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
