#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_976C32A5F32B58FC.h"

namespace MoleMole { class InLevelBuddyDataItem; }

#define CLASS_2_48439BA76307A68F_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xA264560)
#define CLASS_2_48439BA76307A68F_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0xA264760)
#define CLASS_2_48439BA76307A68F__CTOR_OFFSET UNITYSDK_OFFSET(0xA264550)

inline static constexpr unsigned int Class_2_48439BA76307A68F_TypeDefinitionIndex = 44378;

class Class_2_48439BA76307A68F : public ::Class_1_976C32A5F32B58FC
{
public:
	::MoleMole::InLevelBuddyDataItem* Field_2_0; // 0x28

	::System::Void _ctor(::MoleMole::InLevelBuddyDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelBuddyDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_48439BA76307A68F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48439BA76307A68F_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48439BA76307A68F_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}
};
