#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::HollowChessboard { class MatPropertyData; }

#define STRUCT_2_7527CCEC33D9C9D2_METHOD_2_961F4A46B813CAC8_OFFSET UNITYSDK_OFFSET(0x372070)
#define STRUCT_2_7527CCEC33D9C9D2__CTOR_OFFSET UNITYSDK_OFFSET(0x371F70)

inline static constexpr unsigned int Struct_2_7527CCEC33D9C9D2_TypeDefinitionIndex = 47397;

struct alignas(8) Struct_2_7527CCEC33D9C9D2
{
	::MoleMole::HollowChessboard::MatPropertyData* Field_2_0; // 0x10
	::MoleMole::HollowChessboard::MatPropertyData* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::MatPropertyData* a1, ::MoleMole::HollowChessboard::MatPropertyData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::MatPropertyData*, ::MoleMole::HollowChessboard::MatPropertyData*))((::PBYTE)hIl2Cpp + STRUCT_2_7527CCEC33D9C9D2__CTOR_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_961F4A46B813CAC8(::System::Single a1, ::MoleMole::HollowChessboard::MatPropertyData_Value& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::HollowChessboard::MatPropertyData_Value&))((::PBYTE)hIl2Cpp + STRUCT_2_7527CCEC33D9C9D2_METHOD_2_961F4A46B813CAC8_OFFSET))(this, a1, a2);
	}
	*/
};
