#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigOnGoingTypeDurationData; }
namespace System { class Action; }

#define CLASS_1_64B5995EFCFBB7F6_CLASS_1_9E188AF7BD43BD46_METHOD_1_F3F6CFE07611A9BA_OFFSET UNITYSDK_OFFSET(0xD27CC00)
#define CLASS_1_64B5995EFCFBB7F6_CLASS_1_9E188AF7BD43BD46__CTOR_OFFSET UNITYSDK_OFFSET(0xD27CBF0)

inline static constexpr unsigned int Class_1_64B5995EFCFBB7F6_Class_1_9E188AF7BD43BD46_TypeDefinitionIndex = 66482;

class Class_1_64B5995EFCFBB7F6_Class_1_9E188AF7BD43BD46 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64B5995EFCFBB7F6_CLASS_1_9E188AF7BD43BD46__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F3F6CFE07611A9BA(::MoleMole::Config::ConfigOnGoingTypeDurationData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigOnGoingTypeDurationData*))((::PBYTE)hIl2Cpp + CLASS_1_64B5995EFCFBB7F6_CLASS_1_9E188AF7BD43BD46_METHOD_1_F3F6CFE07611A9BA_OFFSET))(this, a1);
	}
};
