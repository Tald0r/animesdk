#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E6E2CD5B8103BD02.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define CLASS_4_C8A4CA21E9D7DEAD_METHOD_4_98CE38520ED9B00A_OFFSET UNITYSDK_OFFSET(0xA622EF0)
#define CLASS_4_C8A4CA21E9D7DEAD__CTOR_OFFSET UNITYSDK_OFFSET(0xA622EA0)

inline static constexpr unsigned int Class_4_C8A4CA21E9D7DEAD_TypeDefinitionIndex = 56244;

class Class_4_C8A4CA21E9D7DEAD : public ::Class_3_E6E2CD5B8103BD02
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C8A4CA21E9D7DEAD__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_98CE38520ED9B00A(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_C8A4CA21E9D7DEAD_METHOD_4_98CE38520ED9B00A_OFFSET))(this, a1);
	}
};
