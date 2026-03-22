#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_555CA8FD7BA5AF24_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7BC74F0)
#define CLASS_1_555CA8FD7BA5AF24_1_METHOD_1_EF879F29CD083C1B_OFFSET UNITYSDK_OFFSET(0x7BC7710)
#define CLASS_1_555CA8FD7BA5AF24_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7BC7700)

inline static constexpr unsigned int Class_1_555CA8FD7BA5AF24_1_TypeDefinitionIndex = 49932;

class Class_1_555CA8FD7BA5AF24_1 : public ::System::Object
{
public:
	::Class_2_000597E145D7A42A<::System::Int32>* Field_1_0; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_1; // 0x18
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_555CA8FD7BA5AF24_1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_555CA8FD7BA5AF24_1_DISPOSE_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_EF879F29CD083C1B()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_555CA8FD7BA5AF24_1_METHOD_1_EF879F29CD083C1B_OFFSET))(this);
	}
};
