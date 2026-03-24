#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A191518F735366A8;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_81BCC5A7D87EA043___C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x73CB020)
#define CLASS_1_81BCC5A7D87EA043___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x73CAFD0)
#define CLASS_1_81BCC5A7D87EA043___C__CTOR_OFFSET UNITYSDK_OFFSET(0x73CB010)

inline static constexpr unsigned int Class_1_81BCC5A7D87EA043___c_TypeDefinitionIndex = 77662;

class Class_1_81BCC5A7D87EA043___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_A191518F735366A8*>** StaticGet___9__12_0()
	{
		return (::System::Action_1<::Class_1_A191518F735366A8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81BCC5A7D87EA043___c_TypeDefinitionIndex)->GetStaticField(0x2AF70);
	}
	static ::Class_1_81BCC5A7D87EA043___c** StaticGet___9()
	{
		return (::Class_1_81BCC5A7D87EA043___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81BCC5A7D87EA043___c_TypeDefinitionIndex)->GetStaticField(0x2AF78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A191518F735366A8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A191518F735366A8*))((::PBYTE)hIl2Cpp + CLASS_1_81BCC5A7D87EA043___C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
