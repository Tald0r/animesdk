#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_F49563BB4CA2D310_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7E1B60)
#define CLASS_1_F49563BB4CA2D310_METHOD_1_F4BE962E72F8D312_OFFSET UNITYSDK_OFFSET(0xB7E1C70)
#define CLASS_1_F49563BB4CA2D310__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E1C60)

inline static constexpr unsigned int Class_1_F49563BB4CA2D310_TypeDefinitionIndex = 70416;

class Class_1_F49563BB4CA2D310 : public ::System::Object
{
public:
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F49563BB4CA2D310__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F49563BB4CA2D310_DISPOSE_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_F4BE962E72F8D312()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F49563BB4CA2D310_METHOD_1_F4BE962E72F8D312_OFFSET))(this);
	}
};
