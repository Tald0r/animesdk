#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A45E918E5024074.h"
#include "unitysdk/System/Object.h"

class Class_1_87F0035AB3018CD9;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_87F0035AB3018CD9_CLASS_1_61E1CE0550BF68B7_METHOD_1_FDEA3D33C50336D6_OFFSET UNITYSDK_OFFSET(0x6D30BF0)
#define CLASS_1_87F0035AB3018CD9_CLASS_1_61E1CE0550BF68B7__CTOR_OFFSET UNITYSDK_OFFSET(0x6D30BE0)

inline static constexpr unsigned int Class_1_87F0035AB3018CD9_Class_1_61E1CE0550BF68B7_TypeDefinitionIndex = 78152;

class Class_1_87F0035AB3018CD9_Class_1_61E1CE0550BF68B7 : public ::System::Object
{
public:
	::Class_1_87F0035AB3018CD9* Field_1_0; // 0x10
	::System::Action_1<::System::EventArgs*>* Field_1_1; // 0x18
	::Enum_3_3A45E918E5024074 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87F0035AB3018CD9_CLASS_1_61E1CE0550BF68B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FDEA3D33C50336D6(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_87F0035AB3018CD9_CLASS_1_61E1CE0550BF68B7_METHOD_1_FDEA3D33C50336D6_OFFSET))(this, a1);
	}
};
