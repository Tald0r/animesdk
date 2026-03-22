#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowTimeRewind; }
namespace System { class Action; }

#define CLASS_1_F65AFB72F16EB615_CLASS_1_C0730D7386E9157C_METHOD_1_59EE9ABCC49FFED7_OFFSET UNITYSDK_OFFSET(0x7AA6140)
#define CLASS_1_F65AFB72F16EB615_CLASS_1_C0730D7386E9157C__CTOR_OFFSET UNITYSDK_OFFSET(0x7AA6130)

inline static constexpr unsigned int Class_1_F65AFB72F16EB615_Class_1_C0730D7386E9157C_TypeDefinitionIndex = 77573;

class Class_1_F65AFB72F16EB615_Class_1_C0730D7386E9157C : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65AFB72F16EB615_CLASS_1_C0730D7386E9157C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_59EE9ABCC49FFED7(::MoleMole::Config::ConfigHollowTimeRewind* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowTimeRewind*))((::PBYTE)hIl2Cpp + CLASS_1_F65AFB72F16EB615_CLASS_1_C0730D7386E9157C_METHOD_1_59EE9ABCC49FFED7_OFFSET))(this, a1);
	}
};
