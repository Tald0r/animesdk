#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2B44F482F0338480__CTOR_OFFSET UNITYSDK_OFFSET(0x786BBD0)

inline static constexpr unsigned int Class_1_2B44F482F0338480_TypeDefinitionIndex = 59742;

class Class_1_2B44F482F0338480 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B44F482F0338480__CTOR_OFFSET))(this);
	}
};
