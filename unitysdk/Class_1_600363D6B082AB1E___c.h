#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_89D7FAFCE6B7DF8D;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_600363D6B082AB1E___C_METHOD_1_97428D6179B1CFD2_OFFSET UNITYSDK_OFFSET(0xB354330)
#define CLASS_1_600363D6B082AB1E___C_METHOD_1_EFF06B62A00737C8_OFFSET UNITYSDK_OFFSET(0xB3543B0)
#define CLASS_1_600363D6B082AB1E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3542E0)
#define CLASS_1_600363D6B082AB1E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB354320)

inline static constexpr unsigned int Class_1_600363D6B082AB1E___c_TypeDefinitionIndex = 55397;

class Class_1_600363D6B082AB1E___c : public ::System::Object
{
public:
	static ::Class_1_600363D6B082AB1E___c** StaticGet___9()
	{
		return (::Class_1_600363D6B082AB1E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_600363D6B082AB1E___c_TypeDefinitionIndex)->GetStaticField(0x45A80);
	}
	static ::System::Comparison_1<::Class_2_89D7FAFCE6B7DF8D*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_89D7FAFCE6B7DF8D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_600363D6B082AB1E___c_TypeDefinitionIndex)->GetStaticField(0x45A88);
	}
	static ::System::Action** StaticGet___9__24_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_600363D6B082AB1E___c_TypeDefinitionIndex)->GetStaticField(0x45A90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_600363D6B082AB1E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_600363D6B082AB1E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_97428D6179B1CFD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_600363D6B082AB1E___C_METHOD_1_97428D6179B1CFD2_OFFSET))(this);
	}

	::System::Int32 Method_1_EFF06B62A00737C8(::Class_2_89D7FAFCE6B7DF8D* a1, ::Class_2_89D7FAFCE6B7DF8D* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_89D7FAFCE6B7DF8D*, ::Class_2_89D7FAFCE6B7DF8D*))((::PBYTE)hIl2Cpp + CLASS_1_600363D6B082AB1E___C_METHOD_1_EFF06B62A00737C8_OFFSET))(this, a1, a2);
	}
};
