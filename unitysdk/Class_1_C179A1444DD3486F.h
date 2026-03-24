#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_C179A1444DD3486F_METHOD_1_5121B8BB61593362_OFFSET UNITYSDK_OFFSET(0xD6EDB50)
#define CLASS_1_C179A1444DD3486F_METHOD_1_76B6FC7A9A488CEF_OFFSET UNITYSDK_OFFSET(0xD6ED490)
#define CLASS_1_C179A1444DD3486F_METHOD_1_8DAE3FBE838EE522_OFFSET UNITYSDK_OFFSET(0xD6ED980)
#define CLASS_1_C179A1444DD3486F_METHOD_1_9389042754EE343C_OFFSET UNITYSDK_OFFSET(0xD6ED750)
#define CLASS_1_C179A1444DD3486F_METHOD_1_EC06111B5EBE4753_OFFSET UNITYSDK_OFFSET(0xD6ED530)
#define CLASS_1_C179A1444DD3486F_METHOD_1_F2D894412665AD6E_OFFSET UNITYSDK_OFFSET(0xD6ED7C0)
#define CLASS_1_C179A1444DD3486F__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6ED370)

inline static constexpr unsigned int Class_1_C179A1444DD3486F_TypeDefinitionIndex = 67850;

class Class_1_C179A1444DD3486F : public ::System::Object
{
public:
	static ::System::Text::StringBuilder** StaticGet_Field_1_1()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C179A1444DD3486F_TypeDefinitionIndex)->GetStaticField(0x3F630);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C179A1444DD3486F_TypeDefinitionIndex)->GetStaticField(0x3F638);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C179A1444DD3486F__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_76B6FC7A9A488CEF(::System::Type* a1)
	{
		return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_C179A1444DD3486F_METHOD_1_76B6FC7A9A488CEF_OFFSET))(a1);
	}

	static ::System::String* Method_1_9389042754EE343C(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C179A1444DD3486F_METHOD_1_9389042754EE343C_OFFSET))(a1);
	}

	static ::System::String* Method_1_F2D894412665AD6E(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_C179A1444DD3486F_METHOD_1_F2D894412665AD6E_OFFSET))(a1);
	}

	static ::System::String* Method_1_EC06111B5EBE4753(::System::Type* a1)
	{
		return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_C179A1444DD3486F_METHOD_1_EC06111B5EBE4753_OFFSET))(a1);
	}

	static ::System::String* Method_1_8DAE3FBE838EE522(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C179A1444DD3486F_METHOD_1_8DAE3FBE838EE522_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5121B8BB61593362(::System::String*& a1)
	{
		return ((::System::Void(*)(::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_C179A1444DD3486F_METHOD_1_5121B8BB61593362_OFFSET))(a1);
	}
};
