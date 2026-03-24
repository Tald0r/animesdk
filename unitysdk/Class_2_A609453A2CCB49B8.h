#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

namespace BinaryTracingCore::Source::TracingTools { class LogChannel; }
namespace BinaryTracingCore::Source::TracingTools { class TracingSystem; }
namespace System { class String; }
namespace System::IO { class FileStream; }

#define CLASS_2_A609453A2CCB49B8_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCE84290)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCE83EF0)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xCE84170)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xCE841D0)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xCE84230)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0xCE84360)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0xCE843C0)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCE83E90)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_F13FB6EFDE7C86C2_OFFSET UNITYSDK_OFFSET(0xCE83E10)
#define CLASS_2_A609453A2CCB49B8_ONCREATE_OFFSET UNITYSDK_OFFSET(0xCE83B90)
#define CLASS_2_A609453A2CCB49B8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE83BF0)
#define CLASS_2_A609453A2CCB49B8_UPDATE_OFFSET UNITYSDK_OFFSET(0xCE83F50)
#define CLASS_2_A609453A2CCB49B8__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE83FE0)
#define CLASS_2_A609453A2CCB49B8__CTOR_OFFSET UNITYSDK_OFFSET(0xCE83FC0)

inline static constexpr unsigned int Class_2_A609453A2CCB49B8_TypeDefinitionIndex = 48093;

class Class_2_A609453A2CCB49B8 : public ::Foundation::SingletonDisposable_1<::Class_2_A609453A2CCB49B8*>
{
public:
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A609453A2CCB49B8_TypeDefinitionIndex)->GetStaticField(0x45530);
	}
	static ::Il2CppArray<::System::Boolean>** StaticGet_Field_2_5()
	{
		return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A609453A2CCB49B8_TypeDefinitionIndex)->GetStaticField(0x45538);
	}
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A609453A2CCB49B8_TypeDefinitionIndex)->GetStaticField(0x45540);
	}
	static ::BinaryTracingCore::Source::TracingTools::LogChannel** StaticGet_Field_2_0()
	{
		return (::BinaryTracingCore::Source::TracingTools::LogChannel**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A609453A2CCB49B8_TypeDefinitionIndex)->GetStaticField(0x45548);
	}
	::System::IO::FileStream* Field_2_4; // 0x10
	::BinaryTracingCore::Source::TracingTools::TracingSystem* Field_2_3; // 0x18
	::System::Boolean Field_2_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_ONCREATE_OFFSET))(this);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_F13FB6EFDE7C86C2(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_F13FB6EFDE7C86C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_6_OFFSET))(this);
	}
};
