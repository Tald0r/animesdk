#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A4A5BED90AF2A47;
namespace IFix::Core { class VirtualMachine; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C5146D4455911F4F_METHOD_1_0D85ED38EAEC4B97_OFFSET UNITYSDK_OFFSET(0xB204AF0)
#define CLASS_1_C5146D4455911F4F_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xB204EC0)
#define CLASS_1_C5146D4455911F4F_METHOD_1_39D4F84D0349CD99_OFFSET UNITYSDK_OFFSET(0xB204810)
#define CLASS_1_C5146D4455911F4F_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xB204F00)
#define CLASS_1_C5146D4455911F4F_METHOD_1_8D3A83F5DC35DB7F_OFFSET UNITYSDK_OFFSET(0xB204870)
#define CLASS_1_C5146D4455911F4F_METHOD_1_941387B1DB30440A_OFFSET UNITYSDK_OFFSET(0xB204E40)
#define CLASS_1_C5146D4455911F4F_METHOD_1_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0xB204940)
#define CLASS_1_C5146D4455911F4F_METHOD_1_CAE55E803FE789DB_OFFSET UNITYSDK_OFFSET(0xB2047B0)
#define CLASS_1_C5146D4455911F4F__CCTOR_OFFSET UNITYSDK_OFFSET(0xB204320)
#define CLASS_1_C5146D4455911F4F__CTOR_OFFSET UNITYSDK_OFFSET(0xB204310)

inline static constexpr unsigned int Class_1_C5146D4455911F4F_TypeDefinitionIndex = 52398;

class Class_1_C5146D4455911F4F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C5146D4455911F4F_TypeDefinitionIndex)->GetStaticField(0x39710);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C5146D4455911F4F_TypeDefinitionIndex)->GetStaticField(0x39718);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5146D4455911F4F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C5146D4455911F4F__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_CAE55E803FE789DB(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C5146D4455911F4F_METHOD_1_CAE55E803FE789DB_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Method_1_39D4F84D0349CD99()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C5146D4455911F4F_METHOD_1_39D4F84D0349CD99_OFFSET))();
	}

	static ::System::String* Method_1_8D3A83F5DC35DB7F()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C5146D4455911F4F_METHOD_1_8D3A83F5DC35DB7F_OFFSET))();
	}

	static ::System::Void Method_1_C782C60E11964C7F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C5146D4455911F4F_METHOD_1_C782C60E11964C7F_OFFSET))();
	}

	static ::System::Boolean Method_1_0D85ED38EAEC4B97(::Class_1_7A4A5BED90AF2A47* a1)
	{
		return ((::System::Boolean(*)(::Class_1_7A4A5BED90AF2A47*))((::PBYTE)hIl2Cpp + CLASS_1_C5146D4455911F4F_METHOD_1_0D85ED38EAEC4B97_OFFSET))(a1);
	}

	static ::System::Void Method_1_941387B1DB30440A(::IFix::Core::VirtualMachine* a1)
	{
		return ((::System::Void(*)(::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + CLASS_1_C5146D4455911F4F_METHOD_1_941387B1DB30440A_OFFSET))(a1);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C5146D4455911F4F_METHOD_1_128774387667156B_OFFSET))();
	}

	static ::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C5146D4455911F4F_METHOD_1_601EF3E7226D7DC2_OFFSET))();
	}
};
