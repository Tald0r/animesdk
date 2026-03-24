#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_3C29F96DEFD2E870_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F80D50)
#define CLASS_1_3C29F96DEFD2E870_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9F81110)

inline static constexpr unsigned int Class_1_3C29F96DEFD2E870_1_TypeDefinitionIndex = 75126;

class Class_1_3C29F96DEFD2E870_1 : public ::System::Object
{
public:
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_5; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_1; // 0x18
	::Class_2_000597E145D7A42A<::System::Single>* Field_1_3; // 0x20
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_4; // 0x28
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_6; // 0x30
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_2; // 0x38
	::System::Int32 Field_1_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C29F96DEFD2E870_1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C29F96DEFD2E870_1_DISPOSE_OFFSET))(this);
	}
};
