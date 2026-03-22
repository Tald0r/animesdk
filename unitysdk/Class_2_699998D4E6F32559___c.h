#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8B57604365300A64;
class Class_2_208CC9941471731A_524;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_699998D4E6F32559___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x949CC90)
#define CLASS_2_699998D4E6F32559___C_METHOD_1_8E8225D5C438C827_OFFSET UNITYSDK_OFFSET(0x949CC30)
#define CLASS_2_699998D4E6F32559___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x949CBE0)
#define CLASS_2_699998D4E6F32559___C__CTOR_OFFSET UNITYSDK_OFFSET(0x949CC20)

inline static constexpr unsigned int Class_2_699998D4E6F32559___c_TypeDefinitionIndex = 73296;

class Class_2_699998D4E6F32559___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_8B57604365300A64*>** StaticGet___9__28_0()
	{
		return (::System::Comparison_1<::Class_1_8B57604365300A64*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_699998D4E6F32559___c_TypeDefinitionIndex)->GetStaticField(0x31AE0);
	}
	static ::Class_2_699998D4E6F32559___c** StaticGet___9()
	{
		return (::Class_2_699998D4E6F32559___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_699998D4E6F32559___c_TypeDefinitionIndex)->GetStaticField(0x31AE8);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_524*>** StaticGet___9__79_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_524*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_699998D4E6F32559___c_TypeDefinitionIndex)->GetStaticField(0x31AF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_699998D4E6F32559___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_699998D4E6F32559___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8E8225D5C438C827(::Class_1_8B57604365300A64* a1, ::Class_1_8B57604365300A64* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_8B57604365300A64*, ::Class_1_8B57604365300A64*))((::PBYTE)hIl2Cpp + CLASS_2_699998D4E6F32559___C_METHOD_1_8E8225D5C438C827_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_524* a1, ::Class_2_208CC9941471731A_524* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_524*, ::Class_2_208CC9941471731A_524*))((::PBYTE)hIl2Cpp + CLASS_2_699998D4E6F32559___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
