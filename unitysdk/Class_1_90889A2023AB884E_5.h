#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_90889A2023AB884E_5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x6D221D0)
#define CLASS_1_90889A2023AB884E_5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6D221E0)
#define CLASS_1_90889A2023AB884E_5_METHOD_1_FCAA11FB115A459E_OFFSET UNITYSDK_OFFSET(0x6D221F0)
#define CLASS_1_90889A2023AB884E_5__CTOR_OFFSET UNITYSDK_OFFSET(0x6D221C0)

inline static constexpr unsigned int Class_1_90889A2023AB884E_5_TypeDefinitionIndex = 56308;

class Class_1_90889A2023AB884E_5 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FCAA11FB115A459E()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_5_METHOD_1_FCAA11FB115A459E_OFFSET))(this);
	}
};
