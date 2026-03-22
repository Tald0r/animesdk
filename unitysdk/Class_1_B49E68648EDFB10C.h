#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B49E68648EDFB10C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7E97B60)
#define CLASS_1_B49E68648EDFB10C__CTOR_OFFSET UNITYSDK_OFFSET(0x7E97B50)

inline static constexpr unsigned int Class_1_B49E68648EDFB10C_TypeDefinitionIndex = 68845;

class Class_1_B49E68648EDFB10C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Enum_3_B90C1A15EA6E3C2B>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Enum_3_B90C1A15EA6E3C2B>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B49E68648EDFB10C_TypeDefinitionIndex)->GetStaticField(0x44640);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B49E68648EDFB10C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B49E68648EDFB10C__CCTOR_OFFSET))();
	}
};
