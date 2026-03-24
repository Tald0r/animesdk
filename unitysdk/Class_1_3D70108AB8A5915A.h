#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FE835C8461DC4CA2;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define CLASS_1_3D70108AB8A5915A_METHOD_1_664BF1B42DA7C872_OFFSET UNITYSDK_OFFSET(0x88B4480)
#define CLASS_1_3D70108AB8A5915A_METHOD_1_AA1C5800F144A705_OFFSET UNITYSDK_OFFSET(0x88B4930)
#define CLASS_1_3D70108AB8A5915A_METHOD_1_CE939F9D16359382_OFFSET UNITYSDK_OFFSET(0x88B4780)
#define CLASS_1_3D70108AB8A5915A_METHOD_1_EC7DC7FA5B23736B_OFFSET UNITYSDK_OFFSET(0x88B46D0)
#define CLASS_1_3D70108AB8A5915A__CTOR_OFFSET UNITYSDK_OFFSET(0x88B4400)

inline static constexpr unsigned int Class_1_3D70108AB8A5915A_TypeDefinitionIndex = 76597;

class Class_1_3D70108AB8A5915A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_FE835C8461DC4CA2*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D70108AB8A5915A__CTOR_OFFSET))(this);
	}

	::Class_1_FE835C8461DC4CA2* Method_1_664BF1B42DA7C872(::UnityEngine::Animation* a1)
	{
		return ((::Class_1_FE835C8461DC4CA2*(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_1_3D70108AB8A5915A_METHOD_1_664BF1B42DA7C872_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC7DC7FA5B23736B(::Class_1_FE835C8461DC4CA2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE835C8461DC4CA2*))((::PBYTE)hIl2Cpp + CLASS_1_3D70108AB8A5915A_METHOD_1_EC7DC7FA5B23736B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE939F9D16359382()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D70108AB8A5915A_METHOD_1_CE939F9D16359382_OFFSET))(this);
	}

	::System::Boolean Method_1_AA1C5800F144A705(::Class_1_FE835C8461DC4CA2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FE835C8461DC4CA2*))((::PBYTE)hIl2Cpp + CLASS_1_3D70108AB8A5915A_METHOD_1_AA1C5800F144A705_OFFSET))(this, a1);
	}
};
