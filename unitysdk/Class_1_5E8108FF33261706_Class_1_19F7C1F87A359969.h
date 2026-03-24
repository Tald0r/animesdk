#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class MonoSurfConfig; }
namespace System { class Action; }

#define CLASS_1_5E8108FF33261706_CLASS_1_19F7C1F87A359969_METHOD_1_76D9E1058468AFA9_OFFSET UNITYSDK_OFFSET(0x6D873E0)
#define CLASS_1_5E8108FF33261706_CLASS_1_19F7C1F87A359969__CTOR_OFFSET UNITYSDK_OFFSET(0x6D873D0)

inline static constexpr unsigned int Class_1_5E8108FF33261706_Class_1_19F7C1F87A359969_TypeDefinitionIndex = 50013;

class Class_1_5E8108FF33261706_Class_1_19F7C1F87A359969 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8108FF33261706_CLASS_1_19F7C1F87A359969__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_76D9E1058468AFA9(::MoleMole::Config::MonoSurfConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MonoSurfConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5E8108FF33261706_CLASS_1_19F7C1F87A359969_METHOD_1_76D9E1058468AFA9_OFFSET))(this, a1);
	}
};
