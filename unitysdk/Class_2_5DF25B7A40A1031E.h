#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_22.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define CLASS_2_5DF25B7A40A1031E_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA7200E0)
#define CLASS_2_5DF25B7A40A1031E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA720080)
#define CLASS_2_5DF25B7A40A1031E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA720020)
#define CLASS_2_5DF25B7A40A1031E__CTOR_OFFSET UNITYSDK_OFFSET(0xA720140)

inline static constexpr unsigned int Class_2_5DF25B7A40A1031E_TypeDefinitionIndex = 73627;

class Class_2_5DF25B7A40A1031E : public ::Class_1_43BD383C98B4C0C5_22
{
public:
	::System::String* Field_2_1; // 0x10
	::MoleMole::HollowChessboard::HollowEntity* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DF25B7A40A1031E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DF25B7A40A1031E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DF25B7A40A1031E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DF25B7A40A1031E_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
