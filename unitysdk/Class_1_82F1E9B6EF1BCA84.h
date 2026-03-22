#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_679286007DE1DCF6;
class Class_1_82F1E9B6EF1BCA84_Class_1_84AAEDD15AA8A2D6;
class Class_2_44A4A8D0EA003DD8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82F1E9B6EF1BCA84_METHOD_1_2B5F840B32CF1A44_OFFSET UNITYSDK_OFFSET(0x15F5AAB0)
#define CLASS_1_82F1E9B6EF1BCA84_METHOD_1_4487EB59871B4D67_OFFSET UNITYSDK_OFFSET(0x15F5A930)
#define CLASS_1_82F1E9B6EF1BCA84__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5A8B0)

inline static constexpr unsigned int Class_1_82F1E9B6EF1BCA84_TypeDefinitionIndex = 77872;

class Class_1_82F1E9B6EF1BCA84 : public ::System::Object
{
public:
	::Class_1_679286007DE1DCF6* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_82F1E9B6EF1BCA84_Class_1_84AAEDD15AA8A2D6*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_679286007DE1DCF6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_679286007DE1DCF6*))((::PBYTE)hIl2Cpp + CLASS_1_82F1E9B6EF1BCA84__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_82F1E9B6EF1BCA84* Method_1_2B5F840B32CF1A44(::Class_2_44A4A8D0EA003DD8* a1)
	{
		return ((::Class_1_82F1E9B6EF1BCA84*(*)(::Class_2_44A4A8D0EA003DD8*))((::PBYTE)hIl2Cpp + CLASS_1_82F1E9B6EF1BCA84_METHOD_1_2B5F840B32CF1A44_OFFSET))(a1);
	}

	::System::Void Method_1_4487EB59871B4D67(::Class_2_44A4A8D0EA003DD8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_44A4A8D0EA003DD8*))((::PBYTE)hIl2Cpp + CLASS_1_82F1E9B6EF1BCA84_METHOD_1_4487EB59871B4D67_OFFSET))(this, a1);
	}
};
