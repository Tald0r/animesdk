#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_97;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4303EC47502E9A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198CF220)
#define CLASS_1_F4303EC47502E9A2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x198CFA30)
#define CLASS_1_F4303EC47502E9A2_METHOD_1_0B9B14028145318F_OFFSET UNITYSDK_OFFSET(0x198CFA00)
#define CLASS_1_F4303EC47502E9A2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x198CFA20)
#define CLASS_1_F4303EC47502E9A2_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x198CFE60)
#define CLASS_1_F4303EC47502E9A2_METHOD_1_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x198CFA10)
#define CLASS_1_F4303EC47502E9A2_METHOD_1_C659D9E0EBCF1F11_OFFSET UNITYSDK_OFFSET(0x198CFA40)
#define CLASS_1_F4303EC47502E9A2__CCTOR_OFFSET UNITYSDK_OFFSET(0x198CF9F0)
#define CLASS_1_F4303EC47502E9A2__CTOR_OFFSET UNITYSDK_OFFSET(0x198CF9E0)

inline static constexpr unsigned int Class_1_F4303EC47502E9A2_TypeDefinitionIndex = 31565;

class Class_1_F4303EC47502E9A2 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4303EC47502E9A2_TypeDefinitionIndex)->GetStaticField(0x7BB0);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_97*>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0B9B14028145318F(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_97*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_97*>*))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_METHOD_1_0B9B14028145318F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_97*>* Method_1_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_97*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_METHOD_1_969D9516A75501DE_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	static ::Class_1_F4303EC47502E9A2* Method_1_C659D9E0EBCF1F11()
	{
		return ((::Class_1_F4303EC47502E9A2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_METHOD_1_C659D9E0EBCF1F11_OFFSET))();
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4303EC47502E9A2_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
