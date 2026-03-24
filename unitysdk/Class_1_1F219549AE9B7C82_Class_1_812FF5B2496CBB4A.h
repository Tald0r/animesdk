#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1F219549AE9B7C82_CLASS_1_812FF5B2496CBB4A_METHOD_1_E85AAAC9894EFD96_OFFSET UNITYSDK_OFFSET(0x13C9A440)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_812FF5B2496CBB4A__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9A430)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Class_1_812FF5B2496CBB4A_TypeDefinitionIndex = 62829;

class Class_1_1F219549AE9B7C82_Class_1_812FF5B2496CBB4A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_812FF5B2496CBB4A__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_E85AAAC9894EFD96(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_812FF5B2496CBB4A_METHOD_1_E85AAAC9894EFD96_OFFSET))(this, a1, a2);
	}
};
