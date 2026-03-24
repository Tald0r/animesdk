#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
class MonoUITableScrollV2;
class UIWidgetGroup;
namespace System { class String; }

#define CLASS_2_491FBCD7780B51A1_METHOD_2_2601EB8F1CA5A754_OFFSET UNITYSDK_OFFSET(0x6B453C0)
#define CLASS_2_491FBCD7780B51A1_METHOD_2_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0x6B45740)
#define CLASS_2_491FBCD7780B51A1_METHOD_2_740D65CE875BB48C_OFFSET UNITYSDK_OFFSET(0x6B45900)
#define CLASS_2_491FBCD7780B51A1__CTOR_OFFSET UNITYSDK_OFFSET(0x6B456E0)

inline static constexpr unsigned int Class_2_491FBCD7780B51A1_TypeDefinitionIndex = 43798;

class Class_2_491FBCD7780B51A1 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::System::String* Field_2_0; // 0x50
	::System::Int32 Field_2_2; // 0x58
	::System::Int32 Field_2_1; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_491FBCD7780B51A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2601EB8F1CA5A754(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_491FBCD7780B51A1_METHOD_2_2601EB8F1CA5A754_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_491FBCD7780B51A1_METHOD_2_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::UIWidgetGroup* Method_2_740D65CE875BB48C(::MonoUITableScrollV2* a1)
	{
		return ((::UIWidgetGroup*(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_491FBCD7780B51A1_METHOD_2_740D65CE875BB48C_OFFSET))(this, a1);
	}
};
