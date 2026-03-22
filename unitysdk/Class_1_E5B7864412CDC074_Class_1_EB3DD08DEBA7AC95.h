#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD2B1B6FB741157.h"
#include "unitysdk/System/Object.h"

class Class_1_E5B7864412CDC074_Class_1_F8FA083515A45F76;
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }

#define CLASS_1_E5B7864412CDC074_CLASS_1_EB3DD08DEBA7AC95_METHOD_1_4C3D4DB48FCA9DF7_OFFSET UNITYSDK_OFFSET(0x8DD9EF0)
#define CLASS_1_E5B7864412CDC074_CLASS_1_EB3DD08DEBA7AC95__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD9EE0)

inline static constexpr unsigned int Class_1_E5B7864412CDC074_Class_1_EB3DD08DEBA7AC95_TypeDefinitionIndex = 75305;

class Class_1_E5B7864412CDC074_Class_1_EB3DD08DEBA7AC95 : public ::System::Object
{
public:
	::MoleMole::Config::ConfigHollowCameraStretchV2* Field_1_0; // 0x10
	::Class_1_E5B7864412CDC074_Class_1_F8FA083515A45F76* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_CLASS_1_EB3DD08DEBA7AC95__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4C3D4DB48FCA9DF7(::Struct_2_AAD2B1B6FB741157 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD2B1B6FB741157))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_CLASS_1_EB3DD08DEBA7AC95_METHOD_1_4C3D4DB48FCA9DF7_OFFSET))(this, a1);
	}
};
