#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }

#define CLASS_3_83EB607D6045BB76_CLASS_1_CFC51A13A72E363F_METHOD_1_27EF0AD4D08DEC04_OFFSET UNITYSDK_OFFSET(0xADC8930)
#define CLASS_3_83EB607D6045BB76_CLASS_1_CFC51A13A72E363F_METHOD_1_3EDD97AA82F9C273_OFFSET UNITYSDK_OFFSET(0xADC8A10)
#define CLASS_3_83EB607D6045BB76_CLASS_1_CFC51A13A72E363F__CTOR_OFFSET UNITYSDK_OFFSET(0xADC8920)

inline static constexpr unsigned int Class_3_83EB607D6045BB76_Class_1_CFC51A13A72E363F_TypeDefinitionIndex = 53151;

class Class_3_83EB607D6045BB76_Class_1_CFC51A13A72E363F : public ::System::Object
{
public:
	::UnityEngine::Material* Field_1_0; // 0x10
	::Il2CppArray<::UnityEngine::Material*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83EB607D6045BB76_CLASS_1_CFC51A13A72E363F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_27EF0AD4D08DEC04(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_3_83EB607D6045BB76_CLASS_1_CFC51A13A72E363F_METHOD_1_27EF0AD4D08DEC04_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_3EDD97AA82F9C273()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83EB607D6045BB76_CLASS_1_CFC51A13A72E363F_METHOD_1_3EDD97AA82F9C273_OFFSET))(this);
	}
};
