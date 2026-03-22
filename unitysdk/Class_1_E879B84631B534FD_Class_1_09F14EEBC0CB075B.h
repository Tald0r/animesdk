#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalCounterstrokeConfig; }
namespace System { class Action; }

#define CLASS_1_E879B84631B534FD_CLASS_1_09F14EEBC0CB075B_METHOD_1_D437E085552AA369_OFFSET UNITYSDK_OFFSET(0x99FDBF0)
#define CLASS_1_E879B84631B534FD_CLASS_1_09F14EEBC0CB075B__CTOR_OFFSET UNITYSDK_OFFSET(0x99FDBE0)

inline static constexpr unsigned int Class_1_E879B84631B534FD_Class_1_09F14EEBC0CB075B_TypeDefinitionIndex = 46710;

class Class_1_E879B84631B534FD_Class_1_09F14EEBC0CB075B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E879B84631B534FD_CLASS_1_09F14EEBC0CB075B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D437E085552AA369(::MoleMole::Config::LevelGlobalCounterstrokeConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelGlobalCounterstrokeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E879B84631B534FD_CLASS_1_09F14EEBC0CB075B_METHOD_1_D437E085552AA369_OFFSET))(this, a1);
	}
};
