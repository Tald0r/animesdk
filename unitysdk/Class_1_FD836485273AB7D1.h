#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4ED21A115C97704D;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FD836485273AB7D1_METHOD_1_28F2941B86E04AA6_OFFSET UNITYSDK_OFFSET(0x7564A00)
#define CLASS_1_FD836485273AB7D1_METHOD_1_2F68A7DFEED1FE13_OFFSET UNITYSDK_OFFSET(0x7564930)
#define CLASS_1_FD836485273AB7D1_METHOD_1_CDAE23E23F96E02D_OFFSET UNITYSDK_OFFSET(0x75646F0)
#define CLASS_1_FD836485273AB7D1_METHOD_1_D6D26A1FC193F2ED_OFFSET UNITYSDK_OFFSET(0x7564770)
#define CLASS_1_FD836485273AB7D1_METHOD_1_FA1393B359A9F162_OFFSET UNITYSDK_OFFSET(0x7564840)
#define CLASS_1_FD836485273AB7D1__CCTOR_OFFSET UNITYSDK_OFFSET(0x7563FF0)

inline static constexpr unsigned int Class_1_FD836485273AB7D1_TypeDefinitionIndex = 72104;

class Class_1_FD836485273AB7D1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Boolean, ::Class_1_4ED21A115C97704D*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Boolean, ::Class_1_4ED21A115C97704D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD836485273AB7D1_TypeDefinitionIndex)->GetStaticField(0x44170);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Single, ::MoleMole::Config::DynamicFloat*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Single, ::MoleMole::Config::DynamicFloat*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD836485273AB7D1_TypeDefinitionIndex)->GetStaticField(0x44178);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DynamicInt*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DynamicInt*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD836485273AB7D1_TypeDefinitionIndex)->GetStaticField(0x44180);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicString*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD836485273AB7D1_TypeDefinitionIndex)->GetStaticField(0x44188);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD836485273AB7D1__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_CDAE23E23F96E02D(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD836485273AB7D1_METHOD_1_CDAE23E23F96E02D_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::DynamicString* Method_1_D6D26A1FC193F2ED(::MoleMole::Config::DynamicString* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::MoleMole::Config::DynamicString*(*)(::MoleMole::Config::DynamicString*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD836485273AB7D1_METHOD_1_D6D26A1FC193F2ED_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_4ED21A115C97704D* Method_1_FA1393B359A9F162(::Class_1_4ED21A115C97704D* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::Class_1_4ED21A115C97704D*(*)(::Class_1_4ED21A115C97704D*, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD836485273AB7D1_METHOD_1_FA1393B359A9F162_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::DynamicFloat* Method_1_2F68A7DFEED1FE13(::MoleMole::Config::DynamicFloat* a1, ::System::Single a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::MoleMole::Config::DynamicFloat*(*)(::MoleMole::Config::DynamicFloat*, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD836485273AB7D1_METHOD_1_2F68A7DFEED1FE13_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::DynamicInt* Method_1_28F2941B86E04AA6(::MoleMole::Config::DynamicInt* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::MoleMole::Config::DynamicInt*(*)(::MoleMole::Config::DynamicInt*, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD836485273AB7D1_METHOD_1_28F2941B86E04AA6_OFFSET))(a1, a2, a3, a4);
	}
};
