#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_83EAEAC4062E7EF0_METHOD_3_4D02DB558D7387FA_OFFSET UNITYSDK_OFFSET(0x97C35D0)
#define CLASS_3_83EAEAC4062E7EF0_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x97C3870)
#define CLASS_3_83EAEAC4062E7EF0__CTOR_OFFSET UNITYSDK_OFFSET(0x97C35C0)

inline static constexpr unsigned int Class_3_83EAEAC4062E7EF0_TypeDefinitionIndex = 69287;

class Class_3_83EAEAC4062E7EF0 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_83EAEAC4062E7EF0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_4D02DB558D7387FA(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_83EAEAC4062E7EF0_METHOD_3_4D02DB558D7387FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_83EAEAC4062E7EF0_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};
