#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5EBEB28CB58540B6;

#define CLASS_2_9E8CD0C1037EB98E_63_CLASS_1_6AA682CAEA11E41F_COMPARE_OFFSET UNITYSDK_OFFSET(0x8A3EF90)
#define CLASS_2_9E8CD0C1037EB98E_63_CLASS_1_6AA682CAEA11E41F__CTOR_OFFSET UNITYSDK_OFFSET(0x8A3F150)

inline static constexpr unsigned int Class_2_9E8CD0C1037EB98E_63_Class_1_6AA682CAEA11E41F_TypeDefinitionIndex = 64182;

class Class_2_9E8CD0C1037EB98E_63_Class_1_6AA682CAEA11E41F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_63_CLASS_1_6AA682CAEA11E41F__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_2_5EBEB28CB58540B6* a1, ::Class_2_5EBEB28CB58540B6* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_5EBEB28CB58540B6*, ::Class_2_5EBEB28CB58540B6*))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_63_CLASS_1_6AA682CAEA11E41F_COMPARE_OFFSET))(this, a1, a2);
	}
};
