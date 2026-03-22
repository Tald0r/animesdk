#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_5_2169ABC757988FED;

#define CLASS_1_14EFCC4DA2FB1898_METHOD_1_0B0EF0C44FA4122B_OFFSET UNITYSDK_OFFSET(0x842A630)
#define CLASS_1_14EFCC4DA2FB1898_METHOD_1_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x842A7F0)
#define CLASS_1_14EFCC4DA2FB1898_METHOD_1_DBAF50518B383E19_OFFSET UNITYSDK_OFFSET(0x842A8B0)
#define CLASS_1_14EFCC4DA2FB1898_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x842A8A0)
#define CLASS_1_14EFCC4DA2FB1898_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x842A7E0)
#define CLASS_1_14EFCC4DA2FB1898__CTOR_OFFSET UNITYSDK_OFFSET(0x842A620)

inline static constexpr unsigned int Class_1_14EFCC4DA2FB1898_TypeDefinitionIndex = 51883;

class Class_1_14EFCC4DA2FB1898 : public ::System::Object
{
public:
	::Class_5_2169ABC757988FED* Field_1_2; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x19

	::System::Void _ctor(::Class_5_2169ABC757988FED* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_2169ABC757988FED*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14EFCC4DA2FB1898__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_0B0EF0C44FA4122B(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14EFCC4DA2FB1898_METHOD_1_0B0EF0C44FA4122B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14EFCC4DA2FB1898_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14EFCC4DA2FB1898_METHOD_1_BF972395CC722BF9_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14EFCC4DA2FB1898_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Class_5_2169ABC757988FED* Method_1_DBAF50518B383E19()
	{
		return ((::Class_5_2169ABC757988FED*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14EFCC4DA2FB1898_METHOD_1_DBAF50518B383E19_OFFSET))(this);
	}
};
