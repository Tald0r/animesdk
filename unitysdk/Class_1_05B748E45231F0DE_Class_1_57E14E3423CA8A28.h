#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigAvatarDateTeleport; }
namespace System { class Action; }

#define CLASS_1_05B748E45231F0DE_CLASS_1_57E14E3423CA8A28_METHOD_1_0626648C09CC6FC6_OFFSET UNITYSDK_OFFSET(0x75E3680)
#define CLASS_1_05B748E45231F0DE_CLASS_1_57E14E3423CA8A28__CTOR_OFFSET UNITYSDK_OFFSET(0x75E0780)

inline static constexpr unsigned int Class_1_05B748E45231F0DE_Class_1_57E14E3423CA8A28_TypeDefinitionIndex = 76696;

class Class_1_05B748E45231F0DE_Class_1_57E14E3423CA8A28 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05B748E45231F0DE_CLASS_1_57E14E3423CA8A28__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0626648C09CC6FC6(::MoleMole::ConfigAvatarDateTeleport* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAvatarDateTeleport*))((::PBYTE)hIl2Cpp + CLASS_1_05B748E45231F0DE_CLASS_1_57E14E3423CA8A28_METHOD_1_0626648C09CC6FC6_OFFSET))(this, a1);
	}
};
