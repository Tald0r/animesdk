#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_8A3658A741325FC2;

#define CLASS_2_57CFA3356CA5A658_DISPOSE_OFFSET UNITYSDK_OFFSET(0x671A630)
#define CLASS_2_57CFA3356CA5A658_METHOD_2_2450CFC043E97F54_1_OFFSET UNITYSDK_OFFSET(0x671AB70)
#define CLASS_2_57CFA3356CA5A658_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x671A570)
#define CLASS_2_57CFA3356CA5A658_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x671A890)
#define CLASS_2_57CFA3356CA5A658_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x671AA20)
#define CLASS_2_57CFA3356CA5A658_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x671A7C0)
#define CLASS_2_57CFA3356CA5A658_ONCREATE_OFFSET UNITYSDK_OFFSET(0x8329570)
#define CLASS_2_57CFA3356CA5A658__CCTOR_OFFSET UNITYSDK_OFFSET(0x671A780)
#define CLASS_2_57CFA3356CA5A658__CTOR_OFFSET UNITYSDK_OFFSET(0x671A760)

inline static constexpr unsigned int Class_2_57CFA3356CA5A658_TypeDefinitionIndex = 47310;

class Class_2_57CFA3356CA5A658 : public ::Foundation::SingletonDisposable_1<::Class_2_57CFA3356CA5A658*>
{
public:
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_57CFA3356CA5A658_TypeDefinitionIndex)->GetStaticField(0xA180);
	}
	::Il2CppArray<::Class_1_8A3658A741325FC2*>* Field_2_3; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CFA3356CA5A658__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_57CFA3356CA5A658__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CFA3356CA5A658_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CFA3356CA5A658_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CFA3356CA5A658_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CFA3356CA5A658_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CFA3356CA5A658_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CFA3356CA5A658_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57CFA3356CA5A658_METHOD_2_2450CFC043E97F54_1_OFFSET))(this);
	}
};
