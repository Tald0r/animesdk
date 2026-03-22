#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_555CA8FD7BA5AF24_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x701EB80)
#define CLASS_1_555CA8FD7BA5AF24_2_METHOD_1_E2308437160BA732_OFFSET UNITYSDK_OFFSET(0x701EDA0)
#define CLASS_1_555CA8FD7BA5AF24_2__CTOR_OFFSET UNITYSDK_OFFSET(0x701ED90)

inline static constexpr unsigned int Class_1_555CA8FD7BA5AF24_2_TypeDefinitionIndex = 61467;

class Class_1_555CA8FD7BA5AF24_2 : public ::System::Object
{
public:
	::Class_2_000597E145D7A42A<::System::Int32>* Field_1_0; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_2; // 0x18
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_555CA8FD7BA5AF24_2__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_555CA8FD7BA5AF24_2_DISPOSE_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_E2308437160BA732()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_555CA8FD7BA5AF24_2_METHOD_1_E2308437160BA732_OFFSET))(this);
	}
};
