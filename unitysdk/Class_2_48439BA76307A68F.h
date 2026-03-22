#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_976C32A5F32B58FC.h"

namespace MoleMole { class InLevelBuddyDataItem; }

#define CLASS_2_48439BA76307A68F_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x7B73E30)
#define CLASS_2_48439BA76307A68F_METHOD_2_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x7B73640)
#define CLASS_2_48439BA76307A68F__CTOR_OFFSET UNITYSDK_OFFSET(0x7B73630)

inline static constexpr unsigned int Class_2_48439BA76307A68F_TypeDefinitionIndex = 73017;

class Class_2_48439BA76307A68F : public ::Class_1_976C32A5F32B58FC
{
public:
	::MoleMole::InLevelBuddyDataItem* Field_2_0; // 0x28

	::System::Void _ctor(::MoleMole::InLevelBuddyDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelBuddyDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_48439BA76307A68F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_F53BAAE38A584428()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48439BA76307A68F_METHOD_2_F53BAAE38A584428_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48439BA76307A68F_METHOD_2_489E0B827662C211_OFFSET))(this);
	}
};
