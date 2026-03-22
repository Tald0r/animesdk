#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_CC81931B486A48F4_METHOD_1_735F6AB92A53D3CA_OFFSET UNITYSDK_OFFSET(0xB0A15E0)
#define CLASS_1_CC81931B486A48F4_METHOD_1_FE63BEC3FAF4B094_OFFSET UNITYSDK_OFFSET(0xB0A14A0)
#define CLASS_1_CC81931B486A48F4__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0A13D0)
#define CLASS_1_CC81931B486A48F4__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A13C0)

inline static constexpr unsigned int Class_1_CC81931B486A48F4_TypeDefinitionIndex = 47373;

class Class_1_CC81931B486A48F4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt16>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC81931B486A48F4_TypeDefinitionIndex)->GetStaticField(0x42E90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC81931B486A48F4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC81931B486A48F4__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_FE63BEC3FAF4B094(::System::UInt16 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC81931B486A48F4_METHOD_1_FE63BEC3FAF4B094_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_735F6AB92A53D3CA(::System::UInt16 a1)
	{
		return ((::System::Boolean(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_CC81931B486A48F4_METHOD_1_735F6AB92A53D3CA_OFFSET))(a1);
	}
};
