#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectEntityDither; }
namespace System { class Action; }

#define CLASS_1_8F83EEC31E353269_CLASS_1_C987925BC1DAD937_METHOD_1_9B0DF8FCA2576393_OFFSET UNITYSDK_OFFSET(0xAA5E600)
#define CLASS_1_8F83EEC31E353269_CLASS_1_C987925BC1DAD937__CTOR_OFFSET UNITYSDK_OFFSET(0xAA5E5F0)

inline static constexpr unsigned int Class_1_8F83EEC31E353269_Class_1_C987925BC1DAD937_TypeDefinitionIndex = 51994;

class Class_1_8F83EEC31E353269_Class_1_C987925BC1DAD937 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_CLASS_1_C987925BC1DAD937__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9B0DF8FCA2576393(::MoleMole::Config::ConfigViewObjectEntityDither* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectEntityDither*))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_CLASS_1_C987925BC1DAD937_METHOD_1_9B0DF8FCA2576393_OFFSET))(this, a1);
	}
};
