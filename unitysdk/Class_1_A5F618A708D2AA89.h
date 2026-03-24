#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_A5F618A708D2AA89_DISPOSE_OFFSET UNITYSDK_OFFSET(0x835C190)
#define CLASS_1_A5F618A708D2AA89_METHOD_1_0BF76270CA87A24D_OFFSET UNITYSDK_OFFSET(0x835C3B0)
#define CLASS_1_A5F618A708D2AA89__CTOR_OFFSET UNITYSDK_OFFSET(0x835C3A0)

inline static constexpr unsigned int Class_1_A5F618A708D2AA89_TypeDefinitionIndex = 69680;

class Class_1_A5F618A708D2AA89 : public ::System::Object
{
public:
	::Class_2_000597E145D7A42A<::System::Int32>* Field_1_0; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_2; // 0x18
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5F618A708D2AA89__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5F618A708D2AA89_DISPOSE_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_0BF76270CA87A24D()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5F618A708D2AA89_METHOD_1_0BF76270CA87A24D_OFFSET))(this);
	}
};
