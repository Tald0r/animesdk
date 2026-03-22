#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define CLASS_3_83EB607D6045BB76_CLASS_1_C682907C903E0925_1_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xA450E00)
#define CLASS_3_83EB607D6045BB76_CLASS_1_C682907C903E0925_1_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xA450D80)
#define CLASS_3_83EB607D6045BB76_CLASS_1_C682907C903E0925_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA450D70)

inline static constexpr unsigned int Class_3_83EB607D6045BB76_Class_1_C682907C903E0925_1_TypeDefinitionIndex = 53148;

class Class_3_83EB607D6045BB76_Class_1_C682907C903E0925_1 : public ::System::Object
{
public:
	::UnityEngine::Material* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83EB607D6045BB76_CLASS_1_C682907C903E0925_1__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83EB607D6045BB76_CLASS_1_C682907C903E0925_1_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_83EB607D6045BB76_CLASS_1_C682907C903E0925_1_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}
};
