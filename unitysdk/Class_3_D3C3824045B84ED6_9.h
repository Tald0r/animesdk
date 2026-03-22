#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_10B60098A2F46A6F.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_D3C3824045B84ED6_9_METHOD_3_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x91C0D00)
#define CLASS_3_D3C3824045B84ED6_9_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91C0E60)
#define CLASS_3_D3C3824045B84ED6_9__CTOR_OFFSET UNITYSDK_OFFSET(0x91C0CC0)

inline static constexpr unsigned int Class_3_D3C3824045B84ED6_9_TypeDefinitionIndex = 70259;

class Class_3_D3C3824045B84ED6_9 : public ::Class_2_10B60098A2F46A6F
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_9_METHOD_3_7223CD34BEFCBF48_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3C3824045B84ED6_9_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
