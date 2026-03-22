#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD31E4216DD30F97;

#define CLASS_2_3B42F43BB76C42A1_CLASS_1_102CD0B33DADEB92_COMPARE_OFFSET UNITYSDK_OFFSET(0x7B4E070)
#define CLASS_2_3B42F43BB76C42A1_CLASS_1_102CD0B33DADEB92__CCTOR_OFFSET UNITYSDK_OFFSET(0x7B4E1A0)
#define CLASS_2_3B42F43BB76C42A1_CLASS_1_102CD0B33DADEB92__CTOR_OFFSET UNITYSDK_OFFSET(0x7B4E190)

inline static constexpr unsigned int Class_2_3B42F43BB76C42A1_Class_1_102CD0B33DADEB92_TypeDefinitionIndex = 44648;

class Class_2_3B42F43BB76C42A1_Class_1_102CD0B33DADEB92 : public ::System::Object
{
public:
	static ::Class_2_3B42F43BB76C42A1_Class_1_102CD0B33DADEB92** StaticGet_Field_1_0()
	{
		return (::Class_2_3B42F43BB76C42A1_Class_1_102CD0B33DADEB92**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B42F43BB76C42A1_Class_1_102CD0B33DADEB92_TypeDefinitionIndex)->GetStaticField(0x3B060);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B42F43BB76C42A1_CLASS_1_102CD0B33DADEB92__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3B42F43BB76C42A1_CLASS_1_102CD0B33DADEB92__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::Class_1_FD31E4216DD30F97* a1, ::Class_1_FD31E4216DD30F97* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FD31E4216DD30F97*, ::Class_1_FD31E4216DD30F97*))((::PBYTE)hIl2Cpp + CLASS_2_3B42F43BB76C42A1_CLASS_1_102CD0B33DADEB92_COMPARE_OFFSET))(this, a1, a2);
	}
};
