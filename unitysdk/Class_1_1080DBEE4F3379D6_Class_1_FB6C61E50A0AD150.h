#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTargetValues; }
namespace System { class Action; }

#define CLASS_1_1080DBEE4F3379D6_CLASS_1_FB6C61E50A0AD150_METHOD_1_838E864E8A671089_OFFSET UNITYSDK_OFFSET(0x7AB1640)
#define CLASS_1_1080DBEE4F3379D6_CLASS_1_FB6C61E50A0AD150__CTOR_OFFSET UNITYSDK_OFFSET(0x7AB1630)

inline static constexpr unsigned int Class_1_1080DBEE4F3379D6_Class_1_FB6C61E50A0AD150_TypeDefinitionIndex = 76851;

class Class_1_1080DBEE4F3379D6_Class_1_FB6C61E50A0AD150 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_CLASS_1_FB6C61E50A0AD150__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_838E864E8A671089(::MoleMole::Config::ConfigTargetValues* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTargetValues*))((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_CLASS_1_FB6C61E50A0AD150_METHOD_1_838E864E8A671089_OFFSET))(this, a1);
	}
};
