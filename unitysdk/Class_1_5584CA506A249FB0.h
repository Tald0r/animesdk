#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5584CA506A249FB0_METHOD_1_0230712FEFF49551_OFFSET UNITYSDK_OFFSET(0x84682E0)
#define CLASS_1_5584CA506A249FB0_METHOD_1_67018F7580EAC4A0_OFFSET UNITYSDK_OFFSET(0x8467C60)
#define CLASS_1_5584CA506A249FB0_METHOD_1_84D2CF41A744CC73_OFFSET UNITYSDK_OFFSET(0x8467F80)
#define CLASS_1_5584CA506A249FB0__CTOR_OFFSET UNITYSDK_OFFSET(0x8467B80)

inline static constexpr unsigned int Class_1_5584CA506A249FB0_TypeDefinitionIndex = 52564;

class Class_1_5584CA506A249FB0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5584CA506A249FB0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_67018F7580EAC4A0(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_5584CA506A249FB0_METHOD_1_67018F7580EAC4A0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_84D2CF41A744CC73(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5584CA506A249FB0_METHOD_1_84D2CF41A744CC73_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0230712FEFF49551(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_5584CA506A249FB0_METHOD_1_0230712FEFF49551_OFFSET))(this, a1);
	}
};
