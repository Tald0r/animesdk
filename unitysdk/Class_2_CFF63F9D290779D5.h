#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_20.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define CLASS_2_CFF63F9D290779D5_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x842E480)
#define CLASS_2_CFF63F9D290779D5_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x842E540)
#define CLASS_2_CFF63F9D290779D5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x842E4E0)
#define CLASS_2_CFF63F9D290779D5__CTOR_OFFSET UNITYSDK_OFFSET(0x842E5A0)

inline static constexpr unsigned int Class_2_CFF63F9D290779D5_TypeDefinitionIndex = 60210;

class Class_2_CFF63F9D290779D5 : public ::Class_1_43BD383C98B4C0C5_20
{
public:
	::MoleMole::HollowChessboard::HollowCell Field_2_1; // 0x10
	::MoleMole::HollowChessboard::HollowCell Field_2_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFF63F9D290779D5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFF63F9D290779D5_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFF63F9D290779D5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFF63F9D290779D5_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
