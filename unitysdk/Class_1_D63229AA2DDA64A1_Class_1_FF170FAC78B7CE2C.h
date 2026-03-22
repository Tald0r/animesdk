#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

class Class_1_D63229AA2DDA64A1_Class_1_C9AA7F4EBE603CD7;

#define CLASS_1_D63229AA2DDA64A1_CLASS_1_FF170FAC78B7CE2C_METHOD_1_C72E1CBF9917B2A5_OFFSET UNITYSDK_OFFSET(0xEE74440)
#define CLASS_1_D63229AA2DDA64A1_CLASS_1_FF170FAC78B7CE2C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xEE74620)
#define CLASS_1_D63229AA2DDA64A1_CLASS_1_FF170FAC78B7CE2C__CTOR_OFFSET UNITYSDK_OFFSET(0xEE74430)

inline static constexpr unsigned int Class_1_D63229AA2DDA64A1_Class_1_FF170FAC78B7CE2C_TypeDefinitionIndex = 53288;

class Class_1_D63229AA2DDA64A1_Class_1_FF170FAC78B7CE2C : public ::System::Object
{
public:
	::Class_1_D63229AA2DDA64A1_Class_1_C9AA7F4EBE603CD7* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63229AA2DDA64A1_CLASS_1_FF170FAC78B7CE2C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C72E1CBF9917B2A5(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + CLASS_1_D63229AA2DDA64A1_CLASS_1_FF170FAC78B7CE2C_METHOD_1_C72E1CBF9917B2A5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63229AA2DDA64A1_CLASS_1_FF170FAC78B7CE2C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
