#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFixedCameraEntry; }
namespace System { class Action; }

#define CLASS_1_77F52DD9FB1CA8B2_CLASS_1_FEBDB4D8C1E6332B_METHOD_1_D8A4E99DFDF55961_OFFSET UNITYSDK_OFFSET(0x7619E50)
#define CLASS_1_77F52DD9FB1CA8B2_CLASS_1_FEBDB4D8C1E6332B__CTOR_OFFSET UNITYSDK_OFFSET(0x7619E40)

inline static constexpr unsigned int Class_1_77F52DD9FB1CA8B2_Class_1_FEBDB4D8C1E6332B_TypeDefinitionIndex = 48339;

class Class_1_77F52DD9FB1CA8B2_Class_1_FEBDB4D8C1E6332B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F52DD9FB1CA8B2_CLASS_1_FEBDB4D8C1E6332B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D8A4E99DFDF55961(::MoleMole::Config::ConfigFixedCameraEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFixedCameraEntry*))((::PBYTE)hIl2Cpp + CLASS_1_77F52DD9FB1CA8B2_CLASS_1_FEBDB4D8C1E6332B_METHOD_1_D8A4E99DFDF55961_OFFSET))(this, a1);
	}
};
