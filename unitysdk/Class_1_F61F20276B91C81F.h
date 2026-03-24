#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F61F20276B91C81F_METHOD_1_D65F49E2F6E561AD_OFFSET UNITYSDK_OFFSET(0xAF35110)
#define CLASS_1_F61F20276B91C81F_METHOD_1_E2580544EE366864_OFFSET UNITYSDK_OFFSET(0xAF35EA0)
#define CLASS_1_F61F20276B91C81F__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF35000)
#define CLASS_1_F61F20276B91C81F__CTOR_OFFSET UNITYSDK_OFFSET(0xAF34FF0)

inline static constexpr unsigned int Class_1_F61F20276B91C81F_TypeDefinitionIndex = 65320;

class Class_1_F61F20276B91C81F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F61F20276B91C81F_TypeDefinitionIndex)->GetStaticField(0x46680);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F61F20276B91C81F_TypeDefinitionIndex)->GetStaticField(0x46688);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61F20276B91C81F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F61F20276B91C81F__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_D65F49E2F6E561AD(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F61F20276B91C81F_METHOD_1_D65F49E2F6E561AD_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_E2580544EE366864(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F61F20276B91C81F_METHOD_1_E2580544EE366864_OFFSET))(a1, a2, a3);
	}
};
